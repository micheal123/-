void InitBiTree(BiTree &T){
	T=new BiTNode;
	T->lchild=NULL;
	T->rchild=NULL;
}  
//初始化二叉树T 
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
//按先序遍历序列建立二叉链表T     
bool BiTreeEmpty (BiTree T){
	
}         
//检查二叉树T是否为空，空返回1，否则返回0 
int BiTreeDepth(BiTree T){
	
}
//求二叉树T的深度并返回该值                       
void PreOrderTraverse (BiTree T){
	
}    
//先序遍历二叉树T
void InOrderTraverse (BiTree T){
	
}
//中序遍历二叉树T
void PostOrderTraverse (BiTree T){
} 

