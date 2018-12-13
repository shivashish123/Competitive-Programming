#include<stdio.h>
#include<math.h>
int main()
{int test;
scanf("%d",&test);
while(test--)
{
    int n;
    scanf("%d",&n);
    int a[3][2];
    for(int i=0;i<3;i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
    }
    int count=0;
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
      {
          int c=(a[j][1]-a[i][1])*(a[j][1]-a[i][1]);
          int f=(a[j][0]-a[i][0])*(a[j][0]-a[i][0]);
          float h=sqrt(c+f);
          if(h<=n)
            count++;
      }
    }
    if(count>=2)
        printf("yes\n");
    else
        printf("no\n");
}
return 0;
}
