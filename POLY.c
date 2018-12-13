#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int arr[n][4];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<4;j++)
            scanf("%d",&arr[i][j]);
        }
        int q;
        scanf("%d",&q);
        while(q--)
        {
            int x;
            scanf("%d",&x);
            long long int min=arr[0][0]+x*arr[0][1]+x*x*arr[0][2]+x*x*x*arr[0][3];
            for(int l=1;l<n;l++)
            {
                long long int temp=arr[l][0]+x*arr[l][1]+x*x*arr[l][2]+x*x*x*arr[l][3];
                if(min>temp)
                    min=temp;
            }
            printf("%lld\n",min);
        }


    }
    return 0;
}
