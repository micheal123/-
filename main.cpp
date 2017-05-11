#include<cstdio>
typedef char TElemType;
struct Stack{
     TElemType *top,*base;
     int Maxsize;
};
typedef struct BiTNode {
     TElemType  data ;
     struct BiTNode  *lchild , *rchild ;
}BiTNode,*BiTree;
 
#include "test.h"
#include "stack.h" 
int main(){
	Stack st,nt;
	char z[30],e,a,b,t;
	int i=0;
	InitStack(st);
	InitStack(nt);
	scanf("%s",&z);
	push(st,'#');//先放入一个#号作为结束标记 
	while(z[i]!='\0'){
		if(!In(z[i])){
			push(nt,z[i]);			
		}else{
			switch(Precede(z[i],peek(st))){
			case '=':
				pop(st);
				break;
			case '>':
				t=pop(st);
				a=pop(nt);
				b=pop(nt);
				push(nt,Operate(a,t,b));
				break;
			case '<':
				push(st,z[i]);
				break;
				}
		}
		
		i++;
	}
	while(1){
		e=pop(st);
	if(e!='#')
		printf("%c",e);
	else 
		break;
	} 
	return 0;
}
int In(TElemType c){
	if(c>=48&&c<=57)
	 	return 1;
	else
		return 0;
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

