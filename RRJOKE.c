#include<sttdio.h>
#include<math.h>
int main()
{
    int tes;
    scanf("%d",&tes);
    while(tes--)
    {
        int n;
        scanf("%d",&n);
        int a[n][2];
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&a[i][0],&a[i][1]);
        }
        int c=1;
        for(int h=2;h<=n;h++)
        {
            c=c^h;
        }
        printf("%d\n",c);
    }
    return 0;
}
