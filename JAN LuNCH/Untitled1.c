#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        itn count=0;
        for(int i=0;i<n;i++)

        {scanf("%d",&a[i]);
        if(a[i]&1)
            count++;
        }
        if(count&1)
            printf("2\n");
        else
            printf("1\n");

    }
    return 0;
}
