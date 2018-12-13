#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    char b[3][3]={"ch","he","ef"};
    int count=0;
    while(t--)
    {
    char a[1000];
    scanf("%s",a);
    int y=strlen(a);
    int flag=0;
    for(int i=0;i<y-1;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i]==b[j][0] && a[i+1]==b[j][1] )
            {
                flag=1;break;
            }
        }
    }
    if(flag==1)
        count++;
    }
    printf("%d\n",count);
    return 0;
}
