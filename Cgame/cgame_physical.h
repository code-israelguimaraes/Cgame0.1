/*	
 * 	AUTHOR: ISRAEL SOUSA GUIMARAES
 *  CREATION DATE 29/01/2019
 *  VERSION CGAME: 0.1	
 *  OPERATION SYSTEM: LINUX
 * 	WRITTER IN: C
 *  MODO: CONSOLE
 *  FONT: TERMINUS 
 *  SIZE: 13
 * -------------------------------------------------------------------
 *
 * USE THE CHARACTERES DRAWING: █
 * 
 * -------------------------------------------------------------------
 * 
 * FUNCTIONS 4
 * 
 * 1-COLISSION IN PIXEL
 * 2-COLISSION IN AREA RECTANGLE
 * 3-COLISSION IN AREA SQUAD
 * 4-RANDOW NUMBER
 * 
 * 1-COLISSION IN PIXEL
 * SIMULATE PIXEL TO PIXEL COLLISION USING X AND Y COORDINATES OF TWO OBJECTS
 * 
 * 2-COLISSION IN AREA RECTANGLE
 * SIMULATES A COLLISION, HAVING AN EXACT RECTANGULAR AREA AS A BASE
 * 
 * 3-COLISSION IN AREA SQUAD
 * SIMULATES A COLLISION, HAVING AN EXACT SQUAD AREA AS A BASE
 * 
 * 4-RANDOW NUMBER
 * GENERATE RANDOM NUMBERS BETWEEN A TIME INTERVAL
 * 
 *  
 * */

int cgame_collision_pixel(int x,int y,int a,int b,int c,int d,int view){

	if(view==1)gotoxy(x,y),printf("█");

	// (a,b) == (c,d) TRUE
	// (a,b) != (c,d) FALSE

	if(a==c && b==d)return 1;
	
	if(a!=c || b!=d)return 0;
	
}

int cgame_colission_rectangle(int x,int y,int width,int height,int a,int b,int c,int d,int view){
	
	// LOGICAL RULES
	if(width<=0)width=1;
	if(height<=0)height=1;
	
	// RECTANGLE DRAWING	
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
			
			if(view==1)gotoxy(x+i,y+j),printf("█");
		}
	}
	
	// (a,b) == (c,d) TRUE
	// (a,b) != (c,d) FALSE

	if(a==c && b==d)return 1;
	
	if(a!=c || b!=d)return 0;
	
}

int cgame_colission_squad(int x,int y,int area,int a,int b,int c,int d,int view){

	// LOGICAL RULES
	if(area<=0 || area<=1 )area=2;

	// SQUARE DRAWING
	for(int i=0;i<area;i++){
		for(int j=0;j<area-1;j++){
			
			if(view==1)gotoxy(x+i,y+j),printf("█");
			
		}
	}
	
	//CHECK COLLISION
	if(a==c && b==d)return 1;
	
	if(a!=c || b!=d)return 0;
	
}

int cgame_numrandom(int a,int b){
	 
	//RANDOM NUMBERS
	b=b+1;
	return a + rand() % (b - a);
	
}
