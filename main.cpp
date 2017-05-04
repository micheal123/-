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
	Stack st;
	char z[30],e;
	int i=0;
	InitStack(st);
	scanf("%s",&z);
	push(st,'#');//先放入一个#号作为结束标记 
	while(z[i]!='\0'){
		if(z[i]>=42&&z[i]<=45){
			push(st,z[i]);
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
