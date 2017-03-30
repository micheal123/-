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
		member DeletList(ElemeType index);
		Status InsertList(member *e);
		int getlength();
}; 
void link::setlink(int l,member* &p){
		d=p;
	length=l;
}
int link::getlength(){
	return length;
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
	scanf("%d%s%s%s%s%s%s",&(t->id),&(t->name),&(t->sex),&(t->tle1),&(t->tle2),&(t->email),&(t->remark));
	t->next=NULL;
	temp--;
	}
	
}
void link::QueryList(){
	member *t;
	t=d;
	while(t->next!=NULL){
		t=t->next;	
		printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\n",(t->id),(t->name),(t->sex),(t->tle1),(t->tle2),(t->email),(t->remark));
	}
}
member link::DeletList(ElemeType index){
	member *t,*dt;
	ElemeType temp;
	t=d;
		dt=t->next;
	while(dt->id!=index){
		t=t->next;
		dt=t->next; 
	}
		t->next=dt->next;	
//		sq.InsertList(dt);
//		delete dt;
	length--;
	t=d;
	temp=1;

		while(t->next!=NULL){
		t=t->next;
			t->id=temp;			
			temp++;	
		}

	return *dt;
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
		while(t){
			t->id=temp;		
			t=t->next;	
			temp++;	
		}	
		length++; 
}


