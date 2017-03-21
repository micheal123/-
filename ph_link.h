class link{
	private:
		int length;//当前长度 
		member *d;//头指针 
	public:
		void setlink(int l,member* &p);
		Status InitList(); 
		void ReadFile();
		void QueryList();	
		void SaveFile();
		Status DeletList(ElemeType index);
		Status InsertList(member *e);
}; 
void link::setlink(int l,member* &p){
		d=p;
	length=l;
}
Status link::InitList(){
	d=new member();//初始化头节点
	d->next=NULL;
	if(!d)
	return ERROR;
	else
	return OK; 
	
}
void link::ReadFile(){
	 ElemeType temp;
	 member *t;
	 t=d;
	 temp=length;
	while(temp){
	t->next=new member();
	t=t->next;	//移动指针 
	scanf("%d%s%s%d%d%s",&(t->id),&(t->name),&(t->sex),&(t->tle1),&(t->tle2),&(t->remark));
	t->next=NULL;
	temp--;
	}
	
}
void link::QueryList(){
	member *t;
	t=d;
	while(t->next!=NULL){
		t=t->next;	
		printf("%d\t%s\t%s\t%d\t%d\t%s\n",(t->id),(t->name),(t->sex),(t->tle1),(t->tle2),(t->remark));
	}
}
Status link::DeletList(ElemeType index){
	member *t,*dt;
	ElemeType temp;
	t=d;
	if(index>length||index<1)
		return ERROR;
	if(index==1){
		dt=t;
		d=t->next;
	}else if(index==length){
		while(t->next->next!=NULL)
		t=t->next;
		dt=t->next;
		t->next=NULL;
	}else{
		dt=t->next;
		while(dt->id!=index){
		t=t->next;
		dt=t->next; 
	}
		t->next=dt->next;
	}
	delete dt;
	length--;
	t=d;
	temp=1;
		while(t->next!=NULL){
			t->id=temp;			
			t=t->next;
			temp++;	
		}

	return OK;
}
void link::SaveFile(){
	printf("%d\n",length);
	QueryList();
}
Status link::InsertList(member *e){
	ElemeType temp;
		member *t;
		t=d;
			while(t->next!=NULL){
			t=t->next;
			} 
			e->next=NULL;			
			t->next=e;
			t=d->next;
			temp=1;
		while(t->next!=NULL){
			t->id=temp;		
			t=t->next;	
			temp++;	
		}	
		length++; 
}


