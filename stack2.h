void InitStack2(Stack &st){
	st.Maxsize=20;
	st.base=new char[st.Maxsize];
	st.top=st.base;	
}
void push2(Stack &st,int e){
	if((st.top+1)-st.base>20)
	{	
		printf("ջ�Ŀռ������ˣ���");
		return; 
	} 
	*st.top=e;
	st.top++;
}
int pop2(Stack &st){
	if(st.base==st.top){
		printf("�Ѿ�Ϊ��ջ����");
		return '$'; 
	}
	st.top--;
	return *st.top; 	
}
int peek2(Stack &st){
	if(st.top==st.base){
			printf("�Ѿ�Ϊ��ջ����");
			return '$'; 
	}
	return *(st.top-1);
}
