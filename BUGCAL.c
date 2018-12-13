#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
    char find[100];
    int j=0;
    long int a,b,s;
    scanf("%ld%ld",&a,&b);
    while(a!=0 || b!=0)
    {
         s=a%10+b%10;
         s=s%10;
        a=a/10;
        b=b/10;
        find[j]=s+48;
        j++;
    }
    int flag=0;
    for(int i=j-1;i>=0;i--)
    {
        if(find[i]!='0')
            flag=1;
    if(flag=1||i=0)
     printf("%c",find[i]);
    }
        printf("\n");
    }
    return 0;
}
