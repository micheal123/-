#include<iostream>
using namespace std; 
class seq{
	private:
		int length;//��ǰ���� 
		int size;//�ܹ���С 
	public:
		void setseq(int l,int s );
		Status InitList(member* &m); 
		void ReadFile(member* &m);
		void QueryList(member *m);	
		void SaveFile(member *m);
		Status DeletList(member* &m,ElemeType index);
		Status InsertList(member* &m,member *e);
		Status Update(member *m);
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
	member *t;
	int temp;
	t=m;
	temp=length;
	while(temp){
		printf("%d\t%s\t%s\t%d\t%d\t%s\n",(t->id),(t->name),(t->sex),(t->tle1),(t->tle2),(t->remark));
		temp--;
		t++;
	}
}
void seq::SaveFile(member *m){
	printf("%d\n",length);
	QueryList(m);
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
	Status seq::Update(member *m){
		 	member *temp;
			 int id,choose;
                scanf("%d",&id);
                if(id==-1)
                	return OK;
				temp=m+id-1;
                 printf("��ѡ��Ҫ�޸ĵ����ݣ�\n1.����\t2.�Ա�\t3.�绰1\t4.�绰2\t5.��ע");
                 scanf("%d",&choose);
                 switch(choose){
                 	case 1:
                 		{
                 		cin>>(temp->name); 
                 			break;	
						 }
                 	case 2:
                 		{
                 				cin>>(temp->sex); 
                 			break;	
						 }
                 	case 3:
                 		{
                 				cin>>(temp->tle1); 
                 			break;	
						 }
				 	case 4:
                 		{
                 				cin>>(temp->tle2); 
                 			break;	
						 }
					case 5:
                 		{
                 			cin>>(temp->remark); 
                 			break;	
						 }
					default:
						{
							printf("ѡ���������������,��������-1�˻����˵�\n");
							return ERROR; 
						}
				 }
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
		while(end>=m){
			*(end+1)=*end;//���������ƶ�һλ 
			(end+1)->id=temp;//���ƶ����Ԫ����Ÿ�Ϊ1 
			end--; 
			temp--;	
		}
		length++;
		*(end+1)=*e;//���� 
		delete e; 
		return OK;
	
}
void print(){
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");  
   		printf("*=*               ����˵��                *=*\n");  
   	    printf("*=*    �뼰ʱ���洴����ϵ�ͨѶ¼����!    *=*\n");  
        printf("*=*               �ֻ�ͨѶ¼             *=*\n");  
        printf("*=*               1.�����µ�ͨѶ¼        *=*\n");
        printf("*=*               2.����ͨѶ¼            *=*\n");
        printf("*=*               3.�鿴ͨѶ¼            *=*\n");
        printf("*=*               4.����û�              *=*\n");
        printf("*=*               5.ɾ���û�              *=*\n");
        printf("*=*               6.�޸��û�              *=*\n");
        printf("*=*               7.�鿴��ɾĿ¼          *=*\n");
        printf("*=*               8.�����û�              *=*\n");
        printf("*=*               9.�˳�ϵͳ              *=*\n");
        printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
          
        printf("������1-9�Ĺ��ܱ�� ��\n");  
	
}
