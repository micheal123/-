#include<cstdio>
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
int main(){
  	ElemeType t;
  	struct member *m ,*pm,*d,*pd;//m��ͨѶ¼��ԭ�ļ�pmΪ��һ��Ԫ�أ�d�Ǳ�ɾ���ı�����
//	  d=new member();//�½�һ��ͷ�ڵ�
//	  pd=d;  
		InitList(m);
	  	pm=m;
		freopen("data.txt","r",stdin);
		ReadFile(t,m);
		m=pm;
		QueryList(t,m);
			fclose(stdin);	
		
	  
//  	printf("%s",pm->name);
	return 0;
}
 
