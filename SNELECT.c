#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    while(test--)
    {
    char a[1000];
    scanf("%s",a);
    int s=0,m=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='s')
            s++;
        else if(a[i]=='m')
            m++;
    }
    for(int i=0;i<(strlen(a)-1);i++)
    {
        if((a[i]=='m' && a[i+1]=='s')||(a[i]=='s'&&a[i+1]=='m'))
        {
           s--;i++;
        }
    }
    if(s==m)
        printf("tie\n");
    else if(s>m)
        printf("snakes\n");
    else if(s<m)
        printf("mongooses\n");
    }
    return 0;
}
