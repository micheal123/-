#include<cstdio>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define ERROR -1
#define OK 1
#define MAXSIZE 80
typedef int ElemeType;
typedef ElemeType Status;
class member{
	public:
	ElemeType id;
	char name[MAXSIZE],sex[MAXSIZE],remark[MAXSIZE],email[MAXSIZE],tle1[MAXSIZE],tle2[MAXSIZE];
	member *next;//链表时用的 
};
#include"ph_sq.h"
#include"ph_link.h"
using namespace std;
int main(){
  	ElemeType t,dt,num,id;
  	char flag[10];
  	class member *m ,*d,*e;//m是通讯录的原文件pm为第一个元素，d是被删除的表（链表）
		link lk;
		seq sq;//实例化一个类
		freopen("delet.txt","r",stdin);
			scanf("%d",&dt);
			if(dt==NULL){
				dt=0;
		}
			lk.setlink(dt,d);
			lk.InitList();
			lk.ReadFile();
				fclose(stdin);
		freopen("data.txt","r",stdin);
		scanf("%d",&t);
		if(t==NULL){
		t=0;
		}
		sq.setseq(t,MAXSIZE,m); 
		sq.InitList();	
		sq.ReadFile();	//初始化 
		fclose(stdin);
		freopen("CON", "r ", stdin); 
//		print();
	while(1){	
	print();
			scanf("%d",&num); 
		 switch(num)  
        {  
        case 1:  
            {  
            printf("是否创建通讯录，此操作会覆盖原有通讯录？\nyes or not\n");
			scanf("%s",&flag);
			if(strcmp(flag,"yes")== 0)
			{
				sq.setseq(0,MAXSIZE,m); 
            	sq.InitList();	
             printf("通讯录创建成功！\n");	
			}		 
            
				break;   
            }  
            
        case 2:  
            {  
			printf("正在保存中....\n");
             Sleep(1000);
			 freopen("data.txt","w",stdout);
			 sq.SaveFile();
			 fclose(stdout);
			freopen("CON","w",stdout);	
			 printf("保存成功！\n");
                /*head=paixu(head); */  
				break;                              //保存通讯录  
            }  
            
        case 3:  
            { 
			sq.QueryList();//
           break;  
		     }  
           
        case 4:
		 {     
		 while(1){                                          //添加用户  
		 		e=new member();
//		 		cout<<"请输入添加的位置：\n";
//			 	scanf("%d",&e->id);
				cout<<"请依次输入姓名，性别，电话1，电话2，邮箱号，备注信息：\n"; 
		 		cin>>e->name>>e->sex>>e->tle1>>e->tle2>>e->email>>e->remark;
				 	if(sq.InsertList(e))
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
       	
			printf("请输入要删除的序号：\n");
			while(1){  
            scanf("%d",&id);
            if(id==-1)
				break;
		    if(sq.DeletList(id,lk)){
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
            	 if(sq.Update()){
            	 	printf("修改成功！\n"); 
					 break;
				 }
			}
				break;                            //修改用户   
            }  
            
        case 7:  
            {  
            while(1){
            	
            }
            lk.QueryList();
                /*head=load(head);*/  
				while(1){
				printf("请输入要恢复第几条记录？\n");
				scanf("%d",&id);
				if(lk.DeletList(id,sq)){
					printf("恢复成功！\n");
					break;	
				} else{
					printf("恢复失败请重新输入！！！\n");	
				}
				}
				
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
                printf("欢迎使用再见，哈哈哈哈哈哈哈！\n");
				   exit(0); 
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
 
