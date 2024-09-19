#include"myheader.h"
extern int cnt;
void* syncfromfile(ST *p)
{
        FILE *f;
        ST t;
        f=fopen("stu","r");
        if(f==NULL)
        {
                return p;
        }
        while(fread(&t,sizeof(*p),1,f)==1)
        {
                p=realloc(p,(cnt+1)*sizeof(*p));
                p[cnt]=t;
                cnt++;
        }
        fclose(f);
        return p;
}
