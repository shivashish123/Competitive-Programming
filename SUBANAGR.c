#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a<=b)
        return a;
     return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    char a[1000];
    int b[26]={0};
    int m[26]={0};
    for(int u=0;u<t;u++)
       {
        scanf("%s",a);
        int y=strlen(a);
        memset(b,0,sizeof(b));
        if(u==0 || u>1)
        {
            for(int i=0;i<y;i++)
            {
            b[a[i]-97]++;
            }
        }
        if(u==1)
        {for(int i=0;i<y;i++)
        {
            m[a[i]-97]++;
        }
        }
        if(u>=1)
            {
                for(int x=0;x<26;x++)
                    {m[x]=min(m[x],b[x]);}
            }
        }
        int fl=0;
        for(int x=0;x<26;x++)
        {
            while(m[x]--)
            {
                printf("%c",x+97);
                fl=1;
            }
        }
        if(fl==0)
            printf("no such string");
        return 0;
}
