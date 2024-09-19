#include"myheader.h"
extern int cnt;
void save(ST *s)
{
        FILE *f;
        f=fopen("stu","w");
        fwrite(s,sizeof(ST),cnt,f);
        fclose(f);
}
