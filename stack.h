void InitStack(Stack &st){
	st.Maxsize=40;
	st.base=new char[st.Maxsize];
	st.top=st.base;	
}
void push(Stack &st,TElemType e){
	if((st.top+1)-st.base>20)
	{	
		printf("一栈的空间用完了！！");
		return; 
	} 
	*st.top=e;
	st.top++;
}
TElemType pk(Stack &st){
	if(st.top==st.base){
		printf("已经为空栈！！");
		return '$'; 
	}	
	return *(st.top-1);	
} 
TElemType pop(Stack &st){
	if(st.base==st.top){
		printf("pop——已经为空栈！！");
		return '$'; 
	}
	st.top--;
	return *st.top; 	
}

