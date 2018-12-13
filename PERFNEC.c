#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,g,q,r,d;
    int t;
    scanf("%d%d%d%d%d%d",&s,&g,&q,&r,&d,&t);
    int a[101][406];
    memset(a,-1,sizeof(a));
    a[0][202]=0;
    a[1][200]=s;
    a[1][201]=g;
    a[1][202]=q;
    a[1][203]=r;
    a[1][204]=d;
    for(int i=2;i<=100;i++)
    {
        for(int j=0;j<=405;j++)
        {
            if(a[i-1][j-2]>=0 && (j-2)>=0)
            {
                if(a[i][j]==-1)
                    a[i][j]=a[i-1][j-2]+d;
                else
                    a[i][j]=min(a[i][j],a[i-1][j-2]+d);
            }
            if(a[i-1][j-1]>=0 && (j-1)>=0)
            {
                if(a[i][j]==-1)
                    a[i][j]=a[i-1][j-1]+r;
                else
                    a[i][j]=min(a[i][j],a[i-1][j-1]+r);
            }
            if(a[i-1][j]>=0)
            {
                if(a[i][j]==-1)
                    a[i][j]=a[i-1][j]+q;
                else
                    a[i][j]=min(a[i][j],a[i-1][j]+q);
            }
            if(a[i-1][j+1]>=0 && (j+1)<=405)
            {
                if(a[i][j]==-1)
                    a[i][j]=a[i-1][j+1]+g;
                else
                    a[i][j]=min(a[i][j],a[i-1][j+1]+g);
            }
            if(a[i-1][j+2]>=0 && (j+2)<=405)
            {
                if(a[i][j]==-1)
                    a[i][j]=a[i-1][j+2]+s;
                else
                    a[i][j]=min(a[i][j],a[i-1][j+2]+s);
            }
        }
    }
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>=0 && x<101 && y<201 && y>-201)
             printf("%d\n",a[x][y+202]);
        else
            printf("-1\n");
    }
}
