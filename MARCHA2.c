#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k;
        scanf("%d",&k);
        int a[k];
        for(int h=0;h<k;h++)
            scanf("%d",&a[h]);
        int l=1;
        int flag=0;
        for(int j=0;j<k;j++)
        {
            if(a[j]<l && j!=(k-1))
                l=2*l-a[j];
            else if(j==(k-1) && a[j]=l)
                flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
