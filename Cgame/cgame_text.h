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
 * FUNCTIONS 3
 * 
 * 1-TEXT
 * 2-STRCOUT
 * 3-TEXTCOLOR
 * 
 * 1-TEXT
 * YOU CAN WRITE TEXT ON THE SCREEN USING THE TEXT FUNCTION, IT WILL RENDER LETTERS A-Z
 * 
 * 2-STRCOUT
 * YOU CAN CALL THE FUNCTION TO DISPLAY NUMBERS FROM 0-1000 ON THE SCREEN IN TEXT FORMAT
 * 
 * 3-TEXTCOLOR
 * PAINT A TEXT THAT IS BELOW THIS FUNCTION
 *  
 * */

void n0(int x,int y){

	gotoxy(x+1,y+0),printf("████");
	gotoxy(x+0,y+1),printf("█");
	gotoxy(x+5,y+1),printf("█");
	
	gotoxy(x+0,y+2),printf("█");
	gotoxy(x+5,y+2),printf("█");
	
	gotoxy(x+0,y+3),printf("█");
	gotoxy(x+5,y+3),printf("█");
	
	gotoxy(x+1,y+4),printf("████");	
	
}

void n1(int x,int y){

	gotoxy(x+1,y+0),printf("████");
	gotoxy(x+3,y+1),printf("██");
	gotoxy(x+3,y+2),printf("██");
	gotoxy(x+3,y+3),printf("██");
	gotoxy(x+1,y+4),printf("██████");	
	
}

void n2(int x,int y){

	gotoxy(x+1,y+0),printf("████");
	gotoxy(x+3,y+1),printf("██");
	gotoxy(x+1,y+2),printf("████");
	gotoxy(x+1,y+3),printf("██");	
	gotoxy(x+1,y+4),printf("████");	
	
}

void n3(int x,int y){

	gotoxy(x+1,y+0),printf("████");
	gotoxy(x+3,y+1),printf("██");
	gotoxy(x+1,y+2),printf("████");
	gotoxy(x+3,y+3),printf("██");	
	gotoxy(x+1,y+4),printf("████");	
	
}

void n4(int x,int y){

	gotoxy(x+1,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x+1,y+2),printf("████");
	gotoxy(x+3,y+3),printf("██");	
	gotoxy(x+3,y+4),printf("██");	
	
}

void n5(int x,int y){

	gotoxy(x+1,y+0),printf("████");
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+1,y+2),printf("████");
	gotoxy(x+3,y+3),printf("██");	
	gotoxy(x+1,y+4),printf("████");	
	
}

void n6(int x,int y){

	gotoxy(x+1,y+0),printf("█████");
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+1,y+2),printf("█████");
	
	gotoxy(x+1,y+3),printf("█");	
	gotoxy(x+5,y+3),printf("█");	
	
	gotoxy(x+1,y+4),printf("█████");	
	
}

void n7(int x,int y){

	gotoxy(x+1,y+0),printf("████");
	gotoxy(x+4,y+1),printf("█");
	gotoxy(x+3,y+2),printf("███");
	gotoxy(x+4,y+3),printf("█");	
	gotoxy(x+4,y+4),printf("█");	
	
}

void n8(int x,int y){

	gotoxy(x+1,y+0),printf("█████");
	
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+5,y+1),printf("█");
	
	gotoxy(x+1,y+2),printf("█████");
	
	gotoxy(x+1,y+3),printf("█");	
	gotoxy(x+5,y+3),printf("█");	
	
	gotoxy(x+1,y+4),printf("█████");	
	
}

void n9(int x,int y){

	gotoxy(x+1,y+0),printf("█████");
	
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+5,y+1),printf("█");
	
	gotoxy(x+1,y+2),printf("█████");
	gotoxy(x+5,y+3),printf("█");	
	gotoxy(x+1,y+4),printf("█████");	
	
}


//----------------------------------------------------------------------

void letter_a(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("██████");
	
	gotoxy(x+0+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+5+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("██████");
	
	gotoxy(x+0+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+5+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+0+shadow_x,y+4+shadow_y),printf("█");	
	gotoxy(x+5+shadow_x,y+4+shadow_y),printf("█");

	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("██████");
	
	gotoxy(x+0,y+1),printf("█");
	gotoxy(x+5,y+1),printf("█");
	
	gotoxy(x,y+2),printf("██████");
	
	gotoxy(x+0,y+3),printf("█");	
	gotoxy(x+5,y+3),printf("█");	
	
	gotoxy(x+0,y+4),printf("█");	
	gotoxy(x+5,y+4),printf("█");	
		
}

void letter_b(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	
	gotoxy(x+0+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+5+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+shadow_x+3,y+2+shadow_y),printf("███");
	
	gotoxy(x+0+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+5+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█████");	
	
	//COLOR
	cgame_color(color);

	gotoxy(x,y+0),printf("█████");
	
	gotoxy(x+0,y+1),printf("█");
	gotoxy(x+5,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+3,y+2),printf("███");
	
	gotoxy(x+0,y+3),printf("█");	
	gotoxy(x+5,y+3),printf("█");	
	
	gotoxy(x,y+4),printf("█████");	
	
	
}

void letter_c(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+1+shadow_x,y+0+shadow_y),printf("████");
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+1+shadow_x,y+4+shadow_y),printf("████");	

	//COLOR
	cgame_color(color);

	gotoxy(x+1,y+0),printf("████");
	gotoxy(x,y+1),printf("█");
	gotoxy(x,y+2),printf("█");
	gotoxy(x,y+3),printf("█");	
	gotoxy(x+1,y+4),printf("████");	
	
}

void letter_d(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("████");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("████");	
	
	//COLOR
	cgame_color(color);

	gotoxy(x,y+0),printf("████");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x,y+3),printf("█");
	gotoxy(x+4,y+3),printf("█");
	
	gotoxy(x,y+4),printf("████");	
	
}

void letter_e(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█████");
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█████");	

	//COLOR
	cgame_color(color);

	gotoxy(x,y+0),printf("█████");
	gotoxy(x,y+1),printf("█");
	gotoxy(x,y+2),printf("█████");
	gotoxy(x,y+3),printf("█");	
	gotoxy(x,y+4),printf("█████");	
	
}

void letter_f(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█████");
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");	

	//LETRA
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█████");
	gotoxy(x,y+1),printf("█");
	gotoxy(x,y+2),printf("█████");
	gotoxy(x,y+3),printf("█");	
	gotoxy(x,y+4),printf("█");	
	
}

void letter_g(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("███");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█████");	
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█████");
	gotoxy(x,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+2,y+2),printf("███");
	
	gotoxy(x,y+3),printf("█");	
	gotoxy(x+4,y+3),printf("█");	
	
	gotoxy(x,y+4),printf("█████");
	
}

