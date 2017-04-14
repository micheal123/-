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
};//����ջ�ṩ����top����base�ֱ�������ˡ� 
void init(struct ShareStack &st,int size){
	st.Maxsize=size;
	st.base1=new ElemType[st.Maxsize];
	st.top1=st.base1; 
	st.base2=st.base1+size-1;//ʹbase2ָ���ַ�����β 
	st.top2=st.base2; 
	
}//��ʼ������ջ��ָ�붨λ������ 
void push(struct ShareStack &st,char j,int flag){//flag ������ĸ�ջ 
	if(flag==1){
		if(st.top1+1==st.top2)
	{
		printf("�洢�ռ����꣡���������³�ʼ��ջ��\n");
		return;		
	}
	*st.top1=j; 
	st.top1++;
	}else{
		if(st.top2-1==st.top1)
	{
		printf("�洢�ռ����꣡���������³�ʼ��ջ��\n");
		return;		
	}
	*st.top2=j; 
	st.top2--;
		
	}
	
}//����ջ�Ĳ��� 

 
void peek(struct ShareStack &st,int flag){
	if(flag==1)
	printf("%c\n",*(st.top1-1));
	else
	printf("%c\n",*(st.top2+1));
}//�鿴ջ��Ԫ�� 

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
}//����ջ��ջ��top����baseʱջΪ�ա� 
void link_push(struct LinkStack* &ls,ElemType e){
	LinkStack *p;
	p=new LinkStack();
	p->data=e;
	p->next=ls->next;
	ls->next=p;
}//��ʽջ�Ĳ��� 
void link_peek(struct LinkStack* &ls){
	LinkStack *p;
	p=ls->next;
	printf("%c\n",p->data);
}//��ʽջ�Ĳ鿴
int main(){
	struct ShareStack st;
	struct LinkStack *sl;
	sl=new LinkStack();//��ʼ��ͷ�ڵ� 
	link_push(sl,'a'); 
	link_push(sl,'b'); 
	link_peek(sl);
	init(st,10);	
	push(st,'B',2);
	push(st,'A',2);
	pop(st,2);
	peek(st,2);
} 
