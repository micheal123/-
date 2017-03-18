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
	  	//从文件中读入 
		sq.ReadFile(m);
		m=pm;
		sq.QueryList(m);
		fclose(stdin);
			//删除
		printf("\n");		
		sq.DeletList(m,2);
		m=pm;
		sq.QueryList(m);
		//添加
			printf("\n");
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
		//修改 
		 
		
		
	
		
	  
//  	printf("%s",pm->name);
	return 0;
}
 
