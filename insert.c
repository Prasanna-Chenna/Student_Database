#include"myheader.h"
extern int cnt;
void *insert(ST *p)
{

        p=realloc(p,(cnt+1)*sizeof(ST));
        printf("enter name:\n");
        __fpurge(stdin);
        scanf("%s",p[cnt].name);
        printf("enter rollno:\n");
        scanf("%d",&p[cnt].roll);
        printf("enter marks:\n");
        scanf("%f",&p[cnt].marks);

        printf("enter address flatno:\n");
        scanf("%d",&p[cnt].a.flatno);
        printf("enter area\n");
        scanf("%s",p[cnt].a.area);
        printf("enter city:\n");
        scanf("%s",p[cnt].a.city);
        printf("enter state:\n");
        scanf("%s",p[cnt].a.state);
        printf("enter pincode:\n");
        scanf("%s",p[cnt].a.pincode);

        printf("enter day of the birth:\n");
        scanf("%d",&p[cnt].d.day);
        printf("enter month:\n");
        scanf("%d",&p[cnt].d.month);
        printf("enter year:\n");
        scanf("%d",&p[cnt].d.year);

cnt++;
return p;
}
