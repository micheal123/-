void InitStack2(Stack2 &st){
	st.Maxsize=20;
	st.base=new BiTree[st.Maxsize];
	st.top=st.base;	
}
void push2(Stack2 &st,BiTree e){
	if((st.top+1)-st.base>20)
	{	
		printf("���ֽڵ�ջ�Ŀռ������ˣ���");
		return; 
	} 
	*st.top=e;
	st.top++;
}
BiTree pop2(Stack2 &st){
	if(st.base==st.top){
		printf("���ֽڵ��Ѿ�Ϊ��ջ����");
		return *st.top; 
	}
	st.top--;
	return *st.top; 	
}
//int peek2(Stack2 &st){
//	if(st.top==st.base){
//			printf("�Ѿ�Ϊ��ջ����");
//			return 0; 
//	}
//	return *(st.top-1);
//}
