void Read(){
		FILE  *fp;
		fp=fopen("data.txt", "r");
		fscanf(fp,"%d",&t);
		if(t==NULL){
		t=0;
		}
		InitList_Sq(tx);
		tx.length=t;	
		ReadFile(tx,fp);	//≥ı ºªØ 
		fclose(fp);
		fp=fopen("de.txt", "r");
		fscanf(fp,"%d",&t);
		if(t==NULL){
		t=0;
		}
		InitList_link(h);
		ReadFile_link(h,t,fp);
		fclose(fp);
	} 
	
