#include<stdio.h>
int main()
{
    char c[50];
    while(scanf("%s",c)!=EOF)
    {
        int l=0,m=0;
        int pos;
        int a=0,b=0;
        int flag=0;
        for(int i=0;i<10;i++)
        {
            if(c[i]=='1' && i%2==0)
             {
                l++;
            }
            else if(c[i]=='1')
            {
                m++;
            }
                if(l>m && (((10-i)/2+m)<l)  )
                {
                pos=i+1;a=1;flag=1;break;
                }
                else if(m>l && (((9-i)/2+l)<m) )
                {
                pos=i+1;b=1;flag=1;break;
                }
        }
        if(l==m && flag==0)
        {
           for(int j=10;j<20;j+=2)
           {
              if(c[j]=='0' && c[j+1]=='1')
              {
                  b=1;pos=j+2;flag=1;break;
              }
              else if(c[j]=='1' && c[j+1]=='0')
              {
                  a=1;pos=j+2;flag=1;break;
              }
           }
        }
        else if(flag==0)
        {
                for(int u=10;u<20;u++)
                {
                    if(c[u]=='1' && u%2==0)
                       {    l++;
                       }
                    else if(c[u]=='1')
                        {
                            m++;
                        }
                    if(l>m && ((m+(20-u)/2)<l) )
                            {
                            a=1;flag=1;pos=u+1;break;
                            }
                    else if(m>l && ((l+(19-u)/2)<m) )
                        {
                        b=1;flag=1;pos=u+1;break;
                        }
                }
        }
        if(a==1)
        printf("TEAM-A %d\n",pos);
        else if(b==1)
        printf("TEAM-B %d\n",pos);
        else
            printf("TIE\n");
    }
    return 0;
}
