#include<cstdio>
using namespace std;
typedef char ElemType; 
struct LinkStack{
	ElemType data;
	LinkStack *next;
}; 
struct ShareStack{
	ElemType *base1;
	ElemType *top1;
	ElemType *base2;
	ElemType *top2;
	int Maxsize;
};//共享栈提供两个top两个base分别代表两端。 
void init(struct ShareStack &st,int size){
	st.Maxsize=size;
	st.base1=new ElemType[st.Maxsize];
	st.top1=st.base1; 
	st.base2=st.base1+size-1;//使base2指向字符数组尾 
	st.top2=st.base2; 
	
}//初始化共享栈将指针定位到两端 
void push(struct ShareStack &st,char j,int flag){//flag 标记是哪个栈 
	if(flag==1){
		if(st.top1+1==st.top2)
	{
		printf("存储空间用完！！！请重新初始化栈！\n");
		return;		
	}
	*st.top1=j; 
	st.top1++;
	}else{
		if(st.top2-1==st.top1)
	{
		printf("存储空间用完！！！请重新初始化栈！\n");
		return;		
	}
	*st.top2=j; 
	st.top2--;
		
	}
	
}//共享栈的插入 

 
void peek(struct ShareStack &st,int flag){
	if(flag==1)
	printf("%c\n",*(st.top1-1));
	else
	printf("%c\n",*(st.top2+1));
}//查看栈顶元素 

void pop(struct ShareStack &st,int flag){
	if(flag==1){
		if(st.top1==st.base1)
			return ;
		st.top1--;
	}else{
		if(st.top2==st.base2)
			return ;
		st.top2++;
	}
}//分享栈出栈当top等于base时栈为空。 
void link_push(struct LinkStack* &ls,ElemType e){
	LinkStack *p;
	p=new LinkStack();
	p->data=e;
	p->next=ls->next;
	ls->next=p;
}//链式栈的插入 
void link_peek(struct LinkStack* &ls){
	LinkStack *p;
	p=ls->next;
	printf("%c\n",p->data);
}//链式栈的查看
int main(){
	struct ShareStack st;
	struct LinkStack *sl;
	sl=new LinkStack();//初始化头节点 
	link_push(sl,'a'); 
	link_push(sl,'b'); 
	link_peek(sl);
	init(st,10);	
	push(st,'B',2);
	push(st,'A',2);
	pop(st,2);
	peek(st,2);
} 
