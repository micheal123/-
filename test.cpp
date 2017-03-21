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
#include"ph_link.h"
using namespace std;
int main(){
		ElemeType t;
		class member *d,*e;
		link lk;
		freopen("delet.txt","r",stdin);
			scanf("%d",&t);
		lk.setlink(t,d);
		lk.InitList();	
		lk.ReadFile();
		lk.QueryList();
			e=new member();
		 		e->id=2;//插入第几项又用户指定 
				strcpy(e->name,"wwwww");
				strcpy(e->sex,"男");
				strcpy(e->remark,"wwww");
		 		e->tle1=12321321;
				e->tle2=1111111;
		lk.InsertList(e);
		lk.QueryList();
		
	return 0;
}
