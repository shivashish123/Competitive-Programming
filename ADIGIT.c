#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char s[n+10];
    scanf("%s",s);
    int x[10][n];
    memset(x,0,sizeof(x));
    x[s[0]-48][0]=1;
    for(int i=0;i<10;i++)
    {for(int j=1;j<n;j++)
        {x[i][j]=x[i][j-1];
        if((s[j]-48)==i)
            x[i][j]++;
        }
    }
    while(m--)
    {   int p;
        scanf("%d",&p);
        int h=(s[p-1]-48);
        int b1=0,b2=0;
        for(int i=0;i<h;i++)
            {b1+=x[i][p-1]*(h-i);}
        for(int i=h+1;i<10;i++)
            {b2+=x[i][p-1]*(i-h);}
        printf("%d\n",(b1+b2));
    }
    return 0;
}
