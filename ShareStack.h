void share_init(struct ShareStack &st,int size){
	st.Maxsize=size;
	st.base1=new ElemType[st.Maxsize];
	st.top1=st.base1; 
	st.base2=st.base1+size-1;//ʹbase2ָ���ַ�����β 
	st.top2=st.base2; 
	
}//��ʼ������ջ��ָ�붨λ������ 
void share_push(struct ShareStack &st,char j,int flag){//flag ������ĸ�ջ 
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

 
void share_peek(struct ShareStack &st,int flag){
	if(flag==1)
	printf("%c\n",*(st.top1-1));
	else
	printf("%c\n",*(st.top2+1));
}//�鿴ջ��Ԫ�� 
char share_pop(struct ShareStack &st,int flag){
	char e;
	if(flag==1){
		if(st.top1==st.base1)
			return '#';
		e=*(st.top1-1);
		st.top1--;
		return e;
	}else{
		if(st.top2==st.base2)
			return '#';
		e=*(st.top2+1);	
		st.top2++;
		return e;
	}
}//����ջ��ջ��top����baseʱջΪ�ա�
