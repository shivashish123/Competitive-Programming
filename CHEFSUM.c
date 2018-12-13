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
        int min,pos;
        for(int u=0;u<n;u++)
        {
            scanf("%d",&a[u]);
            if(u==0)
            {
              pos=u+1;min=a[u];
            }
            else if(min>a[u])
            {
                min=a[u];pos=u+1;
            }
        }
        printf("%d\n",pos);
    }
    return 0;
}
