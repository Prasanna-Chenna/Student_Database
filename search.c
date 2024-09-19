#include"myheader.h"
extern int cnt;
void search(ST *p)
{
        int i;
        char name[20];
        printf("enter name to search:\n");
        scanf("%s",name);
        for(i=0;i<cnt;i++)
        {
                if(!strcmp(p[i].name,name))
                {
                        printf("found at %d \n",i+1);
                        exit(0);
                }
        }
        printf("not found\n");
}
