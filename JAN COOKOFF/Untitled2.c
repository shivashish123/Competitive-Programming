#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,s;
        scanf("%d%d%d",&n,&k,&s);
        int z=ceil((k*s)/n);
        if(((n-k)*(s-1))<k)
            printf("-1\n");
        else
            printf("%d\n",z);
    }
    return 0;
}
