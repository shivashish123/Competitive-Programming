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
        int p=0,q=0,r=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==1)
                p++;
            else if(a[j]==-1)
                q++;
            else if(a[j]!=0)
                r++;
        }
        if(r>1 || r==1 && q>=1 || p==0 && q>1)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
