#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int val[8]={0};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            val[a[i]]++;
        }
        for(int i=1;i<8;i++)
        {
            if((val[i]%2)!=0 || val[i]==0)
            {
                printf("no\n");continue;
            }
        }
        int left=0,right=n-1;
        int flag=0;
            for(int h=1;h<8;h++)
            {
             while(val[h]>0)
             {
                if(a[left]==a[right] && a[left]==h)
                {
                  val[h]=val[h]-2;left++;right--;
                }
                else
                {
                    flag=1;break;
                }
            }
            if(flag==1)
                break;
            }
            if(flag==1)
                printf("no\n");
            else
                printf("yes\n");
    }
    return 0;
}
