class seq{
	private:
		int length;//��ǰ���� 
		int size;//�ܹ���С 
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
	end=m+length-1;//�����β 
	if(index>length||index<1)
		return ERROR;
	m=m+index-1;
	while(m<=end){
		*m=*(m+1);//ɾ��һ������ǰŲһλ 
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
		end=m+length-1;//�����β 
		id=e->id;
		if(id>(length+1)||id<0)
			return ERROR;	//��Ŵ��� ֱ�ӷ��� 
		m=m+id-1;//����Ҫ�����λ�� 
		temp=length+1;
		printf("%d\n",temp);
		while(end>=m){
			*(end+1)=*end;//���������ƶ�һλ 
			(end+1)->id=temp;//���ƶ����Ԫ����Ÿ�Ϊ1 
			end--; 
			temp--;	
		}
		length++;
		*(end+1)=*e;//���� 
		return OK;
	
}

