//class seq{
//	private:
//		int length;
//		int size;
//	public:
//		void setseq(int length,int )
//}; 
Status InitList(member* &m){
	m=new member[MAXSIZE];
	if(!m)
	return ERROR;
	else
	return OK;
}
//Status DestoryList(member &m){
//	
//}
void ReadFile(ElemeType &t,member* &m){
	int temp;
	 scanf("%d",&t);
	 temp=t;  
	  while(temp)
	   {	
	   	scanf("%d%s%s%d%d%s",&(m->id),&(m->name),&(m->sex),&(m->tle1),&(m->tle2),&(m->remark));
		temp--;
		m++;
	   }
	
}
void QueryList(ElemeType t,member *m){
	while(t){
		printf("%d\t%s\t%s\t%d\t%d\t%s\n",(m->id),(m->name),(m->sex),(m->tle1),(m->tle2),(m->remark));
		t--;
		m++;
	}
}
Status ListInsert(member &m,ElemeType i,member e){
	
}

