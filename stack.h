void InitStack(Stack &st){
	st.Maxsize=40;
	st.base=new char[st.Maxsize];
	st.top=st.base;	
}
void push(Stack &st,TElemType e){
	if((st.top+1)-st.base>20)
	{	
		printf("һջ�Ŀռ������ˣ���");
		return; 
	} 
	*st.top=e;
	st.top++;
}
TElemType pk(Stack &st){
	if(st.top==st.base){
		printf("�Ѿ�Ϊ��ջ����");
		return '$'; 
	}	
	return *(st.top-1);	
} 
TElemType pop(Stack &st){
	if(st.base==st.top){
		printf("pop�����Ѿ�Ϊ��ջ����");
		return '$'; 
	}
	st.top--;
	return *st.top; 	
}

