#include"myheader.h"
extern int cnt;
void modify(ST *p)
{
        char name[20];
        printf("enter name to modify:\n");
        scanf("%s",name);
        for(int i=0;i<cnt;i++)
        {
                if(!strcmp(name,p[i].name))
                {
                        char ch;
                        printf("n:name r:roll m:marks f:flatno a:area c:city s:state p:pincode d:dob e:all details\n");
                        printf("enter which details to modify:\n");
                        __fpurge(stdin);
                        scanf("%c",&ch);
                        switch(ch)
                        {
                                case 'n':printf("enter new name:\n");
                                         //scanf("%s",p[i].name);
                                         __fpurge(stdin);
                                         gets(p[i].name);
                                         break;
                                case 'r':printf("enter new roll:\n");
                                         scanf("%d",&p[i].roll);
                                         break;
                                case 'm':printf("enter new marks:\n");
                                         scanf("%f",&p[i].marks);
                                         break;
                                case 'f':printf("enter new flatno:\n");
                                         scanf("%d",&p[i].a.flatno);
                                         break;
                                case 'a':printf("enter new area:\n");
                                         scanf("%s",p[i].a.area);
                                         break;
                                case 'c':printf("enter new city:\n");
                                         scanf("%s",p[i].a.city);
                                         break;
                                case 's':printf("enter new state:\n");
                                         scanf("%s",p[i].a.state);
                                         break;
                                case 'p':printf("enter new pincode:\n");
                                         scanf("%s",p[i].a.pincode);
                                         break;
                                case 'd':printf("enter new day,month,year of birth dd mm yyyy:\n");
                                         scanf("%d %d %d",&p[i].d.day,&p[i].d.month,&p[i].d.year);
                                         break;

                                case 'e':printf("enter all details to modify:\n");
                                         printf("enter name:\n");
                                         scanf("%s",p[i].name);
                                         printf("enter roll :\n");
                                         scanf("%d",&p[i].roll);
                                         printf("enter marks:\n");
                                         scanf("%f",&p[i].marks);

                                         printf("enter address:\n");
                                         scanf("%d",&p[i].a.flatno);
                                         printf("enter area:\n");
                                         scanf("%s",p[i].a.area);
                                         printf("enter city:\n");
                                         scanf("%s",p[i].a.city);
                                         printf("enter state:\n");
                                         scanf("%s",p[i].a.state);
                                         printf("enter pincode:\n");
                                         scanf("%s",p[i].a.pincode);

                                         printf("enter day,month,year of birth:\n");
                                         scanf("%d %d %d",&p[i].d.day,&p[i].d.month,&p[i].d.year);
                                         break;
                                default:printf("Not matched/Found\n");

                        }
                }
                else
                        printf("NOT FOUND\n");
        }
}
