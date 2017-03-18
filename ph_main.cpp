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
int main(){
  	ElemeType t,num;
  	class member *m ,*pm,*d,*pd,*e;//m是通讯录的原文件pm为第一个元素，d是被删除的表（链表）
//	  d=new member();//新建一个头节点
//	  pd=d;  
		seq sq;//实例化一个类	
		freopen("data.txt","r",stdin);
		scanf("%d",&t);
		if(t==NULL){
		t=0;
		}
		sq.setseq(t,MAXSIZE); 
		sq.InitList(m);//初始化 	
	  	pm=m;//将头指针存放 
		sq.ReadFile(m);	
		fclose(stdin);
		freopen("CON", "r ", stdin); 
					print();		
	while(1){	
			scanf("%d",&num); 
		 switch(num)  
        {  
        case 1:  
            {  
            sq.setseq(0,MAXSIZE); 
            sq.InitList(m);
            	pm=m;
				break;   
            }  
            
        case 2:  
            {  
			printf("正在保存中....\n");
             freopen("data.txt","w",stdout);
             m=pm;
			 sq.SaveFile(m);
			 fclose(stdout);
			freopen("CON","w",stdout);	
			 printf("保存成功！\n");
                /*head=paixu(head); */  
				break;                              //保存通讯录  
            }  
            
        case 3:  
            { 
			m=pm;
			sq.QueryList(m);//
                /*head=sq.DeletList(m,2);*/                               //查看通讯录   
           break;  
		     }  
           
        case 4:
		 {     
		 while(1){                                          //添加用户  
		 		e=new member();
		 		cout<<"请输入添加的位置：\n";
			 	scanf("%d",&e->id);
				cout<<"请依次输入姓名，性别，电话1，电话2，备注信息：\n"; 
		 		cin>>e->name>>e->sex>>e->tle1>>e->tle2>>e->remark;
//		 	e->id=2;//插入第几项又用户指定 
//				strcpy(e->name,"wwwww");
//				strcpy(e->sex,"男");
//				strcpy(e->remark,"wwww");
//		 		e->tle1=12321321;
//				e->tle2=1111111;
				 	if(sq.InsertList(m,e))
			{	
				printf("插入成功\n"); 
				break;
			}else{
				printf("插入失败，请重新输入：\n"); 
			}
				 
		}
				break;  
            }  
            
        case 5:  
            {  
            int id;	
			printf("请输入要删除的序号：\n");
			while(1){  
            scanf("%d",&id);
            if(id==-1)
				break;
		    if(sq.DeletList(m,id)){
		           	printf("删除成功！！！\n");
		           	break;
			}else{
					printf("删除失败！！！输入序号有误，请重新输入或者输入-1退回主菜单\n");
				}	
			}  
				       break;                          //删除用户  
            }  
           
        case 6:  
            {  
			while(1){
            	  printf("请输入要修改的条数：\n") ;
            	 if(sq.Update(m)){
            	 	printf("修改成功！\n"); 
					 break;
				 }
			}
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
           
        default:  {
        	printf("操作错误，此项不存在!\n"); 
			break;
		}
    }  
}
	
	return 0;
}
 
