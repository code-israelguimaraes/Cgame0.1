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
 * 1-SCREEN
 * 2-PIXEL
 * 3-RECTANGLE
 * 4-SQUARE
 * 
 * 1-SCREEN
 * DRAW A SQUARE SIMULATING THE BOUNDARY OF A SCREEN
 * 
 * 2-PIXEL
 * DRAW PIXEL ON SCREEN
 * 
 * 3-RECTANGLE
 * DRAW RECTANGLE ON SCREEN
 * 
 * 4-SQUARE
 * DRAW SQUARE ON SCREEN
 *  
 * */

void cgame_pixel(int x,int y,int color){
	
	// CORES
	cgame_color(color);
	
	// DESENHAR PIXEL
	gotoxy(x,y),printf("█");
	
}

void cgame_rectangle(int x,int y,int width,int height,int color){
	
	// COLOR
	cgame_color(color);
	
	// LOGICAL RULES
	if(width<=0)width=1;
	if(height<=0)height=1;
	
	// RECTANGLE DRAWING
			
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
			
			gotoxy(x+i,y+j),printf("█");
		}
	}
	
	
}

void cgame_square(int x,int y,int area,int color){
	
	// COLOR
	cgame_color(color);
	
	// LOGICAL RULES
	if(area<=0 || area<=1 )area=2;
	
	// SQUARE DRAWING	
					
	for(int i=0;i<area;i++){
		for(int j=0;j<area-1;j++){
			
			gotoxy(x+i,y+j),printf("█");
		}
	}
	
	

}
