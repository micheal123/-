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
void print(){
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");  
   		printf("*=*               ����˵��                *=*\n");  
   	    printf("*=*    �뼰ʱ���洴����ϵ�ͨѶ¼����!    *=*\n");  
        printf("*=*               C����ͨѶ¼             *=*\n");  
        printf("*=*               1.�����µ�ͨѶ¼        *=*\n");
        printf("*=*               2.����ͨѶ¼            *=*\n");
        printf("*=*               3.�鿴ͨѶ¼            *=*\n");
        printf("*=*               4.����û�              *=*\n");
        printf("*=*               5.ɾ���û�              *=*\n");
        printf("*=*               6.�޸��û�              *=*\n");
        printf("*=*               7.�鿴��ɾĿ¼          *=*\n");
        printf("*=*               8.�����û�              *=*\n");
        printf("*=*               9.�˳�ϵͳ              *=*\n");
        printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
          
        printf("������1-9�Ĺ��ܱ�� ��\n");  
	
}	
int main(){
  	ElemeType t;
  	class member *m ,*pm,*d,*pd,*e;//m��ͨѶ¼��ԭ�ļ�pmΪ��һ��Ԫ�أ�d�Ǳ�ɾ���ı�����
//	  d=new member();//�½�һ��ͷ�ڵ�
//	  pd=d;  
	seq sq;//ʵ����һ����	
	freopen("data.txt","r",stdin);
		scanf("%d",&t);
		sq.setseq(t,MAXSIZE); 
		sq.InitList(m);//��ʼ�� 	
	  	pm=m;//��ͷָ���� 
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
				break;                              //����ͨѶ¼  
            }  
            
        case 3:  
            { 
				//���ļ��ж��� 
		m=pm;
		sq.QueryList(m);//
                /*head=sq.DeletList(m,2);*/                               //�鿴ͨѶ¼   
           break;  
		     }  
           
        case 4:
		 {                                               //����û�  
		 		e=new member();
		 		e->id=4;//����ڼ������û�ָ�� 
				strcpy(e->name,"wwwww");
				strcpy(e->sex,"��");
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
				       break;                          //ɾ���û�  
            }  
           
        case 6:  
            {  
                /*head=load(head);*/   
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
           
        default:  
            printf("�������󣬴������!\n");  
        }  
}
	
//  	printf("%s",pm->name);
	return 0;
}
 
