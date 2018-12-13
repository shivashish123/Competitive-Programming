#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int a[26];
        for(int i=0;i<26;i++)
        {
            scanf("%d",&a[i]);
        }
        char s[100000];
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++)
        {
          if(a[s[i]-97]!=0)
            a[s[i]-97]=0;
        }
        int cost=0;
        for(int i=0;i<26;i++)
        {
                cost+=a[i];
        }
        printf("%d\n",cost);
    }
    return 0;
}
