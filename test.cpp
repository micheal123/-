#include<cstdio>
using namespace std;
typedef char ElemType; 
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

//void pop(struct ShareStack &st){
//	if(st.top==st.base)//top与base重合时，栈为空  
//        return ;  
//	st.top--;
////	*(st.top)=j; 
//}
int main(){
	struct ShareStack st;
	init(st,10);
	push(st,'A',1);
	peek(st,1);
} 
