#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 60
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
    long int a[MAX];
    int j=0;
    char p[13];
    int y=0;
    char arr[200];
    scanf("%[^\n]%*c",arr);
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]!=' ')
            p[y++]=arr[i];
        else
        {
            p[y]='\0';
            long int value=atoi(p);
            a[j++]=value;
            y=0;
        }
    }
    p[y]='\0';
    long int value=atoi(p);
    a[j++]=value;
    int l=j-1;
    for(int i=0;i<j;i++)
    {
        if(a[i]==l)
        {
            a[i]=0;break;
        }
    }
    long int max=a[0];
    for(int i=1;i<j;i++)
    {
      if(max<a[i])
            max=a[i];
    }
    printf("%ld\n",max);
    }
    return 0;
}
