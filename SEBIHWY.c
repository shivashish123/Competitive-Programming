#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
    float s,sg,fg,d,t;
    scanf("%f%f%f%f%f",&s,&sg,&fg,&d,&t);
    float z=(d*50*18)/(t*5);
    float f=z+s;
    float l=sg-f;
    float k=fg-f;
    if(k<0)
    k=-k;
    if(l<0)
    l=-l;
    if(l<k)
        printf("SEBI\n");
    else if(l>k)
        printf("FATHER\n");
    else if(l==k)
        printf("DRAW\n");
    }
    return 0;
}
