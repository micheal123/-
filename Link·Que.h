void link_init(struct LinkQue* &ls){
		ls=new LinkQue();//��ʼ��ͷ�ڵ� 
		ls->end=ls;
		ls->next=ls;//����ѭ������ 
}
void link_push(struct LinkQue* &ls,ElemType e){
	LinkQue *p;
	p=new LinkQue();
	p->data=e;
	p->next=ls; 
	ls->end->next=p;//��Ԫ��β���� 
	ls->end=p;//��βָ��ָ�����һ��Ԫ�� 
}//��ʽ���еĲ��� 
void link_peek(struct LinkQue* &ls){
	LinkQue *p;
	p=ls->next;
	printf("%c\n",p->data);
}//��ʽջ�Ĳ鿴
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
