#include"myheader.h"
extern int cnt;
void sort(ST *p)
{
        int i,j;
        ST m;
        for(j=0;j<cnt-1;j++)
        {
                for(i=0;i<cnt-1;i++)
                {
                        if(p[i].marks>p[i+1].marks)
                        {
                                m=p[i];
                                p[i]=p[i+1];
                                p[i+1]=m;
                        }
                }
        }
}
