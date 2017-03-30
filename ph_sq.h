#include<iostream>
using namespace std; 
class seq{
	private:
		int length;//��ǰ���� 
		int size;//�ܹ���С 
		member *m;
	public:
		void setseq(int l,int s,member* &p);
		Status InitList(); 
		void ReadFile();
		void QueryList();	
		void SaveFile();
		Status DeletList(ElemeType index,link &lk);
		Status InsertList(member *e);
		Status Update();
}; 
Status seq::InitList(){
	m=new member[size];
	if(!m)
	return ERROR;
	else
	return OK;
}
//Status DestoryList(member &m){
//	
//}

void seq::ReadFile(){
	int temp;
	member *t;
	t=m;
	 temp=length;  
	  while(temp)
	   {	
	   	scanf("%d%s%s%s%s%s%s",&(t->id),&(t->name),&(t->sex),&(t->tle1),&(t->tle2),&(t->email),&(t->remark));
		temp--;
		t++;
	   }
	
}
void seq::setseq(int l,int s,member* &p){
		length=l;
		size=s;
		m=p;
		
}
void seq::QueryList(){
	member *t;
	int temp;
	t=m;
	temp=length;
	while(temp){
		printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\n",(t->id),(t->name),(t->sex),(t->tle1),(t->tle2),(t->email),(t->remark));
		temp--;
		t++;
	}
}
void seq::SaveFile(){
	printf("%d\n",length);
	QueryList();
}
Status seq::DeletList(ElemeType index,link &lk){
	member *end,*t,*dt;
	t=m;
	end=t+length-1;//�����β 
	if(index>length||index<1)
		return ERROR;
	t=t+index-1;	
	dt=new member();
	*dt=*t;
	lk.InsertList(dt);
	while(t<=end){
		*t=*(t+1);//ɾ��һ������ǰŲһλ 
		t->id=index;
		t++;
		index++;
	}
	length--;
	return OK;
	
}
	Status seq::Update(){
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
	Status seq::InsertList(member *e){
		member *end;
		if(length==size){
			return ERROR;
		}
		end=m+length-1;
		e->id=length+1;
		*(end+1)=*e;
		length++;
		delete e; 
		return OK;
	}

//Status seq::InsertindexList(member *e){ 
//		int id,temp;
//		member *end,*t;
//		t=m;
//		end=t+length-1;//�����β 
//		id=e->id;
//		if(id>(length+1)||id<0)
//			return ERROR;	//��Ŵ��� ֱ�ӷ��� 
//		t=t+id-1;//����Ҫ�����λ�� 
//		temp=length+1;
//		while(end>=t){
//			*(end+1)=*end;//���������ƶ�һλ 
//			(end+1)->id=temp;//���ƶ����Ԫ����Ÿ�Ϊ1 
//			end--; 
//			temp--;	
//		}
//		length++;
//		*(end+1)=*e;//���� 
//		delete e; 
//		return OK;
//	
//}
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
