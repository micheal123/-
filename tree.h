string calculte(string a,string t,string b);
string mid_order(BiTree Node)
{
if(Node->lchild==NULL&&Node->rchild==NULL)
{
	return Node->data;
}
	string a=mid_order(Node->lchild);
	string b=mid_order(Node->rchild);
	return calculte(a,Node->data,b);

}
string calculte(string a,string t,string b){
	int n1,i=0,n2,re;
	 stringstream aa(a),bb(b),sum;
//	while(a[i]!='\0'){
//		n1=n1*10+a[i]-'0';
//		i++;
//	}
	aa>>n1;
	bb>>n2;
	re=Operate(n1,t[0],n2);
	sum<<re;	
	return sum.str();
}
int Operate(int num1,char t,int num2){
	int sum;
	switch(t){
		case '+': sum=num1+num2; break;  
        case '-': sum=num1-num2; break;  
        case '*': sum=num1*num2; break;  
        case '/': sum=num1/num2; break;  
	}
	return sum;
} 
