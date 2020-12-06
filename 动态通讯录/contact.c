#include"contact.h"
void menu()
{
    printf("***************************************************************************\n");
    printf("***************************       通讯录     ******************************\n");
    printf("***************************    1.添加好友    ******************************\n");
    printf("***************************    2.删除好友    ******************************\n");
    printf("***************************    3.修改信息    ******************************\n");
    printf("***************************    4.删除信息    ******************************\n");
    printf("***************************    5.查看全部    ******************************\n");
    printf("***************************    6.查询信息    ******************************\n");
    printf("***************************    7.退出程序    ******************************\n");
    printf("***************************************************************************\n");
}
int main()
{
    F*Head;
    Head=(F*)calloc(1,sizeof(F));//创建头结点
    if(Head==NULL)
        {
            printf("%s\n",strerror(errno));
            system("pause");
        }
    else
    {
    int n=0;
    char input;
    do
    {
        menu();
        scanf("%c",&input);
    if(isdigit(input))
   {
       switch(input)
   {
    case '1':
        add(Head,&n);//添加
        getchar();
        break;
    case '2':
        dell(&Head,&n);//删除
        getchar();
        break;
    case '3':
        change(Head,n);//修改
        getchar();
        break;
    case '4':
        del(Head,n);//删除信息
        getchar();
        break;
    case '5':
        show(Head,n);//打印
        getchar();
        break;
    case '6':
        search(Head,n);//查询
        getchar();
        break;
    case '7':
        printf("退出通讯录\n");
        getchar();
        break;
    default:
        printf("非法输入\n");
    }
    if(input=='7')
        {
        freeall(Head);
        Head=NULL;
        break;
        }
    }
    else
    {
        printf("无法识别\n");
        printf("退出程序\n");
        system("pause");
        break;
    }
    }while(1);
    }
    return 0;
}

