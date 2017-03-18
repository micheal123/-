#include<cstdio>
#include<string.h>
#define ERROR -1
#define OK 1
#define MAXSIZE 80
typedef int ElemeType;
typedef ElemeType Status;
class member{
	public:
	ElemeType id,tle1,tle2;
	char name[MAXSIZE],sex[MAXSIZE],remark[MAXSIZE];
	member *next;//链表时用的 
};
#include"ph_sq.h"
#include"ph_link.h"
using namespace std;
void print(){
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");  
   		printf("*=*               程序说明                *=*\n");  
   	    printf("*=*    请及时保存创建完毕的通讯录内容!    *=*\n");  
        printf("*=*               C语言通讯录             *=*\n");  
        printf("*=*               1.创建新的通讯录        *=*\n");
        printf("*=*               2.保存通讯录            *=*\n");
        printf("*=*               3.查看通讯录            *=*\n");
        printf("*=*               4.添加用户              *=*\n");
        printf("*=*               5.删除用户              *=*\n");
        printf("*=*               6.修改用户              *=*\n");
        printf("*=*               7.查看被删目录          *=*\n");
        printf("*=*               8.查找用户              *=*\n");
        printf("*=*               9.退出系统              *=*\n");
        printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
          
        printf("请输入1-9的功能编号 ：\n");  
	
}	
int main(){
  	ElemeType t;
  	class member *m ,*pm,*d,*pd,*e;//m是通讯录的原文件pm为第一个元素，d是被删除的表（链表）
//	  d=new member();//新建一个头节点
//	  pd=d;  
	seq sq;//实例化一个类	
	freopen("data.txt","r",stdin);
		scanf("%d",&t);
		sq.setseq(t,MAXSIZE); 
		sq.InitList(m);//初始化 	
	  	pm=m;//将头指针存放 
		sq.ReadFile(m);	
		fclose(stdin);
		freopen("CON", "r ", stdin); 		
		int num;	
	
while(1){	
print();
	scanf("%d",&num); 
		 switch(num)  
        {  
        case 1:  
            {  
          
				break;   
            }  
            
        case 2:  
            {  
                /*head=paixu(head); */  
				break;                              //保存通讯录  
            }  
            
        case 3:  
            { 
				//从文件中读入 
		m=pm;
		sq.QueryList(m);//
                /*head=sq.DeletList(m,2);*/                               //查看通讯录   
           break;  
		     }  
           
        case 4:
		 {                                               //添加用户  
		 		e=new member();
		 		e->id=4;//插入第几项又用户指定 
				strcpy(e->name,"wwwww");
				strcpy(e->sex,"男");
				strcpy(e->remark,"wwww");
		 		e->tle1=12321321;
				e->tle2=1111111;
		 		sq.InsertList(m,e); 
				m=pm;
				sq.QueryList(m); 
				break;  
            }  
            
        case 5:  
            {  
               	
		           sq.DeletList(m,2);
	             	m=pm;
		           sq.QueryList(m);  
				       break;                          //删除用户  
            }  
           
        case 6:  
            {  
                /*head=load(head);*/   
				break;                            //修改用户   
            }  
            
        case 7:  
            {  
                /*head=load(head);*/   
				  break;                           //查看被删目录  
            }  
           
        case 8:  
            {  
                /*head=load(head);*/  
				break;                             //查找用户  
            }  
            
        case 9:  
            {  
                /*head=delete_txl(head);                           //退出系统  
                print(head); */    
				break; 
            }  
           
        default:  
            printf("操作错误，此项不存在!\n");  
        }  
}
	
//  	printf("%s",pm->name);
	return 0;
}
 
