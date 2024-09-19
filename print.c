#include"myheader.h"
extern int cnt;
void print(ST *p)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		//printf("cnt=%d ",cnt);
		printf("\nname:%s\n",p[i].name);
		__fpurge(stdin);
		printf("roll:%d\n",p[i].roll);
		printf("marks:%f\n",p[i].marks);

		printf("address:%d\n",p[i].a.flatno);
		printf("area:%s\n",p[i].a.area);
		printf("city:%s\n",p[i].a.city);
		printf("state:%s\n",p[i].a.state);
		printf("pincode:%s\n",p[i].a.pincode);

		printf("dob:%d-%d-%d\n",p[i].d.day,p[i].d.month,p[i].d.year);
	}
}
