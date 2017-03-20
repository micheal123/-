#include<iostream>
using namespace std; 
class seq{
	private:
		int length;//当前长度 
		int size;//总共大小 
		member *m;
	public:
		void setseq(int l,int s,member* &p);
		Status InitList(); 
		void ReadFile();
		void QueryList();	
		void SaveFile();
		Status DeletList(ElemeType index);
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
	   	scanf("%d%s%s%d%d%s",&(t->id),&(t->name),&(t->sex),&(t->tle1),&(t->tle2),&(t->remark));
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
		printf("%d\t%s\t%s\t%d\t%d\t%s\n",(t->id),(t->name),(t->sex),(t->tle1),(t->tle2),(t->remark));
		temp--;
		t++;
	}
}
void seq::SaveFile(){
	printf("%d\n",length);
	QueryList();
}
Status seq::DeletList(ElemeType index){
	member *end,*t;
	t=m;
	end=t+length-1;//定义表尾 
	if(index>length||index<1)
		return ERROR;
	t=t+index-1;
	while(t<=end){
		*t=*(t+1);//删掉一个，往前挪一位 
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
                 printf("请选择要修改的内容：\n1.姓名\t2.性别\t3.电话1\t4.电话2\t5.备注");
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
							printf("选择错误请重新输入,或者输入-1退回主菜单\n");
							return ERROR; 
						}
				 }
				 return OK;
	}

Status seq::InsertList(member *e){
		int id,temp;
		member *end,*t;
		t=m;
		end=t+length-1;//定义表尾 
		id=e->id;
		if(id>(length+1)||id<0)
			return ERROR;	//序号错误 直接返回 
		t=t+id-1;//定义要插入的位置 
		temp=length+1;
		while(end>=t){
			*(end+1)=*end;//将都往后移动一位 
			(end+1)->id=temp;//将移动后的元素序号改为1 
			end--; 
			temp--;	
		}
		length++;
		*(end+1)=*e;//插入 
		delete e; 
		return OK;
	
}
void print(){
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");  
   		printf("*=*               程序说明                *=*\n");  
   	    printf("*=*    请及时保存创建完毕的通讯录内容!    *=*\n");  
        printf("*=*               手机通讯录             *=*\n");  
        printf("*=*               1.创建新的通讯录        *=*\n");
        printf("*=*               2.保存通讯录            *=*\n");
        printf("*=*               3.查看通讯录            *=*\n");
        printf("*=*               4.添加用户              *=*\n");
        printf("*=*               5.删除用户              *=*\n");
        printf("*=*               6.修改用户              *=*\n");
        printf("*=*               7.查看被删目录          *=*\n");
        printf("*=*               8.查找用户              *=*\n");
        printf("*=*               9.退出系统              *=*\n");
        printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
          
        printf("请输入1-9的功能编号 ：\n");  
	
}
