#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000000];
        scanf("%s",s);
        char l[1000];
        int j=0;
        int c=0;
        int pos;
        for(int i=0;i<strlen(s);i++)
        {
            if(c==0)
                {
                    if(a[i]>=65 && a[i]<=90)
                        l[j++]=a[i];
                    else
                        l[j++]=(a[i]-32);
                    c=1;
                }
            else if(a[i]==' ')
            {c=0;pos=i;l[j++]='.';l[j++]=' '};
        }
        j--;
        j--;
        for(int i=pos+2;i<strlen(s);i++)
            {
                if(a[i]>=97 && a[i]<=122)
                    l[j++]=a[i];
                else
                    l[j++]=(a[i]+32);
            }
            l[j]='\0';
            printf("%s\n",l);
    }
    return 0;
}
