#include<cstdio>
#define MAX_VEX 20
/*1����ͼ  2����ͼ  3������  4������ 
*/ 
//�ڽӾ�����
typedef struct AdjPty{
	int value;//Ȩֵ 
}AdjMatrix[MAX_VEX][MAX_VEX]; 
struct AdjMap{
	char vex[MAX_VEX];//�������� 
	int ptnum,arcnum;//�������ͻ���
	AdjMatrix arcs;	//������� 
	int kind;	 
}; 

//�ڽӱ��� 
#include "adjmap.h"
int main(){
	AdjMap map;
	int count=0,l1,l2,l3;
	char rela[]={'A','C','H','M','N','K','F','D','E','I','J','F','B','A'};
	char rela2[]={'E','H','L'},rela3[]={'J','K','F','G'}; 
	map.ptnum=14;
	map.kind=2;
	l1=(sizeof(rela)/sizeof(rela[0]));
	l2=(sizeof(rela2)/sizeof(rela2[0]));
	l3=(sizeof(rela3)/sizeof(rela3[0]));	 
		InitMap(map);
		CreateMap(rela,map,count,l1);
		CreateMap(rela2,map,count,l2);
		CreateMap(rela3,map,count,l3);			
		MapPrint(map);		
		printf("��%d",count);
		
	return 0;
} 