void letter_h(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█████");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+4+shadow_y),printf("█");
	

	//COLOR
	cgame_color(color);

	gotoxy(x,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█████");
	
	gotoxy(x,y+3),printf("█");
	gotoxy(x+4,y+3),printf("█");
	
	gotoxy(x,y+4),printf("█");
	gotoxy(x+4,y+4),printf("█");
	
}

void letter_i(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+1+shadow_x,y+1+shadow_y),printf("███");
	gotoxy(x+1+shadow_x,y+2+shadow_y),printf("███");
	gotoxy(x+1+shadow_x,y+3+shadow_y),printf("███");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█████");	

	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█████");
	gotoxy(x+1,y+1),printf("███");
	gotoxy(x+1,y+2),printf("███");
	gotoxy(x+1,y+3),printf("███");	
	gotoxy(x,y+4),printf("█████");	
	
}

void letter_j(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+2+shadow_x,y+1+shadow_y),printf("██");
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("██");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+2+shadow_x,y+3+shadow_y),printf("██");	
	
	gotoxy(x+1+shadow_x,y+4+shadow_y),printf("███");	


	//COLOR
	cgame_color(color);

	gotoxy(x,y+0),printf("█████");
	gotoxy(x+2,y+1),printf("██");
	gotoxy(x+2,y+2),printf("██");
	
	gotoxy(x,y+3),printf("█");	
	gotoxy(x+2,y+3),printf("██");	
	
	gotoxy(x+1,y+4),printf("███");	
	
}

void letter_k(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+shadow_x,y+0+shadow_y),printf("██");
	gotoxy(x+3+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("███");
	gotoxy(x+shadow_x,y+2+shadow_y),printf("██");
	gotoxy(x+shadow_x,y+3+shadow_y),printf("███");	
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("██");	
	gotoxy(x+3+shadow_x,y+4+shadow_y),printf("█");	

	//COLOR
	cgame_color(color);

	gotoxy(x,y+0),printf("██");
	gotoxy(x+3,y+0),printf("█");
	
	gotoxy(x,y+1),printf("███");
	gotoxy(x,y+2),printf("██");
	gotoxy(x,y+3),printf("███");	
	
	gotoxy(x,y+4),printf("██");	
	gotoxy(x+3,y+4),printf("█");	
	
}

void letter_l(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+shadow_x,y+0+shadow_y),printf("██");
	gotoxy(x+shadow_x,y+1+shadow_y),printf("██");
	gotoxy(x+shadow_x,y+2+shadow_y),printf("██");
	gotoxy(x+shadow_x,y+3+shadow_y),printf("██");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("████");	
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("██");
	gotoxy(x,y+1),printf("██");
	gotoxy(x,y+2),printf("██");
	gotoxy(x,y+3),printf("██");	
	gotoxy(x,y+4),printf("████");	
	
}

void letter_m(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+shadow_x,y+0+shadow_y),printf("██");
	gotoxy(x+3+shadow_x,y+0+shadow_y),printf("██");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");	
	gotoxy(x+4+shadow_x,y+4+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("██");
	gotoxy(x+3,y+0),printf("██");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+2,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+2,y+2),printf("█");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x,y+3),printf("█");	
	gotoxy(x+4,y+3),printf("█");	
	
	gotoxy(x,y+4),printf("█");	
	gotoxy(x+4,y+4),printf("█");
	
}

void letter_n(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("██");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+3+shadow_x,y+3+shadow_y),printf("██");	
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");	
	gotoxy(x+4+shadow_x,y+4+shadow_y),printf("█");

	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x,y+1),printf("██");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+2,y+2),printf("█");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x,y+3),printf("█");	
	gotoxy(x+3,y+3),printf("██");	
	
	gotoxy(x,y+4),printf("█");	
	gotoxy(x+4,y+4),printf("█");	
	
}

void letter_o(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+1+shadow_x,y+0+shadow_y),printf("████");
	gotoxy(x+0+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+5+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+0+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+5+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+0+shadow_x,y+3+shadow_y),printf("█");
	gotoxy(x+5+shadow_x,y+3+shadow_y),printf("█");
	
	gotoxy(x+1+shadow_x,y+4+shadow_y),printf("████");
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x+1,y+0),printf("████");
	gotoxy(x+0,y+1),printf("█");
	gotoxy(x+5,y+1),printf("█");
	
	gotoxy(x+0,y+2),printf("█");
	gotoxy(x+5,y+2),printf("█");
	
	gotoxy(x+0,y+3),printf("█");
	gotoxy(x+5,y+3),printf("█");
	
	gotoxy(x+1,y+4),printf("████");	
	
}

void letter_p(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("████");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("████");
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");	
	
	//COLOR
	cgame_color(color);

	gotoxy(x,y+0),printf("████");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("████");
	gotoxy(x,y+3),printf("█");	
	gotoxy(x,y+4),printf("█");
	
}

void letter_q(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+1+shadow_x,y+0+shadow_y),printf("███");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("██");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("████");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");	
	

	//COLOR
	cgame_color(color);
	
	gotoxy(x+1,y+0),printf("███");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("██");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x,y+3),printf("████");	
	gotoxy(x,y+4),printf("█");	
	
}

void letter_r(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+shadow_x,y+0+shadow_y),printf("████");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█████");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+3+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");	
	gotoxy(x+4+shadow_x,y+4+shadow_y),printf("█");	
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("████");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█████");
	
	gotoxy(x,y+3),printf("█");	
	gotoxy(x+3,y+3),printf("█");	
	
	gotoxy(x,y+4),printf("█");	
	gotoxy(x+4,y+4),printf("█");
	
}

void letter_s(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█████");
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█████");	

	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█████");
	gotoxy(x,y+1),printf("█");
	gotoxy(x,y+2),printf("█████");
	gotoxy(x+4,y+3),printf("█");	
	gotoxy(x,y+4),printf("█████");	

	
}

void letter_t(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){
	
	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+2+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+2+shadow_x,y+4+shadow_y),printf("█");	
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█████");
	gotoxy(x+2,y+1),printf("█");
	gotoxy(x+2,y+2),printf("█");
	gotoxy(x+2,y+3),printf("█");	
	gotoxy(x+2,y+4),printf("█");
	
}

void letter_u(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");
	
	gotoxy(x+1+shadow_x,y+4+shadow_y),printf("███");	
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x,y+3),printf("█");
	gotoxy(x+4,y+3),printf("█");
	
	gotoxy(x+1,y+4),printf("███");	
	
}

void letter_v(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+1+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+3+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+2+shadow_x,y+4+shadow_y),printf("█");	
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x+1,y+3),printf("█");	
	gotoxy(x+3,y+3),printf("█");	
	
	gotoxy(x+2,y+4),printf("█");
	
	
}

void letter_w(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+2+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+1+shadow_x,y+4+shadow_y),printf("█");	
	gotoxy(x+3+shadow_x,y+4+shadow_y),printf("█");	
	
	//COLOR
	cgame_color(color);
	
	gotoxy(x,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x,y+1),printf("█");
	gotoxy(x+4,y+1),printf("█");
	
	gotoxy(x,y+2),printf("█");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x,y+3),printf("█");	
	gotoxy(x+2,y+3),printf("█");	
	gotoxy(x+4,y+3),printf("█");	
	
	
	gotoxy(x+1,y+4),printf("█");	
	gotoxy(x+3,y+4),printf("█");	
	
}

