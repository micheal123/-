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
char link_pop(struct LinkStack* &ls){
	LinkStack *p;
	char e;
	if(ls->next==NULL)
		return '#';
	p=ls->next;
	e=p->data;
	ls->next=p->next;
	delete p;
	return e;
}
