void share_init(struct ShareStack &st,int size){
	st.Maxsize=size;
	st.base1=new ElemType[st.Maxsize];
	st.top1=st.base1; 
	st.base2=st.base1+size-1;//使base2指向字符数组尾 
	st.top2=st.base2; 
	
}//初始化共享栈将指针定位到两端 
void share_push(struct ShareStack &st,char j,int flag){//flag 标记是哪个栈 
	if(flag==1){
		if(st.top1+1==st.top2)
	{
		printf("存储空间用完！！！请重新初始化栈！\n");
		return;		
	}
	*st.top1=j; 
	st.top1++;
	}else{
		if(st.top2-1==st.top1)
	{
		printf("存储空间用完！！！请重新初始化栈！\n");
		return;		
	}
	*st.top2=j; 
	st.top2--;
		
	}
	
}//共享栈的插入 

 
void share_peek(struct ShareStack &st,int flag){
	if(flag==1)
	printf("%c\n",*(st.top1-1));
	else
	printf("%c\n",*(st.top2+1));
}//查看栈顶元素 
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
}//分享栈出栈当top等于base时栈为空。