void letter_x(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+1+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+3+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+1+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+3+shadow_x,y+3+shadow_y),printf("█");	
	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█");	
	gotoxy(x+4+shadow_x,y+4+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+3,y+1),printf("█");
	
	gotoxy(x+2,y+2),printf("█");
	
	gotoxy(x+1,y+3),printf("█");	
	gotoxy(x+3,y+3),printf("█");	
	
	gotoxy(x,y+4),printf("█");	
	gotoxy(x+4,y+4),printf("█");
	
}

void letter_y(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	
	gotoxy(x+1+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+3+shadow_x,y+1+shadow_y),printf("█");
	
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+2+shadow_x,y+4+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);		
	
	gotoxy(x,y+0),printf("█");
	gotoxy(x+4,y+0),printf("█");
	
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+3,y+1),printf("█");
	
	gotoxy(x+2,y+2),printf("█");
	gotoxy(x+2,y+3),printf("█");	
	gotoxy(x+2,y+4),printf("█");
	
}

void letter_z(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+shadow_x,y+0+shadow_y),printf("█████");
	gotoxy(x+4+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+1+shadow_x,y+2+shadow_y),printf("███");
	gotoxy(x+shadow_x,y+3+shadow_y),printf("█");	
	gotoxy(x+shadow_x,y+4+shadow_y),printf("█████");	

	//COLOR
	cgame_color(color);	
	
	gotoxy(x,y+0),printf("█████");
	gotoxy(x+4,y+1),printf("█");
	gotoxy(x+1,y+2),printf("███");
	gotoxy(x,y+3),printf("█");	
	gotoxy(x,y+4),printf("█████");	
	
}

//----------------------------------------------------------------------

// SPECIAL CHARACTERS

void letter_dot(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){
	
	// .
	
	//SHADOW
	cgame_color(shadow_color);
	
	gotoxy(x+0+shadow_x,y+4+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+0,y+4),printf("█");
		
}

void letter_twodot(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	// :

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+0+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+0+shadow_x,y+2+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+0,y+1),printf("█");
	gotoxy(x+0,y+3),printf("█");
		
}

void letter_interrogation(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	// ?
	
	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+2+shadow_x,y+1+shadow_y),printf("██");
	
	gotoxy(x+1+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+2+shadow_y),printf("█");
	
	gotoxy(x+4+shadow_x,y+3+shadow_y),printf("█");
	gotoxy(x+3+shadow_x,y+4+shadow_y),printf("█");
	gotoxy(x+3+shadow_x,y+6+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+2,y+1),printf("██");
	
	gotoxy(x+1,y+2),printf("█");
	gotoxy(x+4,y+2),printf("█");
	
	gotoxy(x+4,y+3),printf("█");
	gotoxy(x+3,y+4),printf("█");
	gotoxy(x+3,y+6),printf("█");
		
}

void letter_more(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	// +
	
	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+1+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+1+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+1+shadow_x,y+3+shadow_y),printf("█");
	
	gotoxy(x+0+shadow_x,y+2+shadow_y),printf("███");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+1,y+2),printf("█");
	gotoxy(x+1,y+3),printf("█");
	
	gotoxy(x+0,y+2),printf("███");
		
}

void letter_less(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	// -

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+0+shadow_x,y+0+shadow_y),printf("███");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+0,y+0),printf("███");
		
}

void letter_division(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	// /
	
	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+2+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+0+shadow_x,y+2+shadow_y),printf("█████");
	gotoxy(x+2+shadow_x,y+4+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+2,y+0),printf("█");
	gotoxy(x+0,y+2),printf("█████");
	gotoxy(x+2,y+4),printf("█");
		
}

void letter_multiplication(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	// *
	
	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+0+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+1+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+2+shadow_x,y+2+shadow_y),printf("█");
	gotoxy(x+3+shadow_x,y+3+shadow_y),printf("█");
	gotoxy(x+4+shadow_x,y+4+shadow_y),printf("█");
	
	gotoxy(x+4+shadow_x,y+0+shadow_y),printf("█");
	gotoxy(x+3+shadow_x,y+1+shadow_y),printf("█");
	gotoxy(x+1+shadow_x,y+3+shadow_y),printf("█");
	gotoxy(x+0+shadow_x,y+4+shadow_y),printf("█");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+0,y+0),printf("█");
	gotoxy(x+1,y+1),printf("█");
	gotoxy(x+2,y+2),printf("█");
	gotoxy(x+3,y+3),printf("█");
	gotoxy(x+4,y+4),printf("█");
	
	gotoxy(x+4,y+0),printf("█");
	gotoxy(x+3,y+1),printf("█");
	gotoxy(x+1,y+3),printf("█");
	gotoxy(x+0,y+4),printf("█");
	
}

void letter_equal(int color,int x,int y,int shadow_color,int shadow_x,int shadow_y){

	// = 

	//SHADOW
	cgame_color(shadow_color);

	gotoxy(x+0+shadow_x,y+0+shadow_y),printf("███");
	gotoxy(x+0+shadow_x,y+2+shadow_y),printf("███");
	
	//COLOR
	cgame_color(color);	
	
	gotoxy(x+0,y+0),printf("███");
	gotoxy(x+0,y+2),printf("███");
	
}

//----------------------------------------------------------------------

