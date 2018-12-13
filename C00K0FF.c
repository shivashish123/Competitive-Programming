#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int b[7]={0};
        char a[n][25];
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i]);
            if(!strcmp(a[i],"cakewalk"))
                b[0]++;
            else if(!strcmp(a[i],"simple"))
                b[1]++;
            else if(!strcmp(a[i],"easy"))
                b[2]++;
            else if(!strcmp(a[i],"easy-medium"))
                b[3]++;
            else if(!strcmp(a[i],"medium"))
                b[4]++;
            else if(!strcmp(a[i],"medium-hard"))
                 b[5]++;
            else if(!strcmp(a[i],"hard"))
                 b[6]++;
        }
        if(b[0]>0 && b[1]>0 && b[2]>0 && (b[3]>0 || b[4]>0) && (b[5]>0 || b[6]>0))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
