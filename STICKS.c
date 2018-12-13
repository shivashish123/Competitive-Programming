#include<stdio.h>
int main()
{
int test;
scanf("%d",&test);
while(test--)
{
    int n;
    int x[1005]={0};
    scanf("%d",&n);
    int a[n];
    int max;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
            max=a[i];
        else if(max<a[i])
            max=a[i];
        x[a[i]]++;
    }
    int c1=0,c2=0;
    int flag=0;
   for(int i=max;i>0;i--)
   {
     if(x[i]>3 && c1==0)
        {c1=i;c2=i}
    else if(x[i]>1 && c1==0)
    {
        c1=i;
    }
     else if(x[i]>1 && c1!=0 && c2==0)
        c2=i;
      if(c2!=0 && c1!=0)
     {
         flag=1;break;
     }
   }
   if(flag==1)
    printf("%d\n",c1*c2);
   else
    printf("-1\n");
}
return 0;
}
