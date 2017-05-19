void mid_order(BiTree Node)
{
if(Node != NULL)
{

	mid_order(Node->lchild);
	cout<<Node->data; 
	mid_order(Node->rchild);
}
}
