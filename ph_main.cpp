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
	member *next;//����ʱ�õ� 
};
#include"ph_sq.h"
#include"ph_link.h"
using namespace std;
int main(){
  	ElemeType t,dt,num,id;
  	char flag[10];
  	class member *m ,*d,*e;//m��ͨѶ¼��ԭ�ļ�pmΪ��һ��Ԫ�أ�d�Ǳ�ɾ���ı�����
		link lk;
		seq sq;//ʵ����һ����
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
		sq.ReadFile();	//��ʼ�� 
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
            printf("�Ƿ񴴽�ͨѶ¼���˲����Ḳ��ԭ��ͨѶ¼��\nyes or not\n");
			scanf("%s",&flag);
			if(strcmp(flag,"yes")== 0)
			{
				sq.setseq(0,MAXSIZE,m); 
            	sq.InitList();	
             printf("ͨѶ¼�����ɹ���\n");	
			}		 
            
				break;   
            }  
            
        case 2:  
            {  
			printf("���ڱ�����....\n");
             Sleep(1000);
			 freopen("data.txt","w",stdout);
			 sq.SaveFile();
			 fclose(stdout);
			freopen("CON","w",stdout);	
			 printf("����ɹ���\n");
                /*head=paixu(head); */  
				break;                              //����ͨѶ¼  
            }  
            
        case 3:  
            { 
			sq.QueryList();//
           break;  
		     }  
           
        case 4:
		 {     
		 while(1){                                          //����û�  
		 		e=new member();
//		 		cout<<"��������ӵ�λ�ã�\n";
//			 	scanf("%d",&e->id);
				cout<<"�����������������Ա𣬵绰1���绰2������ţ���ע��Ϣ��\n"; 
		 		cin>>e->name>>e->sex>>e->tle1>>e->tle2>>e->email>>e->remark;
				 	if(sq.InsertList(e))
			{	
				printf("����ɹ�\n"); 
				break;
			}else{
				printf("����ʧ�ܣ����������룺\n"); 
			}
				 
		}
				break;  
            }  
            
        case 5:  
            {  
       	
			printf("������Ҫɾ������ţ�\n");
			while(1){  
            scanf("%d",&id);
            if(id==-1)
				break;
		    if(sq.DeletList(id,lk)){
		           	printf("ɾ���ɹ�������\n");
		           	break;
			}else{
					printf("ɾ��ʧ�ܣ���������������������������������-1�˻����˵�\n");
				}	
			}  
				       break;                          //ɾ���û�  
            }  
           
        case 6:  
            {  
			while(1){
            	  printf("������Ҫ�޸ĵ�������\n") ;
            	 if(sq.Update()){
            	 	printf("�޸ĳɹ���\n"); 
					 break;
				 }
			}
				break;                            //�޸��û�   
            }  
            
        case 7:  
            {  
            while(1){
            	
            }
            lk.QueryList();
                /*head=load(head);*/  
				while(1){
				printf("������Ҫ�ָ��ڼ�����¼��\n");
				scanf("%d",&id);
				if(lk.DeletList(id,sq)){
					printf("�ָ��ɹ���\n");
					break;	
				} else{
					printf("�ָ�ʧ�����������룡����\n");	
				}
				}
				
				  break;                           //�鿴��ɾĿ¼  
            }  
           
        case 8:  
            {  
                /*head=load(head);*/  
				break;                             //�����û�  
            }  
            
        case 9:  
            {  
                /*head=delete_txl(head);                           //�˳�ϵͳ  
                print(head); */
                printf("��ӭʹ���ټ�������������������\n");
				   exit(0); 
				break; 
            }  
           
        default:  {
        	printf("�������󣬴������!\n"); 
			break;
		}
    }  
}
	
	return 0;
}
 
