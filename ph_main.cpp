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
	member *next;//链表时用的 
};
#include"ph_sq.h"
#include"ph_link.h"
int main(){
  	ElemeType t;
  	struct member *m ,*pm,*d,*pd;//m是通讯录的原文件pm为第一个元素，d是被删除的表（链表）
//	  d=new member();//新建一个头节点
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
 
