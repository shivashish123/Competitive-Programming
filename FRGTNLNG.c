#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        char a[x][10];
        int flag[x];
        for(int h=0;h<x;h++)
        {
            scanf("%s",a[h]);
            flag[h]=0;
        }
        for(int u=0;u<y;u++)
        {
            int s;
            scanf("%d",&s);
            char g[s][10];
            for(int ht=0;ht<s;ht++)
            {
            scanf("%s",g[ht]);
            for(int o=0;o<x;o++)
            {
            if(!strcmp(g[ht],a[o]) && flag[o]==0)
                flag[o]=1;
            }
            }
        }
        for(int l=0;l<x;l++)
            {
             if(flag[l]==1)
                    printf("YES ");
              else
              printf("NO ");
            }
            printf("\n");
    }
    return 0;
}
