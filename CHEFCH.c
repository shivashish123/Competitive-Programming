#include<stdio.h>
int main()
{
    int t;
    char a[100010];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        int y=strlen(a);
        char g[y+3];
        char h[y+3];
        for(int i=0;i<y;i++)
        {
            if((i&1)==0)
            {
                b[i]='+';c[i]='-';
            }
            else
            {
               b[i]='-';c[i]='+';
            }
        }
        int c1=0,c2=0;
        for(int i=0;i<y;i++)
        {
            if(a[i]!=b[i])
                c1++;
            else
                c2++;
        }
        if(c1>c2)
            printf("%d\n",c2);
        else
            printf("%d\n",c1);
    }
    return 0;
}
