#include<stdio.h>
#include<string.h>
#define Max 1000000
int main()
{
    unsigned int test;
int i,j;
    scanf("%u",&test);
    for(i=0;i<test;i++)
    {
        char s[Max];
        scanf("%s",s);
	long int h=strlen(s);
        long int count=0;
        for(j=0;j<h;j++)
	{
        if(s[j]=='4')
	count++;
	}
	printf("%ld\n",count);
    }
    return 0;
}