void cgame_strcont(int n,int x,int y,int espaco,int color){

	// --> FUTURE: ADD SHADOWS TO NUMBERS

	cgame_color(color);

	// TEXT-BASED COUNTER
	
	// 0 ate 9
	
	if(n==0)n0(x,y);
	if(n==1)n1(x,y);
	if(n==2)n2(x,y);
	if(n==3)n3(x,y);
	if(n==4)n4(x,y);
	if(n==5)n5(x,y);
	if(n==6)n6(x,y);
	if(n==7)n7(x,y);
	if(n==8)n8(x,y);
	if(n==9)n9(x,y);
	
	// 10 ate 20
	
	if(n==10)n1(x,y),n0(x+espaco,y);
	if(n==11)n1(x,y),n1(x+espaco,y);
	if(n==12)n1(x,y),n2(x+espaco,y);
	if(n==13)n1(x,y),n3(x+espaco,y);
	if(n==14)n1(x,y),n4(x+espaco,y);
	if(n==15)n1(x,y),n5(x+espaco,y);
	if(n==16)n1(x,y),n6(x+espaco,y);
	if(n==17)n1(x,y),n7(x+espaco,y);
	if(n==18)n1(x,y),n8(x+espaco,y);
	if(n==19)n1(x,y),n9(x+espaco,y);
	if(n==20)n2(x,y),n0(x+espaco,y);
	
	//21 ate 30
	
	if(n==21)n2(x,y),n1(x+espaco,y);
	if(n==22)n2(x,y),n2(x+espaco,y);
	if(n==23)n2(x,y),n3(x+espaco,y);
	if(n==24)n2(x,y),n4(x+espaco,y);
	if(n==25)n2(x,y),n5(x+espaco,y);
	if(n==26)n2(x,y),n6(x+espaco,y);
	if(n==27)n2(x,y),n7(x+espaco,y);
	if(n==28)n2(x,y),n8(x+espaco,y);
	if(n==29)n2(x,y),n9(x+espaco,y);
	if(n==30)n3(x,y),n0(x+espaco,y);
	
	//31 ate 40
	
	if(n==31)n3(x,y),n1(x+espaco,y);
	if(n==32)n3(x,y),n2(x+espaco,y);
	if(n==33)n3(x,y),n3(x+espaco,y);
	if(n==34)n3(x,y),n4(x+espaco,y);
	if(n==35)n3(x,y),n5(x+espaco,y);
	if(n==36)n3(x,y),n6(x+espaco,y);
	if(n==37)n3(x,y),n7(x+espaco,y);
	if(n==38)n3(x,y),n8(x+espaco,y);
	if(n==39)n3(x,y),n9(x+espaco,y);
	if(n==40)n4(x,y),n0(x+espaco,y);

	//41 ate 50
	
	if(n==41)n4(x,y),n1(x+espaco,y);
	if(n==42)n4(x,y),n2(x+espaco,y);
	if(n==43)n4(x,y),n3(x+espaco,y);
	if(n==44)n4(x,y),n4(x+espaco,y);
	if(n==45)n4(x,y),n5(x+espaco,y);
	if(n==46)n4(x,y),n6(x+espaco,y);
	if(n==47)n4(x,y),n7(x+espaco,y);
	if(n==48)n4(x,y),n8(x+espaco,y);
	if(n==49)n4(x,y),n9(x+espaco,y);
	if(n==50)n5(x,y),n0(x+espaco,y);

	//51 ate 60
	
	if(n==51)n5(x,y),n1(x+espaco,y);
	if(n==52)n5(x,y),n2(x+espaco,y);
	if(n==53)n5(x,y),n3(x+espaco,y);
	if(n==54)n5(x,y),n4(x+espaco,y);
	if(n==55)n5(x,y),n5(x+espaco,y);
	if(n==56)n5(x,y),n6(x+espaco,y);
	if(n==57)n5(x,y),n7(x+espaco,y);
	if(n==58)n5(x,y),n8(x+espaco,y);
	if(n==59)n5(x,y),n9(x+espaco,y);
	if(n==60)n6(x,y),n0(x+espaco,y);
	
	//61 ate 70
	
	if(n==61)n6(x,y),n1(x+espaco,y);
	if(n==62)n6(x,y),n2(x+espaco,y);
	if(n==63)n6(x,y),n3(x+espaco,y);
	if(n==64)n6(x,y),n4(x+espaco,y);
	if(n==65)n6(x,y),n5(x+espaco,y);
	if(n==66)n6(x,y),n6(x+espaco,y);
	if(n==67)n6(x,y),n7(x+espaco,y);
	if(n==68)n6(x,y),n8(x+espaco,y);
	if(n==69)n6(x,y),n9(x+espaco,y);
	if(n==70)n7(x,y),n0(x+espaco,y);
	
	//71 ate 80
	
	if(n==71)n7(x,y),n1(x+espaco,y);
	if(n==72)n7(x,y),n2(x+espaco,y);
	if(n==73)n7(x,y),n3(x+espaco,y);
	if(n==74)n7(x,y),n4(x+espaco,y);
	if(n==75)n7(x,y),n5(x+espaco,y);
	if(n==76)n7(x,y),n6(x+espaco,y);
	if(n==77)n7(x,y),n7(x+espaco,y);
	if(n==78)n7(x,y),n8(x+espaco,y);
	if(n==79)n7(x,y),n9(x+espaco,y);
	if(n==80)n8(x,y),n0(x+espaco,y);
	
	//81 ate 90
	
	if(n==81)n8(x,y),n1(x+espaco,y);
	if(n==82)n8(x,y),n2(x+espaco,y);
	if(n==83)n8(x,y),n3(x+espaco,y);
	if(n==84)n8(x,y),n4(x+espaco,y);
	if(n==85)n8(x,y),n5(x+espaco,y);
	if(n==86)n8(x,y),n6(x+espaco,y);
	if(n==87)n8(x,y),n7(x+espaco,y);
	if(n==88)n8(x,y),n8(x+espaco,y);
	if(n==89)n8(x,y),n9(x+espaco,y);
	if(n==90)n9(x,y),n0(x+espaco,y);
	
	//91 ate 100
	
	if(n==91)n9(x,y),n1(x+espaco,y);
	if(n==92)n9(x,y),n2(x+espaco,y);
	if(n==93)n9(x,y),n3(x+espaco,y);
	if(n==94)n9(x,y),n4(x+espaco,y);
	if(n==95)n9(x,y),n5(x+espaco,y);
	if(n==96)n9(x,y),n6(x+espaco,y);
	if(n==97)n9(x,y),n7(x+espaco,y);
	if(n==98)n9(x,y),n8(x+espaco,y);
	if(n==99)n9(x,y),n9(x+espaco,y);
	if(n==100)n1(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	//101 ate 110
	
	if(n==101)n1(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==102)n1(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==103)n1(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==104)n1(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==105)n1(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==106)n1(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==107)n1(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==108)n1(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==109)n1(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==110)n1(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	//111 ate 120
	
	if(n==111)n1(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==112)n1(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==113)n1(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==114)n1(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==115)n1(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==116)n1(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==117)n1(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==118)n1(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==119)n1(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==120)n1(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	//121 ate 130
	
	if(n==121)n1(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==122)n1(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==123)n1(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==124)n1(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==125)n1(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==126)n1(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==127)n1(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==128)n1(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==129)n1(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==130)n1(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	//131 ate 140
	
	if(n==131)n1(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==132)n1(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==133)n1(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==134)n1(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==135)n1(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==136)n1(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==137)n1(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==138)n1(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==139)n1(x,y),n3(x+espaco,y),n9(x+espaco*2,y);
	if(n==140)n1(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	//141 ate 150
	
	if(n==141)n1(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==142)n1(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==143)n1(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==144)n1(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==145)n1(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==146)n1(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==147)n1(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==148)n1(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==149)n1(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==150)n1(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	//151 ate 160
	
	if(n==151)n1(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==152)n1(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==153)n1(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==154)n1(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==155)n1(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==156)n1(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==157)n1(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==158)n1(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==159)n1(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==160)n1(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	//161 ate 170
	
	if(n==161)n1(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==162)n1(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==163)n1(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==164)n1(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==165)n1(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==166)n1(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==167)n1(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==168)n1(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==169)n1(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==170)n1(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	//171 ate 180
	
	if(n==171)n1(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==172)n1(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==173)n1(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==174)n1(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==175)n1(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==176)n1(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==177)n1(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==178)n1(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==179)n1(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==180)n1(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	//181 ate 190
	
	if(n==181)n1(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==182)n1(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==183)n1(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==184)n1(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==185)n1(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==186)n1(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==187)n1(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==188)n1(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==189)n1(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==190)n1(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	//191 ate 200
	
	if(n==191)n1(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==192)n1(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==193)n1(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==194)n1(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==195)n1(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==196)n1(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==197)n1(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==198)n1(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==199)n1(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==200)n2(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	//201 ate 210
	
	if(n==201)n2(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==202)n2(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==203)n2(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==204)n2(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==205)n2(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==206)n2(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==207)n2(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==208)n2(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==209)n2(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==210)n2(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	//211 ate 220
	
	if(n==211)n2(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==212)n2(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==213)n2(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==214)n2(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==215)n2(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==216)n2(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==217)n2(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==218)n2(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==219)n2(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==220)n2(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	//221 ate 230
	
	if(n==221)n2(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==222)n2(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==223)n2(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==224)n2(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==225)n2(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==226)n2(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==227)n2(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==228)n2(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==229)n2(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==230)n2(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	//231 ate 240
	
	if(n==231)n2(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==232)n2(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==233)n2(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==234)n2(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==235)n2(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==236)n2(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==237)n2(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==238)n2(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==239)n2(x,y),n3(x+espaco,y),n9(x+espaco*2,y);
	if(n==240)n2(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	//241 ate 250
	
	if(n==241)n2(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==242)n2(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==243)n2(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==244)n2(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==245)n2(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==246)n2(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==247)n2(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==248)n2(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==249)n2(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==250)n2(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	//251 ate 260
	
	if(n==251)n2(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==252)n2(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==253)n2(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==254)n2(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==255)n2(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==256)n2(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==257)n2(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==258)n2(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==259)n2(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==260)n2(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	//261 ate 270

	if(n==261)n2(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==262)n2(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==263)n2(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==264)n2(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==265)n2(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==266)n2(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==267)n2(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==268)n2(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==269)n2(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==270)n2(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	//271 ate 280
	
	if(n==271)n2(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==272)n2(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==273)n2(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==274)n2(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==275)n2(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==276)n2(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==277)n2(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==278)n2(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==279)n2(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==280)n2(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	//281 ate 290
	
	if(n==281)n2(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==282)n2(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==283)n2(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==284)n2(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==285)n2(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==286)n2(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==287)n2(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==288)n2(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==289)n2(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==290)n2(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	//291 ate 300
	
	if(n==291)n2(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==292)n2(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==293)n2(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==294)n2(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==295)n2(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==296)n2(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==297)n2(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==298)n2(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==299)n2(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==300)n3(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	// 301 ate 310
	
	if(n==301)n3(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==302)n3(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==303)n3(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==304)n3(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==305)n3(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==306)n3(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==307)n3(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==308)n3(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==309)n3(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==310)n3(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	// 311 ate 320
	
	if(n==311)n3(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==312)n3(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==313)n3(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==314)n3(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==315)n3(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==316)n3(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==317)n3(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==318)n3(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==319)n3(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==320)n3(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	// 321 ate 330
	
	if(n==321)n3(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==322)n3(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==323)n3(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==324)n3(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==325)n3(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==326)n3(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==327)n3(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==328)n3(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==329)n3(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==330)n3(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	// 331 ate 340
	
	if(n==331)n3(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==332)n3(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==333)n3(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==334)n3(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==335)n3(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==336)n3(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==337)n3(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==338)n3(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==339)n3(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==340)n3(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	// 341 ate 350
	
	if(n==341)n3(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==342)n3(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==343)n3(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==344)n3(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==345)n3(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==346)n3(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==347)n3(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==348)n3(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==349)n3(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==350)n3(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	// 351 ate 360
	
	if(n==351)n3(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==352)n3(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==353)n3(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==354)n3(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==355)n3(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==356)n3(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==357)n3(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==358)n3(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==359)n3(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==360)n3(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	// 361 ate 370
	
	if(n==361)n3(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==362)n3(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==363)n3(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==364)n3(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==365)n3(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==366)n3(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==367)n3(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==368)n3(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==369)n3(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==370)n3(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	// 371 ate 380
	
	if(n==371)n3(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==372)n3(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==373)n3(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==374)n3(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==375)n3(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==376)n3(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==377)n3(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==378)n3(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==379)n3(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==380)n3(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	// 381 ate 390
	
	if(n==381)n3(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==382)n3(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==383)n3(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==384)n3(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==385)n3(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==386)n3(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==387)n3(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==388)n3(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==389)n3(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==390)n3(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	// 391 ate 400
	
	if(n==391)n3(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==392)n3(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==393)n3(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==394)n3(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==395)n3(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==396)n3(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==397)n3(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==398)n3(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==399)n3(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==400)n4(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	// 401 ate 410
	
	if(n==401)n4(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==402)n4(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==403)n4(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==404)n4(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==405)n4(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==406)n4(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==407)n4(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==408)n4(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==409)n4(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==410)n4(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	// 411 ate 420
	
	if(n==411)n4(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==412)n4(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==413)n4(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==414)n4(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==415)n4(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==416)n4(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==417)n4(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==418)n4(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==419)n4(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==420)n4(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	// 421 ate 430
	
	if(n==421)n4(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==422)n4(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==423)n4(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==424)n4(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==425)n4(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==426)n4(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==427)n4(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==428)n4(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==429)n4(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==430)n4(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	// 431 ate 440
	
	if(n==431)n4(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==432)n4(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==433)n4(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==434)n4(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==435)n4(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==436)n4(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==437)n4(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==438)n4(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==439)n4(x,y),n3(x+espaco,y),n9(x+espaco*2,y);
	if(n==440)n4(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	// 441 ate 450
	
	if(n==441)n4(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==442)n4(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==443)n4(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==444)n4(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==445)n4(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==446)n4(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==447)n4(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==448)n4(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==449)n4(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==450)n4(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	// 451 ate 460
	
	if(n==451)n4(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==452)n4(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==453)n4(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==454)n4(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==455)n4(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==456)n4(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==457)n4(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==458)n4(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==459)n4(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==460)n4(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	// 461 ate 470
	
	if(n==461)n4(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==462)n4(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==463)n4(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==464)n4(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==465)n4(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==466)n4(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==467)n4(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==468)n4(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==469)n4(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==470)n4(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	// 471 ate 480
	
	if(n==471)n4(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==472)n4(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==473)n4(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==474)n4(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==475)n4(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==476)n4(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==477)n4(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==478)n4(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==479)n4(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==480)n4(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	// 481 ate 490
	
	if(n==481)n4(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==482)n4(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==483)n4(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==484)n4(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==485)n4(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==486)n4(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==487)n4(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==488)n4(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==489)n4(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==490)n4(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	// 491 ate 500
	
	if(n==491)n4(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==492)n4(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==493)n4(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==494)n4(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==495)n4(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==496)n4(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==497)n4(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==498)n4(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==499)n4(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==500)n5(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	// 501 ate 510
	
	if(n==501)n5(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==502)n5(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==503)n5(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==504)n5(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==505)n5(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==506)n5(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==507)n5(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==508)n5(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==509)n5(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==510)n5(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	// 511 ate 520
	
	if(n==511)n5(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==512)n5(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==513)n5(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==514)n5(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==515)n5(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==516)n5(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==517)n5(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==518)n5(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==519)n5(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==520)n5(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	// 521 ate 530
	
	if(n==521)n5(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==522)n5(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==523)n5(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==524)n5(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==525)n5(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==526)n5(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==527)n5(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==528)n5(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==529)n5(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==530)n5(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	// 531 ate 540

	if(n==531)n5(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==532)n5(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==533)n5(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==534)n5(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==535)n5(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==536)n5(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==537)n5(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==538)n5(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==539)n5(x,y),n3(x+espaco,y),n9(x+espaco*2,y);
	if(n==540)n5(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	// 541 ate 550
	
	if(n==541)n5(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==542)n5(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==543)n5(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==544)n5(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==545)n5(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==546)n5(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==547)n5(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==548)n5(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==549)n5(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==550)n5(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	// 551 ate 560
	
	if(n==551)n5(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==552)n5(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==553)n5(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==554)n5(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==555)n5(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==556)n5(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==557)n5(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==558)n5(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==559)n5(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==560)n5(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	// 561 ate 570
	
	if(n==561)n5(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==562)n5(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==563)n5(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==564)n5(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==565)n5(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==566)n5(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==567)n5(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==568)n5(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==569)n5(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==570)n5(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	// 571 ate 580
	
	if(n==571)n5(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==572)n5(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==573)n5(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==574)n5(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==575)n5(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==576)n5(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==577)n5(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==578)n5(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==579)n5(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==580)n5(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	// 581 ate 590
	
	if(n==581)n5(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==582)n5(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==583)n5(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==584)n5(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==585)n5(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==586)n5(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==587)n5(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==588)n5(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==589)n5(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==590)n5(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	// 591 ate 600
	
	if(n==591)n5(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==592)n5(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==593)n5(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==594)n5(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==595)n5(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==596)n5(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==597)n5(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==598)n5(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==599)n5(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==600)n6(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	// 601 ate 610
	
	if(n==601)n6(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==602)n6(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==603)n6(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==604)n6(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==605)n6(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==606)n6(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==607)n6(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==608)n6(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==609)n6(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==610)n6(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	// 611 ate 620
	
	if(n==611)n6(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==612)n6(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==613)n6(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==614)n6(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==615)n6(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==616)n6(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==617)n6(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==618)n6(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==619)n6(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==620)n6(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	// 621 ate 630
	
	if(n==621)n6(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==622)n6(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==623)n6(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==624)n6(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==625)n6(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==626)n6(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==627)n6(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==628)n6(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==629)n6(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==630)n6(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	// 631 ate 640
	
	if(n==631)n6(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==632)n6(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==633)n6(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==634)n6(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==635)n6(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==636)n6(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==637)n6(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==638)n6(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==639)n6(x,y),n3(x+espaco,y),n9(x+espaco*2,y);
	if(n==640)n6(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	// 641 ate 650
	
	if(n==641)n6(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==642)n6(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==643)n6(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==644)n6(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==645)n6(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==646)n6(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==647)n6(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==648)n6(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==649)n6(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==650)n6(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	// 651 ate 660
	
	if(n==651)n6(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==652)n6(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==653)n6(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==654)n6(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==655)n6(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==656)n6(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==657)n6(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==658)n6(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==659)n6(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==660)n6(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	// 661 ate 670
	
	if(n==661)n6(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==662)n6(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==663)n6(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==664)n6(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==665)n6(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==666)n6(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==667)n6(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==668)n6(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==669)n6(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==670)n6(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	// 671 ate 680
	
	if(n==671)n6(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==672)n6(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==673)n6(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==674)n6(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==675)n6(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==676)n6(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==677)n6(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==678)n6(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==679)n6(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==680)n6(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	// 681 ate 690
	
	if(n==681)n6(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==682)n6(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==683)n6(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==684)n6(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==685)n6(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==686)n6(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==687)n6(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==688)n6(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==689)n6(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==690)n6(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	// 691 ate 700
	
	if(n==691)n6(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==692)n6(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==693)n6(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==694)n6(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==695)n6(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==696)n6(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==697)n6(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==698)n6(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==699)n6(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==700)n7(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	// 701 ate 710
	
	if(n==701)n7(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==702)n7(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==703)n7(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==704)n7(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==705)n7(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==706)n7(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==707)n7(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==708)n7(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==709)n7(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==710)n7(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	// 711 ate 720
	
	if(n==711)n7(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==712)n7(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==713)n7(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==714)n7(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==715)n7(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==716)n7(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==717)n7(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==718)n7(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==719)n7(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==720)n7(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	// 721 ate 730
	
	if(n==721)n7(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==722)n7(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==723)n7(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==724)n7(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==725)n7(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==726)n7(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==727)n7(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==728)n7(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==729)n7(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==730)n7(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	// 731 ate 740
	
	if(n==731)n7(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==732)n7(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==733)n7(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==734)n7(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==735)n7(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==736)n7(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==737)n7(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==738)n7(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==739)n7(x,y),n3(x+espaco,y),n9(x+espaco*2,y);
	if(n==740)n7(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	// 741 ate 750
	
	if(n==741)n7(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==742)n7(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==743)n7(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==744)n7(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==745)n7(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==746)n7(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==747)n7(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==748)n7(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==749)n7(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==750)n7(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	// 751 ate 760
	
	if(n==751)n7(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==752)n7(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==753)n7(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==754)n7(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==755)n7(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==756)n7(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==757)n7(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==758)n7(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==759)n7(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==760)n7(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	// 761 ate 770
	
	if(n==761)n7(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==762)n7(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==763)n7(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==764)n7(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==765)n7(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==766)n7(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==767)n7(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==768)n7(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==769)n7(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==770)n7(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	// 771 ate 780
	
	if(n==771)n7(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==772)n7(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==773)n7(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==774)n7(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==775)n7(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==776)n7(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==777)n7(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==778)n7(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==779)n7(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==780)n7(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	// 781 ate 790
	
	if(n==781)n7(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==782)n7(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==783)n7(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==784)n7(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==785)n7(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==786)n7(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==787)n7(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==788)n7(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==789)n7(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==790)n7(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	// 791 ate 800
	
	if(n==791)n7(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==792)n7(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==793)n7(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==794)n7(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==795)n7(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==796)n7(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==797)n7(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==798)n7(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==799)n7(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==800)n8(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	// 801 ate 810
	
	if(n==801)n8(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==802)n8(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==803)n8(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==804)n8(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==805)n8(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==806)n8(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==807)n8(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==808)n8(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==809)n8(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==810)n8(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	// 811 ate 820
	
	if(n==811)n8(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==812)n8(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==813)n8(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==814)n8(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==815)n8(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==816)n8(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==817)n8(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==818)n8(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==819)n8(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==820)n8(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	// 821 ate 830
	
	if(n==821)n8(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==822)n8(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==823)n8(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==824)n8(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==825)n8(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==826)n8(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==827)n8(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==828)n8(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==829)n8(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==830)n8(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	// 831 ate 840
	
	if(n==831)n8(x,y),n3(x+espaco,y),n1(x+espaco*2,y);
	if(n==832)n8(x,y),n3(x+espaco,y),n2(x+espaco*2,y);
	if(n==833)n8(x,y),n3(x+espaco,y),n3(x+espaco*2,y);
	if(n==834)n8(x,y),n3(x+espaco,y),n4(x+espaco*2,y);
	if(n==835)n8(x,y),n3(x+espaco,y),n5(x+espaco*2,y);
	if(n==836)n8(x,y),n3(x+espaco,y),n6(x+espaco*2,y);
	if(n==837)n8(x,y),n3(x+espaco,y),n7(x+espaco*2,y);
	if(n==838)n8(x,y),n3(x+espaco,y),n8(x+espaco*2,y);
	if(n==839)n8(x,y),n3(x+espaco,y),n9(x+espaco*2,y);
	if(n==840)n8(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	// 841 ate 850
	
	if(n==841)n8(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==842)n8(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==843)n8(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==844)n8(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==845)n8(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==846)n8(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==847)n8(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==848)n8(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==849)n8(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==850)n8(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	// 851 ate 860
	
	if(n==851)n8(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==852)n8(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==853)n8(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==854)n8(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==855)n8(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==856)n8(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==857)n8(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==858)n8(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==859)n8(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==860)n8(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	// 861 ate 870
	
	if(n==861)n8(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==862)n8(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==863)n8(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==864)n8(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==865)n8(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==866)n8(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==867)n8(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==868)n8(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==869)n8(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==870)n8(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	// 871 ate 880
	
	if(n==871)n8(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==872)n8(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==873)n8(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==874)n8(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==875)n8(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==876)n8(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==877)n8(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==878)n8(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==879)n8(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==880)n8(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	// 881 ate 890
	
	if(n==881)n8(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==882)n8(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==883)n8(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==884)n8(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==885)n8(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==886)n8(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==887)n8(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==888)n8(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==889)n8(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==890)n8(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	// 891 ate 900
	
	if(n==891)n8(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==892)n8(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==893)n8(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==894)n8(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==895)n8(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==896)n8(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==897)n8(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==898)n8(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==899)n8(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==900)n9(x,y),n0(x+espaco,y),n0(x+espaco*2,y);
	
	// 901 ate 910
	
	if(n==901)n9(x,y),n0(x+espaco,y),n1(x+espaco*2,y);
	if(n==902)n9(x,y),n0(x+espaco,y),n2(x+espaco*2,y);
	if(n==903)n9(x,y),n0(x+espaco,y),n3(x+espaco*2,y);
	if(n==904)n9(x,y),n0(x+espaco,y),n4(x+espaco*2,y);
	if(n==905)n9(x,y),n0(x+espaco,y),n5(x+espaco*2,y);
	if(n==906)n9(x,y),n0(x+espaco,y),n6(x+espaco*2,y);
	if(n==907)n9(x,y),n0(x+espaco,y),n7(x+espaco*2,y);
	if(n==908)n9(x,y),n0(x+espaco,y),n8(x+espaco*2,y);
	if(n==909)n9(x,y),n0(x+espaco,y),n9(x+espaco*2,y);
	if(n==910)n9(x,y),n1(x+espaco,y),n0(x+espaco*2,y);
	
	// 911 ate 920
	
	if(n==911)n9(x,y),n1(x+espaco,y),n1(x+espaco*2,y);
	if(n==912)n9(x,y),n1(x+espaco,y),n2(x+espaco*2,y);
	if(n==913)n9(x,y),n1(x+espaco,y),n3(x+espaco*2,y);
	if(n==914)n9(x,y),n1(x+espaco,y),n4(x+espaco*2,y);
	if(n==915)n9(x,y),n1(x+espaco,y),n5(x+espaco*2,y);
	if(n==916)n9(x,y),n1(x+espaco,y),n6(x+espaco*2,y);
	if(n==917)n9(x,y),n1(x+espaco,y),n7(x+espaco*2,y);
	if(n==918)n9(x,y),n1(x+espaco,y),n8(x+espaco*2,y);
	if(n==919)n9(x,y),n1(x+espaco,y),n9(x+espaco*2,y);
	if(n==920)n9(x,y),n2(x+espaco,y),n0(x+espaco*2,y);
	
	// 921 ate 930
	
	if(n==921)n9(x,y),n2(x+espaco,y),n1(x+espaco*2,y);
	if(n==922)n9(x,y),n2(x+espaco,y),n2(x+espaco*2,y);
	if(n==923)n9(x,y),n2(x+espaco,y),n3(x+espaco*2,y);
	if(n==924)n9(x,y),n2(x+espaco,y),n4(x+espaco*2,y);
	if(n==925)n9(x,y),n2(x+espaco,y),n5(x+espaco*2,y);
	if(n==926)n9(x,y),n2(x+espaco,y),n6(x+espaco*2,y);
	if(n==927)n9(x,y),n2(x+espaco,y),n7(x+espaco*2,y);
	if(n==928)n9(x,y),n2(x+espaco,y),n8(x+espaco*2,y);
	if(n==929)n9(x,y),n2(x+espaco,y),n9(x+espaco*2,y);
	if(n==930)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	
	// 931 ate 940
	
	if(n==931)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==932)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==933)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==934)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==935)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==936)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==937)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==938)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==939)n9(x,y),n3(x+espaco,y),n0(x+espaco*2,y);
	if(n==940)n9(x,y),n4(x+espaco,y),n0(x+espaco*2,y);
	
	// 941 ate 950
	
	if(n==941)n9(x,y),n4(x+espaco,y),n1(x+espaco*2,y);
	if(n==942)n9(x,y),n4(x+espaco,y),n2(x+espaco*2,y);
	if(n==943)n9(x,y),n4(x+espaco,y),n3(x+espaco*2,y);
	if(n==944)n9(x,y),n4(x+espaco,y),n4(x+espaco*2,y);
	if(n==945)n9(x,y),n4(x+espaco,y),n5(x+espaco*2,y);
	if(n==946)n9(x,y),n4(x+espaco,y),n6(x+espaco*2,y);
	if(n==947)n9(x,y),n4(x+espaco,y),n7(x+espaco*2,y);
	if(n==948)n9(x,y),n4(x+espaco,y),n8(x+espaco*2,y);
	if(n==949)n9(x,y),n4(x+espaco,y),n9(x+espaco*2,y);
	if(n==950)n9(x,y),n5(x+espaco,y),n0(x+espaco*2,y);
	
	// 951 ate 960
	
	if(n==951)n9(x,y),n5(x+espaco,y),n1(x+espaco*2,y);
	if(n==952)n9(x,y),n5(x+espaco,y),n2(x+espaco*2,y);
	if(n==953)n9(x,y),n5(x+espaco,y),n3(x+espaco*2,y);
	if(n==954)n9(x,y),n5(x+espaco,y),n4(x+espaco*2,y);
	if(n==955)n9(x,y),n5(x+espaco,y),n5(x+espaco*2,y);
	if(n==956)n9(x,y),n5(x+espaco,y),n6(x+espaco*2,y);
	if(n==957)n9(x,y),n5(x+espaco,y),n7(x+espaco*2,y);
	if(n==958)n9(x,y),n5(x+espaco,y),n8(x+espaco*2,y);
	if(n==959)n9(x,y),n5(x+espaco,y),n9(x+espaco*2,y);
	if(n==960)n9(x,y),n6(x+espaco,y),n0(x+espaco*2,y);
	
	// 961 ate 970
	
	if(n==961)n9(x,y),n6(x+espaco,y),n1(x+espaco*2,y);
	if(n==962)n9(x,y),n6(x+espaco,y),n2(x+espaco*2,y);
	if(n==963)n9(x,y),n6(x+espaco,y),n3(x+espaco*2,y);
	if(n==964)n9(x,y),n6(x+espaco,y),n4(x+espaco*2,y);
	if(n==965)n9(x,y),n6(x+espaco,y),n5(x+espaco*2,y);
	if(n==966)n9(x,y),n6(x+espaco,y),n6(x+espaco*2,y);
	if(n==967)n9(x,y),n6(x+espaco,y),n7(x+espaco*2,y);
	if(n==968)n9(x,y),n6(x+espaco,y),n8(x+espaco*2,y);
	if(n==969)n9(x,y),n6(x+espaco,y),n9(x+espaco*2,y);
	if(n==970)n9(x,y),n7(x+espaco,y),n0(x+espaco*2,y);
	
	// 971 ate 980
	
	if(n==971)n9(x,y),n7(x+espaco,y),n1(x+espaco*2,y);
	if(n==972)n9(x,y),n7(x+espaco,y),n2(x+espaco*2,y);
	if(n==973)n9(x,y),n7(x+espaco,y),n3(x+espaco*2,y);
	if(n==974)n9(x,y),n7(x+espaco,y),n4(x+espaco*2,y);
	if(n==975)n9(x,y),n7(x+espaco,y),n5(x+espaco*2,y);
	if(n==976)n9(x,y),n7(x+espaco,y),n6(x+espaco*2,y);
	if(n==977)n9(x,y),n7(x+espaco,y),n7(x+espaco*2,y);
	if(n==978)n9(x,y),n7(x+espaco,y),n8(x+espaco*2,y);
	if(n==979)n9(x,y),n7(x+espaco,y),n9(x+espaco*2,y);
	if(n==980)n9(x,y),n8(x+espaco,y),n0(x+espaco*2,y);
	
	// 981 ate 990
	
	if(n==981)n9(x,y),n8(x+espaco,y),n1(x+espaco*2,y);
	if(n==982)n9(x,y),n8(x+espaco,y),n2(x+espaco*2,y);
	if(n==983)n9(x,y),n8(x+espaco,y),n3(x+espaco*2,y);
	if(n==984)n9(x,y),n8(x+espaco,y),n4(x+espaco*2,y);
	if(n==985)n9(x,y),n8(x+espaco,y),n5(x+espaco*2,y);
	if(n==986)n9(x,y),n8(x+espaco,y),n6(x+espaco*2,y);
	if(n==987)n9(x,y),n8(x+espaco,y),n7(x+espaco*2,y);
	if(n==988)n9(x,y),n8(x+espaco,y),n8(x+espaco*2,y);
	if(n==989)n9(x,y),n8(x+espaco,y),n9(x+espaco*2,y);
	if(n==990)n9(x,y),n9(x+espaco,y),n0(x+espaco*2,y);
	
	// 991 ate 1000
	
	if(n==991)n9(x,y),n9(x+espaco,y),n1(x+espaco*2,y);
	if(n==992)n9(x,y),n9(x+espaco,y),n2(x+espaco*2,y);
	if(n==993)n9(x,y),n9(x+espaco,y),n3(x+espaco*2,y);
	if(n==994)n9(x,y),n9(x+espaco,y),n4(x+espaco*2,y);
	if(n==995)n9(x,y),n9(x+espaco,y),n5(x+espaco*2,y);
	if(n==996)n9(x,y),n9(x+espaco,y),n6(x+espaco*2,y);
	if(n==997)n9(x,y),n9(x+espaco,y),n7(x+espaco*2,y);
	if(n==998)n9(x,y),n9(x+espaco,y),n8(x+espaco*2,y);
	if(n==999)n9(x,y),n9(x+espaco,y),n9(x+espaco*2,y);
	if(n==1000)n1(x,y),n0(x+espaco,y),n0(x+espaco*2,y),n0(x+espaco*3,y);
	
}

void cgame_text(char text[],int size,int x,int y,int espaco,int color,int shadow_color,int shadow_x,int shadow_y){
				
	// TEXT LETTER COUNTER
	for(int i=0;i<size;i++){
				
		if(text[i]=='a')letter_a(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='b')letter_b(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='c')letter_c(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='d')letter_d(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='e')letter_e(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='f')letter_f(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='g')letter_g(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='h')letter_h(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='i')letter_i(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='j')letter_j(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='k')letter_k(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='l')letter_l(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='m')letter_m(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='n')letter_n(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='o')letter_o(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='p')letter_p(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='q')letter_q(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='r')letter_r(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='s')letter_s(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='t')letter_t(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='u')letter_u(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='v')letter_v(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='w')letter_w(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='x')letter_x(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='y')letter_y(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='z')letter_z(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		//SPECIAL CHARACTERS
		if(text[i]=='.')letter_dot(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]==':')letter_twodot(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='?')letter_interrogation(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='+')letter_more(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='-')letter_less(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='/')letter_division(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='*')letter_multiplication(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
		if(text[i]=='=')letter_equal(color,x+((1*i)*espaco),y,shadow_color,shadow_x,shadow_y);	
		
	}
	
	
	
	
}

void cgame_textcolor(int x,int y,char text[],int color,int background,int style){

	//TYPE FONT
	if(style==1)printf("\033[0m");
	if(style==2)printf("\033[1m");
	if(style==3)printf("\033[4m");

	//16 COLOR (FRONT)
	if(color==1)printf("\033[30m");
	if(color==2)printf("\033[31m");
	if(color==3)printf("\033[32m");
	if(color==4)printf("\033[33m");
	if(color==5)printf("\033[34m");
	if(color==6)printf("\033[35m");
	if(color==7)printf("\033[36m");
	if(color==8)printf("\033[37m");
	
	if(color==9)printf("\033[90m");
	if(color==10)printf("\033[91m");
	if(color==11)printf("\033[92m");
	if(color==12)printf("\033[93m");
	if(color==13)printf("\033[94m");
	if(color==14)printf("\033[95m");
	if(color==15)printf("\033[96m");
	if(color==16)printf("\033[97m");
	
	//16 COLOR (BACKGROUND)
	if(background==1)printf("\033[40m");
	if(background==2)printf("\033[41m");
	if(background==3)printf("\033[42m");
	if(background==4)printf("\033[43m");
	if(background==5)printf("\033[44m");
	if(background==6)printf("\033[45m");
	if(background==7)printf("\033[46m");
	if(background==8)printf("\033[47m");
	
	if(background==9)printf("\033[100m");
	if(background==10)printf("\033[101m");
	if(background==11)printf("\033[102m");
	if(background==12)printf("\033[103m");
	if(background==13)printf("\033[104m");
	if(background==14)printf("\033[105m");
	if(background==15)printf("\033[106m");
	if(background==16)printf("\033[107m");
	
	gotoxy(x,y),printf("%s",text);
	
}

