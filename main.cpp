#include<cstdio>
typedef char TElemType;
struct Stack{
     TElemType *top,*base;
     int Maxsize;
};
struct Stack2{
     int *top,*base;
     int Maxsize;
};
typedef struct BiTNode {
     TElemType  data ;
     struct BiTNode  *lchild , *rchild ;
}BiTNode,*BiTree;
int In(TElemType c);
int Operate(int num1,char t,int num2);
char Precede(TElemType top,TElemType c);
#include "test.h"
#include "stack.h" 
#include "stack2.h" 
int main(){
	Stack st;
	Stack2 nt; 
	char z[30],e,a,b,t;
	int i=0,flag=1,n=0;//flag判断之前是否有数 
	InitStack(st);
	InitStack2(nt);
	scanf("%s",&z);
	push(st,'#');//先放入一个#号作为结束标记 
	while(z[i]!='\0'||peek(st)!='#'){
		if(In(z[i])){//如果是整数则。。 
			n=n*10+z[i]-'0';
			flag=1;	
			i++;		
		}else{
		if(flag){
			push2(nt,n);//遇到运算符初始化将前一个数压入栈 
			n=0;
			flag=0;	
			}
			switch(Precede(peek(st),z[i])){
			case '=':
				pop(st);
				i++; 
				break;
			case '>':
				t=pop(st);
				a=pop2(nt);
				b=pop2(nt);
				push2(nt,Operate(a,t,b));
				break;
			case '<':
				push(st,z[i]);
				i++;
				break;
				}
		}
	
	}
		printf("%d\n",peek2(nt)); 
	return 0;
}
int In(TElemType c){
	if(c>=48&&c<=57)
	 	return 1;
	else
		return 0;
}
int Operate(int num1,char t,int num2){
	int sum;
	switch(t){
		case '+': sum=num1+num2; break;  
        case '-': sum=num1-num2; break;  
        case '*': sum=num1*num2; break;  
        case '/': sum=num1/num2; break;  
	}
	return sum;
} 
char Precede(TElemType top,TElemType c){  
    int i,j;  
    char pre[][7]={           
    /*运算符之间的优先级制作成一张表格*/  
        {'>','>','<','<','<','>','>'},  
        {'>','>','<','<','<','>','>'},  
        {'>','>','>','>','<','>','>'},  
        {'>','>','>','>','<','>','>'},  
        {'<','<','<','<','<','=','0'},  
        {'>','>','>','>','0','>','>'},  
        {'<','<','<','<','<','0','='}};  
    switch(top){  
        case '+': i=0; break;  
        case '-': i=1; break;  
        case '*': i=2; break;  
        case '/': i=3; break;  
        case '(': i=4; break;  
        case ')': i=5; break;  
        case '#': i=6; break;  
    }  
    switch(c){  
        case '+': j=0; break;  
        case '-': j=1; break;  
        case '*': j=2; break;  
        case '/': j=3; break;  
        case '(': j=4; break;  
        case ')': j=5; break;  
        case '#': j=6; break;  
    }  
    return pre[i][j];  
}  

