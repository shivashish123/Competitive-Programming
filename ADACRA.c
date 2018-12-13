#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char a[100];
        scanf("%s",a);
        int i=0;
        int u=0,d=0;
        while(i<strlen(a))
        {
          if(a[i]=='U')
          {int j=i;
               while(a[j]!='D')
               {
                   j++;
               }
            i=j;
            u++;
          }
          else{
            int j=i;
            while(a[j]!='U')
                j++;
            i=j;
            d++;
          }
        }
        int min;
        if(u>d)
            min=d;
        else min=u;
        printf("%d\n",min);
    }
    return 0;
}
