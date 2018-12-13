int dif(int tem)
{
    int a=0,b=0;
    int ti;
    while(tem>0)
            {
              ti=tem%10;
                if((ti)!=0)
                {
                if((ti)&1)
                a+=ti;
                else
                b+=ti;
                }
                tem=tem/10;
            }
    if(a>b)
        return (a-b);
    else
        return (b-a);
}
int main()
{
    long int a[1000001]={0};
    a[1]=2;
    a[2]=12;
    for(int j=3;j<=1000000;j++)
    {
        a[j]=2*a[j-1]+dif(2*j)+2*dif(2*j-1)+dif(2*j-2)-a[j-2]-2*dif(j);
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
     scanf("%d",&n);
     printf("%ld\n",a[n]);
    }
    return 0;
}
