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
	member *next;//����ʱ�õ� 
};
#include"ph_sq.h"
#include"ph_link.h"
using namespace std;
int main(){
  	ElemeType t,num;
  	class member *m ,*pm,*d,*pd,*e;//m��ͨѶ¼��ԭ�ļ�pmΪ��һ��Ԫ�أ�d�Ǳ�ɾ���ı�����
//	  d=new member();//�½�һ��ͷ�ڵ�
//	  pd=d;  
		seq sq;//ʵ����һ����	
		freopen("data.txt","r",stdin);
		scanf("%d",&t);
		if(t==NULL){
		t=0;
		}
		sq.setseq(t,MAXSIZE); 
		sq.InitList(m);//��ʼ�� 	
	  	pm=m;//��ͷָ���� 
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
			printf("���ڱ�����....\n");
             freopen("data.txt","w",stdout);
             m=pm;
			 sq.SaveFile(m);
			 fclose(stdout);
			freopen("CON","w",stdout);	
			 printf("����ɹ���\n");
                /*head=paixu(head); */  
				break;                              //����ͨѶ¼  
            }  
            
        case 3:  
            { 
			m=pm;
			sq.QueryList(m);//
                /*head=sq.DeletList(m,2);*/                               //�鿴ͨѶ¼   
           break;  
		     }  
           
        case 4:
		 {     
		 while(1){                                          //����û�  
		 		e=new member();
		 		cout<<"��������ӵ�λ�ã�\n";
			 	scanf("%d",&e->id);
				cout<<"�����������������Ա𣬵绰1���绰2����ע��Ϣ��\n"; 
		 		cin>>e->name>>e->sex>>e->tle1>>e->tle2>>e->remark;
//		 	e->id=2;//����ڼ������û�ָ�� 
//				strcpy(e->name,"wwwww");
//				strcpy(e->sex,"��");
//				strcpy(e->remark,"wwww");
//		 		e->tle1=12321321;
//				e->tle2=1111111;
				 	if(sq.InsertList(m,e))
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
            int id;	
			printf("������Ҫɾ������ţ�\n");
			while(1){  
            scanf("%d",&id);
            if(id==-1)
				break;
		    if(sq.DeletList(m,id)){
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
            	 if(sq.Update(m)){
            	 	printf("�޸ĳɹ���\n"); 
					 break;
				 }
			}
				break;                            //�޸��û�   
            }  
            
        case 7:  
            {  
                /*head=load(head);*/   
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
 
