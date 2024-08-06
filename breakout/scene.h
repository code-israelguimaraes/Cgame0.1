int bloco_view1[]={1,1,1,1,1,1,1,1,1,1,
				  1,1,1,1,1,1,1,1,1,1,
				  1,1,1,1,1,1,1,1,1,1,
				  1,1};//32
				  
int bloco_view2[]={1,1,1,1,1,1,1,1,1,1,
				  1,1,1,1,1,1,1,1,1,1,
				  1,1,1,1,1,1,1,1,1,1,
				  1,1};//32
				  
int bloco_view3[]={1,1,1,1,1,1,1,1,1,1,
				  1,1,1,1,1,1,1,1,1,1,
				  1,1,1,1,1,1,1,1,1,1,
				  1,1};//32

void bloco1(int x,int y,int color,int bloco){
	
	//COLISAO
	
	//LEFT BAIXO
	if((cgame_collision_pixel(x+0,y+0,x+0,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		ball_directionLR=-1;
		bloco_view1[bloco]=0;
		score++;
	}
	
	//LEFT CIMA
	if((cgame_collision_pixel(x+0,y-1,x+0,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		ball_directionLR=-1;
		bloco_view1[bloco]=0;
		score++;
	}
	
	//------------------------------------------------------------------
	//MIDDLE BAIXO
	if((cgame_collision_pixel(x+1,y+0,x+1,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		bloco_view1[bloco]=0;
		score++;
	}
	
	//MIDDLE CIMA
	if((cgame_collision_pixel(x+1,y-1,x+1,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		bloco_view1[bloco]=0;
		score++;
	}
	
	//------------------------------------------------------------------
	//RIGHT BAIXO
	if((cgame_collision_pixel(x+2,y+0,x+2,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		ball_directionLR=1;
		bloco_view1[bloco]=0;
		score++;
	}
	
	//RIGHT CIMA
	if((cgame_collision_pixel(x+2,y-1,x+2,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		ball_directionLR=1;
		bloco_view1[bloco]=0;
		score++;
	}
	//------------------------------------------------------------------
	
	cgame_rectangle(x,y,3,1,color);
		
};

void bloco2(int x,int y,int color,int bloco){
	
	//COLISAO
	
	//LEFT BAIXO
	if((cgame_collision_pixel(x+0,y+0,x+0,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		ball_directionLR=-1;
		bloco_view2[bloco]=0;
		score++;
	}
	
	//LEFT CIMA
	if((cgame_collision_pixel(x+0,y-1,x+0,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		ball_directionLR=-1;
		bloco_view2[bloco]=0;
		score++;
	}
	
	//------------------------------------------------------------------
	//MIDDLE BAIXO
	if((cgame_collision_pixel(x+1,y+0,x+1,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		bloco_view2[bloco]=0;
		score++;
	}
	
	//MIDDLE CIMA
	if((cgame_collision_pixel(x+1,y-1,x+1,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		bloco_view2[bloco]=0;
		score++;
	}
	
	//------------------------------------------------------------------
	//RIGHT BAIXO
	if((cgame_collision_pixel(x+2,y+0,x+2,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		ball_directionLR=1;
		bloco_view2[bloco]=0;
		score++;
	}
	
	//RIGHT CIMA
	if((cgame_collision_pixel(x+2,y-1,x+2,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		ball_directionLR=1;
		bloco_view2[bloco]=0;
		score++;
	}
	//------------------------------------------------------------------
	
	cgame_rectangle(x,y,3,1,color);
		
};

void bloco3(int x,int y,int color,int bloco){
	
	//COLISAO
	
	//LEFT BAIXO
	if((cgame_collision_pixel(x+0,y+0,x+0,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		ball_directionLR=-1;
		bloco_view3[bloco]=0;
		score++;
	}
	
	//LEFT CIMA
	if((cgame_collision_pixel(x+0,y-1,x+0,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		ball_directionLR=-1;
		bloco_view3[bloco]=0;
		score++;
	}
	
	//------------------------------------------------------------------
	//MIDDLE BAIXO
	if((cgame_collision_pixel(x+1,y+0,x+1,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		bloco_view3[bloco]=0;
		score++;
	}
	
	//MIDDLE CIMA
	if((cgame_collision_pixel(x+1,y-1,x+1,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		bloco_view3[bloco]=0;
		score++;
	}
	
	//------------------------------------------------------------------
	//RIGHT BAIXO
	if((cgame_collision_pixel(x+2,y+0,x+2,y+0,ball_x,ball_y,0)==1)){
		ball_directionUD=1;	
		ball_directionLR=1;
		bloco_view3[bloco]=0;
		score++;
	}
	
	//RIGHT CIMA
	if((cgame_collision_pixel(x+2,y-1,x+2,y-1,ball_x,ball_y,0)==1)){
		ball_directionUD=-1;	
		ball_directionLR=1;
		bloco_view3[bloco]=0;
		score++;
	}
	//------------------------------------------------------------------
	
	cgame_rectangle(x,y,3,1,color);
		
};

void scene(int x,int y){

	int blocoquantidade=32;
	
	//VIEW BLOCOS POR QUANTIDADE DE BLOCOS
	for(int k=0;k<blocoquantidade;k++){
		if(bloco_view1[k]==1)bloco1(x+(k*3),y+0,3,k);
	}
	
	//VIEW BLOCOS POR QUANTIDADE DE BLOCOS
	for(int k=0;k<blocoquantidade;k++){
		if(bloco_view2[k]==1)bloco2(x+(k*3),y+1,9,k);
	}
		
	//VIEW BLOCOS POR QUANTIDADE DE BLOCOS
	for(int k=0;k<blocoquantidade;k++){
		if(bloco_view3[k]==1)bloco3(x+(k*3),y+2,4,k);
	}	
	
	//ZERAR
	if(score==(32*3)){
		for(int k=0;k<32;k++){
			bloco_view1[k]=0;//32
			bloco_view2[k]=0;//32
			bloco_view3[k]=0;//32
		}
		
	}
	
	
	
	
	

}
