void InitArc(ArcMap &map){
		int i;
		char temp='A';
		for(i=0;i<map.ptnum;i++){
			map.vertices[i].data=temp++;
			map.vertices[i].firstarc=new Arcnode;
			map.vertices[i].firstarc->next=NULL;
			map.vertices[i].visited=0;
		}		
		
}
bool DFS(ArcMap g, int i)  
{  
    if(g.vertices[i].firstarc->next==NULL)  
        return false;  
    printf("\nDFS: node %c\t", g.vertices[i].data);  
    g.vertices[i].visited = 1;  
    i = g.vertices[i].firstarc->next->index;  
    
    if(!g.vertices[i].visited)  
        DFS(g, i);  
    return true;  
}  
 int get_position(ArcMap g,char ch)
{
    int i;
    for(i=0;i<g.ptnum;i++)
        if(g.vertices[i].data==ch)
            return i;
    return -1;
}
void CreateArc(ArcMap &map,int length,char re[][2]){
	  int i,j,k,f;
	  Arcnode *temp;
	  
	for(i=0;i<length;i++)
		for(j=0;j<2;j++){
			temp=new Arcnode;
			temp->next=NULL;
		
			k=get_position(map,re[i][j]);
				if(j==0)
			  f=get_position(map,re[i][1]);
			  else
			  f=get_position(map,re[i][0]);
//			  
			temp->next=map.vertices[k].firstarc->next;
			temp->index=f;
		
			map.vertices[k].firstarc->next=temp;  
				printf("\nf==%d", f);
		}
//		k=(map.vertices[0].firstarc)->next->index;
// printf("\nk==%d", k);  
}

