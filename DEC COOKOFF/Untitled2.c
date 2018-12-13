#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char x[25],a[25],b[25];
        int d=0,e=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s",x);
            if(i==0)
            {
                strcpy(a,x);
                d++;
            }
            else if(strcmp(a,x))
            {
                strcpy(b,x);
                e++;
            }
            if(d>0)
            {
                if(!strcmp(x,a))
                    d++;
            }
            if(e>0)
            {
                if(!strcmp(x,b))
                    e++;
            }
        }
        if(d>e)
            printf("%s\n",a)
        else if(e>d)
            printf("%s\n",b);
        else
            printf("Draw\n");
    }
    return 0;
}
