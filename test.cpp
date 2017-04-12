#include<cstdio>
using namespace std;
typedef char ElemType; 
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
	st.base2=base1+size-1;//ʹbase2ָ���ַ�����β 
	st.top2=st.base2; 
	
}//��ʼ������ջ��ָ�붨λ������ 
void push1(struct ShareStack &st,char j){
	if(st.top1+1=st.top2)
	{
		printf("�洢�ռ����꣡���������³�ʼ��ջ��\n");
		return;		
	}
	*st.top1=j; 
	st.top1++;
}//����ջ�Ĳ��� 
void push2(struct ShareStack &st,char j){
	if(st.top2-1=st.top1)
	{
		printf("�洢�ռ����꣡���������³�ʼ��ջ��\n");
		return;		
	}
	*st.top2=j; 
	st.top2--;
}
void peek(struct ShareStack &st){
	printf("%d\n",*(st.top-1));
}//�鿴ջ��Ԫ�� 
void pop(struct ShareStack &st){
	if(st.top==st.base)//top��base�غ�ʱ��ջΪ��  
        return ;  
	st.top--;
//	*(st.top)=j; 
}
int main(){
	struct stack st;
	init(st);
	push(st,8);
	push(st,10);
	peek(st);
	pop(st);
	peek(st);
} 
