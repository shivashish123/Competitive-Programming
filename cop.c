#include<stdio.h>
int main()
{
int n,t;
scanf("%d%d",&n,&t);
int a[n],b[n];
int i,j;
for(i=0;i<n;i++)
{
scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++)
{
    for( j=i+1;j<n;j++)
    {
    if(b[i]<b[j])
    {
    int t=b[i];
    b[i]=b[j];
    b[j]=t;
    int l=a[i];
    a[i]=a[j];
    a[j]=l;
    }
    }
}
int time=0,cop=0;
for(i=0;i<n;i++)
{
if(time+a[i]<=t)
{
cop+=b[i];
time+=a[i];
}
}
printf("%d",cop);

}
