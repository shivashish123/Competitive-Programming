#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int k,a,b;
        scanf("%ld%ld%ld",&k,&a,&b);
        if(abs(b-a)==k/2 && k%2==0)
        printf("0\n");
        else if(abs(b-a)<=k/2)
        {
          printf("%ld",abs(b-a)-1);
        }
        else if(abs(b-a)>k/2)
        {
          printf("%ld\n",k-abs(b-a)-1);
        }
    }
    return 0;
}
