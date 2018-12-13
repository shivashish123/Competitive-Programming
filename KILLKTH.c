#include<iostream.h>
#include<string.h>
using namespace std
int main()
{
    string a,c;
    cin>>a;
    vector<sring> list;
    int len=strlen(a);
    int up=0,down=0;
    while(up<n)
    {
        while(down<n)
        {
        char g[10000];
        int l=0;
        for(int i=up;i<=down;i++)
            g[l++]=a[i];
        g[l]='\0';
        list.push_back(g);
        down++;
        }
        down=up+1;
        up++;
    }
    list.sort();
    int x=list.size();
    c=list[0];
    for(int i=1;i<x;i++)
        c+=list[i];
    int q,m;
    long int p;
    long int g=0;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%ld%d",&p,&m);
        int y=(p*g)%m;
        printf("%c\n",c[y]);
    }
    return 0;
}
