
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        char a[100000];
        scanf("%s",a);
        int flag=0,t=0;
        int fl=0,tl=0;
        int i=0;
        int c=0,d=0;
        while(i<strlen(a))
        {
            if(a[i]=='A')
            {
                int z=i;
                for(int j=i+1;a[j]!='A';j++)
                {
                    if(a[j]=='\0')
                    {
                        t=1;
                        break;
                    }
                    else if(a[j]=='B')
                    {
                        flag=1;
                        break;
                    }

                }
                if(flag==1)
                {
                    c++;
                    i=j;
                }
                else if(t==1)
                {
                    break;
                    c++;
                }
                else
                {
                    c+=j-z+1;
                    i=j+1;
                }

            }
            if(a[i]=='B')
            {
                int u=i;
                for(int j=i+1;a[j]!='A';j++)
                {
                    if(a[j]=='\0')
                    {
                        tl=1;
                        break;
                    }
                    else if(a[j]=='B')
                    {
                        fl=1;
                        break;
                    }

                }
                if(fl==1)
                {
                    c++;
                    i=j;
                }
                else if(tl==1)
                {
                    break;
                    d++;
                }
                else
                {
                    d+=j-u+1;
                    i=j+1;
                }



            }
        }
        cout<<c<<" "<<d<<endl;

    }
    return 0;
}
