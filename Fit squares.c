#include<stdio.h>
int main()
{
int test;
scanf("%d",&test);
for(int i=0;i<test;i++)
{
int n;
scanf("%d",&n);
int g=n/2;
if(g < 2)
printf("0\n");
else
{
long int h=(g*(g-1))/2;
printf("%ld\n",h);
}
}
return 0;
}