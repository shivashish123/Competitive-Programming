#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int max,min;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            max=a[0];min=a[0];
        }
        else
        {
            if(a[i]>max)
                max=a[i];
            else if(a[i]<min)
                min=a[i];
        }
    }
    while(k--)
    {
        int g;
        scanf("%d",&g);
        if(g>=min && g<=max)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
