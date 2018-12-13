#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int pos=0;
    for(int i=0;i<m;i++)
    {
      char x;
      int d;
        scanf("%c %d",&x,&d);
        if(x=='R')
          printf("%d\n",a[pos+d-1]);
        else if(x=='A')
        {
          pos=pos+(d+n-1)%n;
        }
        else if(x=='C')
        {
            pos=pos+(n-1-d)%n;
        }
    }
    return 0;
}
