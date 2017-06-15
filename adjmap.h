int LocAte(AdjMap &map,char e){
	int i;
	for(i=0;i<map.ptnum;i++){
		if(e==map.vex[i])
			return i;
	}
}
void InitMap(AdjMap &map){
	char temp='A',i,j; 
		for(i=0;i<map.ptnum;i++){
			map.vex[i]=temp++;
			map.visited[i]=0;
		}
		
	for(i=0;i<map.ptnum;i++)
		for(j=0;j<map.ptnum;j++)
			map.arcs[i][j]={0};	
	
}
void CreateMap(char rela[],AdjMap &map,int &count,int length){
	int k,i,j;
		for(k=0;k<length;k++)
	{	
	if(k+1==length)
				break;
			i=LocAte(map,rela[k]); 
			j=LocAte(map,rela[k+1]);
			map.arcs[i][j].value=1;
			map.arcs[j][i]=map.arcs[i][j];
				count++;
		}	
}
void visit(AdjMap &g, int i)  
{  
    printf("%c ", g.vex[i]);  
    g.visited[i] = 1; 
 
} 
void DFSTraverse(AdjMap &g, int i)  //从第i个顶点开始搜素  
{  
    visit(g, i);  
    for (int j = 0; j < g.ptnum; j++)  
    {  
        if (g.arcs[i][j].value&&!g.visited[j])  
            DFSTraverse(g, j);  
    }  
} 
//void BFS(AdjMap &g)  
//{  
//    int i;  
//    //初始化visited数组，表示一开始所有顶点都未被访问过    
//    for(i=1;i<=g.ptnum;i++)  
//        g.visited[i]=0;  
//    //广度优先搜索    
//    for(i=1;i<=g.ptnum;i++)  
//    {  
//        if(visited[i]==0)//如果这个顶点未被访问过，则从i顶点出发进行广度优先遍历   
//            bfs(g,i);  
//    }  
//}  
void MapPrint(AdjMap &map){
	int i,j;
	for(i=0;i<map.ptnum;i++){
			for(j=0;j<map.ptnum;j++){
				printf("%d ",map.arcs[i][j].value);
			}
	printf("\n");		
	}
	
}
