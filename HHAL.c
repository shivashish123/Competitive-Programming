#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100006];
        scanf("%s",s);
        int r=strlen(s)-1;
        int mid=r/2;
        int i;
        for(i=0;i<mid;i++)
        {
            if(s[i]!=s[r-i])
            {
                printf("2\n");break;
            }
        }
        if(i==mid)
            printf("1\n");
    }
    return 0;
}
