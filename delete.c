#include"myheader.h"
extern int cnt;
void* delete(ST *p)
{
        char name[20];
        printf("enter name to del:\n");
        scanf("%s",name);
        for(int i=0;i<cnt;i++)
        {
                if(!strcmp(name,p[i].name))
                {
                memmove(p+i,p+i+1,(cnt-1-i)*sizeof(ST));
                        cnt--;
                        p=realloc(p,(cnt)*sizeof(ST));
                        return p;
                }
        }
        printf("name not found\n");
}
