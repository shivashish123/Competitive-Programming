#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int flag=0;
        if(n%2==0)
            printf("no\n");
        else
        {
            int f=(n+1)/2;
            int c=1;
            for(int j=0;j<n;j++)
            {
                if(j<=f)
                {
                    if(a[j]==c)
                        c++;
                    else{
                        flag=1;
                        break;}
                }
                else
                {
                    c--;
                    if(a[j]==c)
                        c--;
                    else{flag=1;break;}
                }
            }
            if(flag==1)
                printf("no\n");
            else
                printf("yes\n");
        }
    }
    return 0;
}
