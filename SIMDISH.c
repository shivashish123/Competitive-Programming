#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {  int flag=0;
        char a[4][12],b[4][12];
        for(int i=0;i<4;i++)
        scanf("%s",&a[i]);
        for(int j=0;j<4;j++)
        {
            scanf("%s",&b[j]);
            for(int i=0;i<4;i++)
            {
                if(!strcmp(a[i],b[j]))
                {
                    flag++;break;
                }
            }
        }
        if(flag>=2)
            printf("similar\n");
        else
            printf("dissimilar\n");
    }
    return 0;
}
