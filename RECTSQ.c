#include<stdio.h>
int gcd(int x,int y) {
    if(x == 0)
      return y;
    if(y == 0)
      return x;
    return gcd(y,x%y);
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int l,b;
        scanf("%d%d",&l,&b);
        int f=gcd(l,b);
        int d=l/f;
        int e=b/f;
        int area=d*e;
        printf("%d\n",area);
    }
    return 0;
}
