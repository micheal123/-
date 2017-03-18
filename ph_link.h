Status InitList(member* &m){
	m=new member[MAXSIZE];
	if(!m)
	return ERROR;
	else
	return OK;
}
