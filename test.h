void InitBiTree(BiTree &T){
	T=new BiTNode;
	T->lchild=NULL;
	T->rchild=NULL;
}  
//��ʼ��������T 
void CreateBiTree(BiTree &T){
	int a;
	scanf("%d",&a);
	if(a==-1)
		T=NULL;
	else{
	  	T=new BiTNode;
		if(T==NULL)
		return ;
		T->data=a;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
	
	
} 
//������������н�����������T     
bool BiTreeEmpty (BiTree T){
	
}         
//��������T�Ƿ�Ϊ�գ��շ���1�����򷵻�0 
int BiTreeDepth(BiTree T){
	
}
//�������T����Ȳ����ظ�ֵ                       
void PreOrderTraverse (BiTree T){
	
}    
//�������������T
void InOrderTraverse (BiTree T){
	
}
//�������������T
void PostOrderTraverse (BiTree T){
} 

