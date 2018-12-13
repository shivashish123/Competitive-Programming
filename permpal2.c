#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100005];
        scanf("%s",a);
        int y=strlen(a);
        char c[26]={0};
        for(int i=0;i<y;i++)
        {
            c[a[i]-97]++;
        }
        int check=0;
        for(int i=0;i<26;i++)
        {
            if(c[i]&1)
                check++;
            if(check>1)
                break;
        }
        if(check>1)
            printf("no\n");

    }
    return 0;
}
