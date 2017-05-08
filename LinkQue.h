void link_init(struct LinkQue* &ls){
		ls=new LinkQue();//初始化头节点 
		ls->end=ls;
		ls->next=ls;//单项循环链表 
}
void link_push(struct LinkQue* &ls,ElemType e){
	LinkQue *p;
	p=new LinkQue();
	p->data=e;
	p->next=ls; 
	ls->end->next=p;//将元素尾插入 
	ls->end=p;//将尾指针指向最后一个元素 
}//链式队列的插入 
void link_peek(struct LinkQue* &ls){
	LinkQue *p;
	p=ls->next;
	printf("%c\n",p->data);
}//链式栈的查看
char link_pop(struct LinkQue* &ls){
	LinkQue *p;
	char e;
	if(ls->next==ls)
		return '#';
	p=ls->next;
	e=p->data;
	ls->next=p->next;
	delete p;
	return e;
}
