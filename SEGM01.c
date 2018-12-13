#include<stdio.h>
int main()
{
    int test;scanf("%d",&test);
    while(test--)
    {
        char s[100000];
        scanf("%s",s);
        int flag=0;
        int c=0;
        for(int i=0;i<strlen(s);i++)
        {
          if((a[i]=='0'&&a[i+1]=='1' )||(a[i]=='1'&&a[i+1]=='0'))
            flag++;
            if(a[i]=='0')
             c++;
        }
        if(flag<=2 && c!=strlen(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
