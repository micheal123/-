int LocAte(AdjMap &map,char e){
	int i;
	for(i=0;i<map.ptnum;i++){
		if(e==map.vex[i])
			return i;
	}
}
void InitMap(AdjMap &map){
	char temp='A',i,j; 
		for(i=0;i<map.ptnum;i++)
		map.vex[i]=temp++;
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

void MapPrint(AdjMap &map){
	int i,j;
	for(i=0;i<map.ptnum;i++){
			for(j=0;j<map.ptnum;j++){
				printf("%d ",map.arcs[i][j].value);
			}
	printf("\n");		
	}
	
}
