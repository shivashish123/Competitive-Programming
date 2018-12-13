#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        char a[n][m+2];
        for(int i=0;i<n;i++)
        scanf("%s",a[i]);
        int count1=0,count=0;
        char b[n][m];
        char c[n][m];
        int l=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            l=f;
            for(int j=0;j<m;j++)
            {
                if((l%2)==0)
                {
                    b[i][j]='G';c[i][j]='R';
                }
                else
                {
                    c[i][j]='G';b[i][j]='R';
                }
                l++;
            }
            f++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if((a[i][j]-b[i][j])>0)
                count+=5;
               else if((a[i][j]-b[i][j])<0)
                count+=3;
               if((a[i][j]-c[i][j])>0)
                count1+=5;
               else if((a[i][j]-c[i][j])<0)
                count1+=3;
            }
        }
        int min;
        if(count<count1)
            min=count;
        else
            min=count1;
        printf("%d\n",min);
    }
    return 0;
}
