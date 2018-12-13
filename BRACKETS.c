#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
    char a[100000];
    scanf("%s",a);
    int m=0;
    int bal=0;
    int i=0;
    while(i<strlen(a))
    {
        if(a[i]=='(')
        {
        bal++;
        }
        else
            bal--;
        m=max(m,bal);
            i++;
    }
    for(int i=0;i<m;i++)
    printf("(");
    for(int i=0;i<m;i++)
        printf(")");
    printf("\n");
    }
    return 0;
}
