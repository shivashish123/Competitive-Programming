#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='Y')
            {
              printf("NOT INDIAN\n");
              flag=1;
              break;
            }
            else if(a[i]=='I')
             {
                 printf("INDIAN\n");
                 flag=1;
                 break;
             }
        }
        if(flag==0)
            printf("NOT SURE\n");
    }
    return 0;
}

