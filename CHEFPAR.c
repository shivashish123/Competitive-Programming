#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int m,k;
    int n;
    scanf("%d%ld%ld",&n,&m,&k);
    long long int a[n],b[m];
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(int i=0;i<m;i++)
        scanf("%lld",&b[i]);
    long long int ans;
    long long int max1=-1;
    long long int max2=1;
    long long int r=0;
    int j=min(k,1000);
        for(int k=0;k<j;k++)
        {
        for(int l=0;l<m;l++)
         {
                max2=1;
             for(int i=0;i<n;i++)
         {
               max2=((a[i]+k)*(max2))%b[l];
         }
         r+=max2;
         }
         if(r>max1)
         {
             max1=r;
             ans=k;
         }
        }
    for(int i=0;i<n;i++)
        printf("%ld ",a[i]+ans);
    printf("\n");

}
