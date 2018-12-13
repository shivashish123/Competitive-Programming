#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--)
    {
        int a,k,x[3];
        double ans;
        scanf("%d%d%d%d%d",&a,&k,&x[0],&x[1],&x[2]);
        qsort(x,3,sizeof(int),cmp);
        if((x[2]-x[0])>=(2*k+2*a))
            printf("0\n");
        else if(((x[2]-x[0]))<=2*k)
            printf("%lld\n",(a*a));
        else
        {
            ans=(2*k+a+x[0]-x[2])*a;
            printf("%lf\n",ans);
        }
    }
}
