#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int d;
        char a[10];
        scanf("%d%s",&d,a);
        int l[d];
        int sum=0;
        for(int i=0;i<d;i++)
        {
          scanf("%d",&l[i]);
          sum+=l[i];
        }
        if(!strcmp(a,"Dee"))
        {
            if(sum%2==0 d==1 ))
                printf("Dee\n");
            else
                printf("Dum\n");
        }
        else
        {
                    printf("Dum\n");
        }

    }
    return 0;
}
