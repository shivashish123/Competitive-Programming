#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int r=n%8;
        int l=n/8;
        int g;
        if(r==1 || r==2 || r==3)
            g=l*8+r+3;
        else if(r==4 || r==5 || r==6)
            g=l*8+r-3;
        else if(r==0)
            g=n-1;
        else
            g=n+1;
        char ch[8][4]={"SU","LB","MB","UB","LB","MB","UB","SL"};
        int fu=g%8;
        char l[4];
        strcpy(l,ch[fu]);
        printf("%d%s\n",g,l);
    }
    return 0;
}
