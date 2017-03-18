class seq{
	private:
		int length;//当前长度 
		int size;//总共大小 
	public:
		void setseq(int l,int s );
		Status InitList(member* &m); 
		void ReadFile(member* &m);
		void QueryList(member *m);
		Status DeletList(member* &m,ElemeType index);
		Status InsertList(member* &m,member *e);
}; 
Status seq::InitList(member* &m){
	m=new member[size];
	if(!m)
	return ERROR;
	else
	return OK;
}
//Status DestoryList(member &m){
//	
//}
void seq::ReadFile(member* &m){
	int temp;
	 temp=length;  
	  while(temp)
	   {	
	   	scanf("%d%s%s%d%d%s",&(m->id),&(m->name),&(m->sex),&(m->tle1),&(m->tle2),&(m->remark));
		temp--;
		m++;
	   }
	
}
void seq::setseq(int l,int s){
		length=l;
		size=s;
}
void seq::QueryList(member *m){
	int temp;
	temp=length;
	while(temp){
		printf("%d\t%s\t%s\t%d\t%d\t%s\n",(m->id),(m->name),(m->sex),(m->tle1),(m->tle2),(m->remark));
		temp--;
		m++;
	}
}
Status seq::DeletList(member* &m,ElemeType index){
	member *end;
	end=m+length-1;//定义表尾 
	if(index>length||index<1)
		return ERROR;
	m=m+index-1;
	while(m<=end){
		*m=*(m+1);//删掉一个，往前挪一位 
		m->id=index;
		m++;
		index++;
	}
	length--;
	return OK;
	
}

Status seq::InsertList(member* &m,member *e){
		int id,temp;
		member *end;
		end=m+length-1;//定义表尾 
		id=e->id;
		if(id>(length+1)||id<0)
			return ERROR;	//序号错误 直接返回 
		m=m+id-1;//定义要插入的位置 
		temp=length+1;
		printf("%d\n",temp);
		while(end>=m){
			*(end+1)=*end;//将都往后移动一位 
			(end+1)->id=temp;//将移动后的元素序号改为1 
			end--; 
			temp--;	
		}
		length++;
		*(end+1)=*e;//插入 
		return OK;
	
}

