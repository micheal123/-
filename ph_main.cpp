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
	  	//���ļ��ж��� 
		sq.ReadFile(m);
		m=pm;
		sq.QueryList(m);
		fclose(stdin);
			//ɾ��
		printf("\n");		
		sq.DeletList(m,2);
		m=pm;
		sq.QueryList(m);
		//���
			printf("\n");
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
		//�޸� 
		 
		
		
	
		
	  
//  	printf("%s",pm->name);
	return 0;
}
 
