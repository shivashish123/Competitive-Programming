#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100007];
        scanf("%s",a);
        int j=0,i=strlen(a)-1;
        if(i==1)
        {
            printf("YES\n");continue;
        }
        int fl=0;
        int x,y;
        while(j<=i)
        {
            if(a[j]!=a[i])
                {
                    fl=1;
                    x=j;
                    y=i;
                    break;
                }
            j++;i--;
        }
        if(fl==0)
        {
            printf("YES\n");continue;
        }
        int p=0;
        j=0,i=strlen(a)-1;
        while(j<=i)
        {
            if(j==x)
                j++;
            if(a[j]!=a[i])
                {
                    p=1;
                    break;
                }
            j++;i--;
        }
        if(p==0)
            printf("YES\n");
        else
        {
            p=0;
            j=0,i=strlen(a)-1;
            while(j<=i)
            {
            if(i==y)
                i--;
            if(a[j]!=a[i])
                {
                    p=1;
                    break;
                }
            j++;i--;
            }
            if(p==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
