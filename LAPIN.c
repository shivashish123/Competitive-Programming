#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1000];
        scanf("%s",a);
        int x=strlen(a);
        int b[26]={0};
        int c[26]={0};
            for(int i=0;i<(x/2);i++)
                b[a[i]-97]++;
            if(x%2==0)
            {
             for(int j=x/2;j<x;j++)
                c[a[i]-97]++;
            }
            else
            {for(int j=(x/2)+1;j<x;j++)
                c[a[i]-97]++;}
                int flag=0;
                for(int h=0;h<26;h++)
                {
                    if(b[h]!=c[h])
                    {
                        flag=1;break;
                    }
                }
                if(flag==0)
                    printf("YES\n");
                else
                    printf("NO\n");
    }
    }
    return 0;
}
