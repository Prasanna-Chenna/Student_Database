#include"myheader.h"
int cnt;
int main()
{
        ST *s=NULL;
        char choice;
        s=syncfromfile(s);
        while(1)
        {
                printf("i:insert p:print r:search m:modify s:sort w:save d:delete q:quit\n");
                printf("enter choice:\n");
                __fpurge(stdin);
                scanf("%c",&choice);
                switch(choice)
                {
                        case 'i':s=insert(s);
                                 break;
                        case 'p':print(s);
                                 break;
                        case 'r':search(s);
                                 break;
                        case 'm':modify(s);
                                 break;
                        case 's':sort(s);
                                 break;
                        case 'd':s=delete(s);
                                 break;
                        case 'w':save(s);
                                 break;
                        case 'q':return 0;
                }
        }
}
