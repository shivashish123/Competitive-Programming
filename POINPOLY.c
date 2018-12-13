#include<stdio.h>
struct points
    {
        long int x;
        long int y;

    };
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int n,i,k,j;
            struct points p[200001];
            struct points ans[20001];
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                scanf("%ld %ld",&p[i].x,&p[i].y);
            }
            p[0].x=p[n].x;
            p[0].y=p[n].y;
            p[n+1].x=p[1].x;
            p[n+1].y=p[1].y;
            long int  minx=3000000000;
            long int miny=3000000000;
            long int maxx=-3000000000;
            long int maxy=-3000000000;
            for(i=0;i<n;i++)
            {
                if(p[i].x<minx)
                minx=p[i].x;
                if(p[i].x>maxx)
                maxx=p[i].x;
                if(p[i].y<miny)
                miny=p[i].y;
                if(p[i].y>maxy)
                maxy=p[i].y;


            }

            int check=n/10,flag=0;
            long int top,bottom;

            long int x0=minx+1;
            long int y0=miny+1;
            int t=0,u=0;
            if(maxx-miny>maxy-miny)
            {
            while(y0<maxy)
            {
                int flb1=0;
                int flt1=0;
                for(i=1;i<=n;i++)
                {
                    if(p[i].y==y0)
                    {
                        if(p[i-1].y >y0 && p[i+1].y<y0)
                        {
                            bottom=p[i].x+1;
                            flb1=1;
                        }
                        else
                        {
                            top=p[i].x-1;
                            flt1=1;
                        }
                    }
                    else
                    {
                        long int  c7=((p[i].x-p[i+1].x)*(y0-p[i].y));
                    if(p[i].y >y0 && p[i+1].y<y0)
                    {

                        if(c7%(p[i].y-p[i+1].y)==0)
                            {
                                bottom=c7/(p[i].y-p[i+1].y)  + p[i].x +1;
                                flb1=1;

                            }
                        else
                        {
                                if(p[i].x>p[i+1].x)
                                {
                                    bottom=(c7)/(p[i].y-p[i+1].y)  + p[i].x ;
                                    flb1=1;
                                }
                                else
                                {
                                        bottom=(c7)/(p[i].y-p[i+1].y)  + p[i].x+1 ;
                                        flb1=1;
                                }

                        }

                    }
                    if(p[i].y<y0 && p[i+1].y>y0)
                    {
                        if((c7)%(p[i].y-p[i+1].y)!=0 && p[i+1].x<p[i].x)
                        {
                            top=(c7)/(p[i].y-p[i+1].y)  + p[i].x -1;
                            flt1=1;
                        }
                        else if((c7)%(p[i].y-p[i+1].y)==0)
                        {
                            top=(c7)/(p[i].y-p[i+1].y)  + p[i].x -1;
                            flt1=1;
                        }
                        else
                        {
                            top=(c7)/(p[i].y-p[i+1].y)  + p[i].x  ;
                            flt1=1;
                        }

                    }
                    }
                    if(flb1==1 && flt1==1)
                        break;
                }
                for(j=bot;j<=top;j++)
                {
                    if(u<c1)
                    {
                        ans[u].x=j;
                        ans[u].y=y0;
                        u++;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }

                }
                if(flag==1)
                    break;

                y0++;
            }
            for(k=0;k<check;k++)
                {
                    printf("%ld %ld\n",ans[k].x,ans[k].y);
                }
            }
        else
        {
            while(x0<maxx)
            {
                int flb=0;
                int flt=0;
                for(i=1;i<=n;i++)
                {
                    if(p[i].x==x0)
                    {
                        if(p[i-1].x >x0 && p[i+1].x<x0)
                        {
                            top=p[i].y-1;
                            flt=1;
                        }
                        else
                        {
                            bottom=p[i].y+1;
                            flb=1;
                        }
                    }
                    else
                    {
                    long  int c4=((p[i].y-p[i+1].y)*(x0-p[i].x));
                    if(p[i].x >x0 && p[i+1].x<x0)
                    {

                        if(c4%(p[i].x-p[i+1].x)==0)
                            {
                                top=c4/(p[i].x-p[i+1].x)  + p[i].y -1;
                                flt=1;

                            }
                        else
                        {
                                if(p[i].y>p[i+1].y)
                                {
                                    top=(c4)/(p[i].x-p[i+1].x)  + p[i].y -1;
                                    flt=1;
                                }
                                else
                                {
                                        top=(c4)/(p[i].x-p[i+1].x)  + p[i].y ;
                                        flt=1;
                                }

                        }

                    }
                    if(p[i].x<x0 && p[i+1].x>x0)
                    {
                        if((c4)%(p[i].x-p[i+1].x)!=0 && p[i+1].y<p[i].y)
                        {
                            bottom=(c4)/(p[i].x-p[i+1].x)  + p[i].y;
                            flb=1;
                        }
                        else
                        {
                            bottom=(c4)/(p[i].x-p[i+1].x)  + p[i].y +1 ;
                            flb=1;
                        }

                    }
                    }
                    if(flb==1 && flt==1)
                        break;
                }
                for(j=bottom;j<=top;j++)
                {
                    if(t<check)
                    {
                        ans[t].x=x0;
                        ans[t].y=j;
                        t++;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }

                }
                if(flag==1)
                    break;
                x0++;
            }
            if(flag==0 && t<check)
            printf("-1\n");
            else
            {
                for(k=0;k<check;k++)
                {
                    printf("%ld %ld\n",ans[k].x,ans[k].y);
                }
            }
        }

        }
        return 0;
}
