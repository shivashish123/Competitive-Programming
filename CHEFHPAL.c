#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,r;
        scanf("%d%d",&n,&r);
        int count;
        char a[n+1];
        if(r==1)
        {
          count=n;
          for(int hl=0;hl<n;hl++)
          {
            a[hl]='a';
          }
          a[n]='\0';
        }
        else if(n<=r)
        {
            count=1;
            for(int i=0;i<n;i++)
            {
                a[i]=i+97;
            }
            a[n]='\0';
        }
        else if(r==2)
        {
            if(n==1)
            {count=1;
                a[0]='a';
                a[1]='\0';
            }
            else if(n>=2 && n<=4)
            {
                count=2;
                if(n==2){count=1;strcpy(a,"ab");}
                else if(n==3)strcpy(a,"aab");
                else strcpy(a,"aabb");
            }
            else if(n>=5 && n<=8)
            {
                count=3;
                if(n==5)strcpy(a,"aaabb");
                else if(n==6)strcpy(a,"aaabbb");
                else if(n==7)strcpy(a,"aaababb");
                else if(n==8)strcpy(a,"aaababbb");
            }
            else
            {
                count=4;
                for(int s=0;s<n;s++)
                {
                    if(s%6==0 || s%6==1 || s%6==3)
                        a[s]='a';
                    else
                        a[s]='b';
                }
                a[n]='\0';
            }
        }
        else
        {
            count=1;
            int al=97;
            for(int h=0;h<n;h++)
            {
                if(al>122 || (al-97)>=r)
                    al=97;
                    a[h]=al;
                    al++;
            }
            a[n]='\0';
        }
        printf("%d %s\n",count,a);
    }
    return 0;
}
