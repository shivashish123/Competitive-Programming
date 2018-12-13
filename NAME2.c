#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[30000],b[30000];
        scanf("%s%s",a,b);
        int x=strlen(a);
        int y=strlen(b);
        if(x<=y)
        {
        int i=0,j=0;
        int fl=0;
        while(i<x)
        {
          fl=0;
            while(j<y)
            {
                if(b[j]==a[i])
                {fl=1;
                    break;
                }
                else
                    j++;
            }
            if(fl==1)
            i++;
            else if(j==y)
            break;
        }
        if(i==x)
            printf("YES\n");
        else
            printf("NO\n");
        }
        else
        {
        int i=0,j=0;
        int fl=0;
        while(i<y)
        {
          fl=0;
            while(j<x)
            {
                if(a[j]==b[i])
                {fl=1;
                    break;
                }
                else
                    j++;
            }
            if(fl==1)
            i++;
            else if(j==x)
            break;
        }
        if(i==y)
            printf("YES\n");
        else
            printf("NO\n");
        }
    }
    return 0;
}
