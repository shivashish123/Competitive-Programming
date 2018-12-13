#include<stdio.h>
int gcd(int x,int y) {
    if(x == 0)
      return y;
    if(y == 0)
      return x;
    return gcd(y,x%y);
}
int main(void) {
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        int a[n];
        int h;
        for(int i = 0;i < n;i++) {
            scanf("%d",&a[i]);
            if(i == 0) {
                h = a[i];
            }
            else {
                h = gcd(h,a[i]);
            }
        }
        for(int i = 0;i < n;i++) {
            printf("%d ",a[i]/res);
        }
       printf("\n");
    }
    return 0;
}
