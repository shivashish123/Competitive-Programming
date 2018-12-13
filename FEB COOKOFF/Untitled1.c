#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t)
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int a[n][5];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {scanf("%d",&a[i][j]);
        if(a[i][j]==1)
            sum++;
        }
    }
    if(sum==0)
        printf("Beginner\n");
    else if(sum==1)
        printf("Junior Developer\n");
     else if(sum==2)
        printf("Middle Developer\n");
      else  if(sum==3)
        printf("Senior Developer\n");
      else  if(sum==4)
        printf("Hacker\n");
    else  if(sum==5)
        printf("Jeff Dean\n");

    }
    return 0;
}

