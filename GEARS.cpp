#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long int a[n+1];
    int dir[n+1],id[n+1];
    for(int i=1;i<=n;i++)
    {
        id[i]=-1;
        scanf("%ld",&a[i]);
    }
    while(m--)
    {
        int x;
        scanf("%d",&x);
        if(x==1)
        {
            int y;long int z;
            scanf("%d%ld",&y,&z);
            a[y]=z;
        }
        else if(x==2)
        {
            int y,z;
            scanf("%d%d",&y,&z);
            if(id[y]==-1 && id[z]==-1)
            {
                int r1=min(y,z);
                id[y]=id[z]=r1;
                dir[y]=1;
                dir[z]=-1;
            }
            else if(id[y]==-1)
            {
                id[y]=id[z];
                dir[y]=-1*dir[z];
            }
            else if(id[z]==-1)
            {
                id[z]=id[y];
                dir[z]=-1*dir[y];
            }
            else
            {
                if(dir[z]==dir[y] && dir[z]!=0)
                {
                    for(unsigned int i=1;i<=n;i++)
                        {
                            if(id[i]==id[y] || id[i] == id[z])
                                dir[i]=0;
                        }
                }
                else
                {
                    if(id[z]>id[y])
                    {
                        for(unsigned int i=1;i<=n;i++)
                        {
                            if(id[i]==id[z])
                            {
                                id[i]=id[y];
                            }
                        }
                    }
                    else
                    {
                        for(unsigned int i=1;i<=n;i++)
                        {
                            if(id[i]==id[y])
                            {
                                id[i]=id[z];
                            }
                        }
                    }
                }
            }
        }
        else
        {
            long int y,z,vel;
            scanf("%ld%ld%ld",&y,&z,&vel);
            if(id[y]==-1 || id[z]==-1)
            {
                printf("0\n");
            }
            else if(id[y]!=id[z])
            {
                printf("0\n");
            }
            else if(dir[y]==0)
            {
                printf("0\n");
            }
            else
            {
                long int r1=a[y]*vel;
                long int r2=a[z];
                if(dir[y]!=dir[z])
                    printf("-");
                long int h=__gcd(r1,r2);
                r1=r1/h;
                r2=r2/h;
                printf("%ld/%ld\n",r1,r2);
            }
        }
    }
}
