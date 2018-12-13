#include<stdio.h>
#include <stdint.h>
int main()
{
    int64_t x;
    scanf("%ld",&x);
    int r=x%6;
    if(x==0)
        printf("no\n");
    else if(r==1 || r==0 || r==3)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
