#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char s[1000000];
        scanf("%s",s);
        int j=0;
        int flag=0;
        while(j<(strlen(s)-1))
        {
          if(s[j]=='S' && s[j+1]=='C')
                {
                flag=1;break;
                }
          else if(s[j]=='E' && s[j+1]=='C' )
                {
                flag=1;break;
                }
            else if(s[j]=='S' && s[j+1]=='E' )
            {
                flag=1;break;
            }
          j++;
        }
        if(flag==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
