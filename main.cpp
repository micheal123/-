#include<cstdio>
#include<string> 
#include <iostream>
#include <sstream>
using namespace std;
typedef char TElemType;
struct Stack{
     TElemType *top,*base;
     int Maxsize;//运算符类型 
};
typedef struct BiTNode {
    string  data ;
     struct BiTNode  *lchild , *rchild ;
}BiTNode,*BiTree;
struct Stack2{//数字类型 
     BiTree *top,*base;
     int Maxsize;
};
int In(TElemType c);
int Operate(int num1,char t,int num2);
char Precede(TElemType top,TElemType c);
#include "stack.h" 
#include "stack2.h" 
#include "tree.h"
int main(){
	Stack st;
	Stack2 nt;
	string e="",fh=""; 
	char z[30],t;
	BiTree bt,a,b;
	int i=0,flag=1,n=0;//flag判断之前是否有数 
	InitStack(st);
	InitStack2(nt);
	scanf("%s",&z);
	push(st,'#');//先放入一个#号作为结束标记 
	while(z[i]!='#'||pk(st)!='#'){
		if(In(z[i])){//如果是整数则。。 
//			n=n*10+z[i]-'0';
			e=e+z[i];//连整数 
			flag=1;	
			i++;		
		}else{
		if(flag){
			bt=new BiTNode;
			bt->data=e;
			bt->lchild=NULL;
			bt->rchild=NULL;
			push2(nt,bt);//遇到运算符初始化将前一个数压入栈 
			e=""; 
			n=0;
			flag=0;
			}
			switch(Precede(pk(st),z[i])){
			case '=':
				pop(st);
				i++; 
				break;
			case '>':
				t=pop(st);//字符类型 
				a=pop2(nt);//树节点类型 
				b=pop2(nt);
				bt=new BiTNode;
				fh=t;
				bt->data=fh;
				bt->lchild=b;
				bt->rchild=a;
				push2(nt,bt);
				break;
			case '<':
				push(st,z[i]);
				i++;
				break;
				}
		}
	
	}
	cout<<mid_order(bt);
//		printf("%d\n",peek2(nt)); 
	return 0;
}
int In(TElemType c){
	if(c>=48&&c<=57)
	 	return 1;
	else
		return 0;
}
//int Operate(int num1,char t,int num2){
//	int sum;
//	switch(t){
//		case '+': sum=num1+num2; break;  
//        case '-': sum=num1-num2; break;  
//        case '*': sum=num1*num2; break;  
//        case '/': sum=num1/num2; break;  
//	}
//	return sum;
//} 
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

