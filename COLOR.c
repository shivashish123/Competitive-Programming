#include<stdio.h>
int main()
{
    int tes;
    scanf("%d",&tes);
    while(tes--)
    {
        int n;
        scanf("%d",&n);
        char b[n];
        int r=0,g=0,b=0;
        scanf("%s",b);
        for(int i=0;i<strlen(b);i++)
        {
            if(b[i]=='R') r++;
            else if(b[i]=='G') g++;
            else
                b++;
        }
        int max;
        if(r>g && r>b)
            max=r;
        else if(g>b)
            max=g;
        else
            max=b;
        printf("%d\n",n-max);
    }
    return 0;
}
