#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[6][15];
        for(int i=0;i<6;i++)
            scanf("%s",a[i]);
        if((!strcmp(a[0],a[2]))&&(!strcmp(a[0],a[4])))
            printf("YES\n");
        else if((!strcmp(a[2],a[0]))&&(!strcmp(a[5],a[2])))
            printf("YES\n");
        else if((!strcmp(a[0],a[4]))&&(!strcmp(a[0],a[3])))
            printf("YES\n");
        else if((!strcmp(a[0],a[5]))&&(!strcmp(a[0],a[3])))
            printf("YES\n");
        else if((!strcmp(a[1],a[4]))&&(!strcmp(a[1],a[2])))
            printf("YES\n");
        else if((!strcmp(a[2],a[1]))&&(!strcmp(a[5],a[2])))
            printf("YES\n");
        else if((!strcmp(a[1],a[3]))&&(!strcmp(a[1],a[5])))
            printf("YES\n");
        else if((!strcmp(a[1],a[3]))&&(!strcmp(a[1],a[4])))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
