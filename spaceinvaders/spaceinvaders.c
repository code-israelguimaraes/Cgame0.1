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
 * */

// LIBRARIES CGAME 0.1

/*CHANGE YOUR PATH,TO ACESS CGAME FILE*
 * 
 * EXEMPLE:#include "/home/user/xxxx/xxxxx/xxxxx/cgame_in.h"
 * 					/home/israelguimaraes/C/Games/Cgame/cgame_in.h 
 *
 */
  
#include "/home/israelguimaraes/C/Games/Cgame/cgame_in.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_sys.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_color.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_graphics.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_physical.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_text.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_song.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_arduino.h"

// CGAME VARIABLES
char tecla;						// VARIABLE TO CAPTURE KEYBOARD
int start_game = 1;				// START GAME, BEING START = TRUE
int clocks = 0; 				// CLOCK VARIABLE FOR IN-GAME CONTROL			
int background = 0; 			// TERMINAL BACKGROUND COLOR (1 TO 16 COLORS)
int once=1;					    // LOOP VARIABLE ONLY ONCE, IF A FUNCTION IS REPEATED, IF NEEDED
int logic_controller = 0;       // GAME CONTROL VARIABLE
int stop=0;						// VARIABLE TO STOP GAME
int level=1;					// VARIABLE LEVEL
int score=0;					// SCORE GAME

/*MY GAME LIBRARY YOU CAN CREATE YOUR LIBRARIES AND PUT BELOW FOR ORGANIZATION
 * 
 * EXEMPLE:
 * 
 * #include ENEMY.H
 * #include PLAYER.H
 * #include FILE.H
 * 
 * */
 
#define LIMITECAMPO 20

#include "player.h"
#include "enemy.h"
#include "zerargame.h"

//----------------------------------------------------------------------

int main(){

	//MY WINDOW TITLE
	system("echo '\033]0;SPACE INVADERS \007'");
	
	cgame_fullscreen();			  //FULLSCREEN
	cgame_background(background); //BACKGROUND COLOR
	cgame_clear();				  //CLEAR SCREEN

	//OPEN JSX FILE OF JOYSTICK
	js_fd=open(JOYSTICK_DEV,O_RDONLY | O_NONBLOCK);
	while(start_game==1){

		//READ FILE JS
		read(js_fd,&js,sizeof(struct js_event));

		// TURN OFF TERMINAL FUNCTION CURSOR OFF
		cgame_curso(0);
		cgame_echo(0);
		//--------------------------------------------------------------
		
		// USE ARDUINO GET VARIABLE 
		//arduinoIO=cgame_arduinoinit("/dev/ttyUSB0");
		
		// ** YOUR CODE HERE BELOW **

		/*
		 * MELHORAR A ALEATORIEDADE DOS TIROS
		 * POR FILEIRA
		 * 
		 * */

		//ENEMY1
		if(ENEMY1_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy1(sprites,enemys_x+(ESPACO*0),enemys_y+0);
			
			//TIRO ENEMY
			if(ENEMY1_TIRO==0)ENEMY1_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM1);
			if(ENEMY1_DISPARA==ENEMYS_TIROFILA1)tiroenemy(ENEMY1_TIROX+(ESPACO*0)+2,ENEMY1_TIROY+7);
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY1_TIROX+(ESPACO*0)+2,ENEMY1_TIROY+7,0)==1)ENEMY1_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY1_X+i+(ESPACO*0),ENEMY1_Y+7,ENEMY1_X+i+(ESPACO*0),ENEMY1_Y+7,tiro_x,tiro_y,0)==1){
					explosion(ENEMY1_X-1+(ESPACO*0),ENEMY1_Y+3);
					ENEMY1_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY1_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY1_DISPARA==ENEMYS_TIROFILA1){
			
			if(ENEMY1_TIRO==0){
				ENEMY1_TIROX=ENEMY1_X;
				ENEMY1_TIROY=ENEMY1_Y;
				ENEMY1_TIRO=1;
			}
			
			if(ENEMY1_TIRO==1){
				if(clocks%2==0){
					ENEMY1_TIROY++;
				}
				if(ENEMY1_TIROY>18)ENEMY1_TIRO=0;	
			}
		}
		
		//--------------------------------------------------------------
		
		//LOGICA TIRO CONTINUAR COLISAO NAVE
		
		//ENEMY2
		if(ENEMY2_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy1(sprites,enemys_x+(ESPACO*1),enemys_y+0);
			
			//TIRO ENEMY
			if(ENEMY2_TIRO==0)ENEMY2_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM1);
			if(ENEMY2_DISPARA==ENEMYS_TIROFILA1)tiroenemy(ENEMY2_TIROX+(ESPACO*1)+2,ENEMY2_TIROY+7);
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY2_TIROX+(ESPACO*1)+2,ENEMY2_TIROY+7,0)==1)ENEMY2_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY2_X+i+(ESPACO*1),ENEMY2_Y+7,ENEMY2_X+i+(ESPACO*1),ENEMY2_Y+7,tiro_x,tiro_y,0)==1){
					explosion(ENEMY2_X-1+(ESPACO*1),ENEMY2_Y+3);
					ENEMY2_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY1_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
				
		//ENEMY TIRO ALEATORIO
		if(ENEMY2_DISPARA==ENEMYS_TIROFILA1){
		
			if(ENEMY2_TIRO==0){
				ENEMY2_TIROX=ENEMY2_X;
				ENEMY2_TIROY=ENEMY2_Y;
				ENEMY2_TIRO=1;
			}
			
			if(ENEMY2_TIRO==1){
				if(clocks%2==0){
					ENEMY2_TIROY++;
				}
				if(ENEMY2_TIROY>18)ENEMY2_TIRO=0;	
			}
		
		}
		
		//--------------------------------------------------------------
		
		//ENEMY3
		if(ENEMY3_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy1(sprites,enemys_x+(ESPACO*2),enemys_y+0);
			
			//TIRO ENEMY
			if(ENEMY3_TIRO==0)ENEMY3_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM1);
			if(ENEMY3_DISPARA==ENEMYS_TIROFILA1)tiroenemy(ENEMY3_TIROX+(ESPACO*2)+2,ENEMY3_TIROY+7);
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY3_TIROX+(ESPACO*2)+2,ENEMY3_TIROY+7,0)==1)ENEMY3_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY3_X+i+(ESPACO*2),ENEMY3_Y+7,ENEMY3_X+i+(ESPACO*2),ENEMY3_Y+7,tiro_x,tiro_y,0)==1){
					explosion(ENEMY3_X-1+(ESPACO*2),ENEMY3_Y+3);
					ENEMY3_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY1_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY3_DISPARA==ENEMYS_TIROFILA1){
			
			if(ENEMY3_TIRO==0){
				ENEMY3_TIROX=ENEMY3_X;
				ENEMY3_TIROY=ENEMY3_Y;
				ENEMY3_TIRO=1;
			}
			
			if(ENEMY3_TIRO==1){
				if(clocks%2==0){
					ENEMY3_TIROY++;
				}
				if(ENEMY3_TIROY>18)ENEMY3_TIRO=0;	
			}
		}
				
		//--------------------------------------------------------------

		//ENEMY4
		if(ENEMY4_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy2(sprites,enemys_x+(ESPACO*0),enemys_y+6);
			
			//TIRO ENEMY
			if(ENEMY4_TIRO==0)ENEMY4_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM2);
			if(ENEMY4_DISPARA==ENEMYS_TIROFILA2)tiroenemy(ENEMY4_TIROX+(ESPACO*0)+2,ENEMY4_TIROY+7+(6));
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY4_TIROX+(ESPACO*0)+2,ENEMY4_TIROY+7+(6),0)==1)ENEMY4_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY4_X+i+(ESPACO*0),ENEMY4_Y+7+(6),ENEMY4_X+i+(ESPACO*0),ENEMY4_Y+7+(6),tiro_x,tiro_y,0)==1){
					explosion(ENEMY4_X-1+(ESPACO*0),ENEMY4_Y+9);
					ENEMY4_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY2_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY4_DISPARA==ENEMYS_TIROFILA2){
			
			if(ENEMY4_TIRO==0){
				ENEMY4_TIROX=ENEMY4_X;
				ENEMY4_TIROY=ENEMY4_Y;
				ENEMY4_TIRO=1;
			}
			
			if(ENEMY4_TIRO==1){
				if(clocks%2==0){
					ENEMY4_TIROY++;
				}
				if(ENEMY4_TIROY>15)ENEMY4_TIRO=0;	
			}
		}
				
		//--------------------------------------------------------------
		
		//ENEMY5
		if(ENEMY5_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy2(sprites,enemys_x+(ESPACO*1),enemys_y+6);
			
			//TIRO ENEMY
			if(ENEMY5_TIRO==0)ENEMY5_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM2);
			if(ENEMY5_DISPARA==ENEMYS_TIROFILA2)tiroenemy(ENEMY5_TIROX+(ESPACO*1)+2,ENEMY5_TIROY+7+(6));
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY5_TIROX+(ESPACO*1)+2,ENEMY5_TIROY+7+(6),0)==1)ENEMY5_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY5_X+i+(ESPACO*1),ENEMY5_Y+7+(6),ENEMY5_X+i+(ESPACO*1),ENEMY5_Y+7+(6),tiro_x,tiro_y,0)==1){
					explosion(ENEMY5_X-1+(ESPACO*1),ENEMY5_Y+9);
					ENEMY5_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY2_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY5_DISPARA==ENEMYS_TIROFILA2){
			
			if(ENEMY5_TIRO==0){
				ENEMY5_TIROX=ENEMY5_X;
				ENEMY5_TIROY=ENEMY5_Y;
				ENEMY5_TIRO=1;
			}
			
			if(ENEMY5_TIRO==1){
				if(clocks%2==0){
					ENEMY5_TIROY++;
				}
				if(ENEMY5_TIROY>15)ENEMY5_TIRO=0;	
			} 
		}
		
		//-------------------------------------------------------------- 
		
		//ENEMY6
		if(ENEMY6_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy2(sprites,enemys_x+(ESPACO*2),enemys_y+6);
			
			//TIRO ENEMY
			if(ENEMY6_TIRO==0)ENEMY6_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM2);
			if(ENEMY6_DISPARA==ENEMYS_TIROFILA2)tiroenemy(ENEMY6_TIROX+(ESPACO*2)+2,ENEMY6_TIROY+7+(6));
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY6_TIROX+(ESPACO*2)+2,ENEMY6_TIROY+7+(6),0)==1)ENEMY6_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY6_X+i+(ESPACO*2),ENEMY6_Y+7+(6),ENEMY6_X+i+(ESPACO*2),ENEMY6_Y+7+(6),tiro_x,tiro_y,0)==1){
					explosion(ENEMY6_X-1+(ESPACO*2),ENEMY6_Y+9);
					ENEMY6_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY2_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY6_DISPARA==ENEMYS_TIROFILA2){
			
			if(ENEMY6_TIRO==0){
				ENEMY6_TIROX=ENEMY6_X;
				ENEMY6_TIROY=ENEMY6_Y;
				ENEMY6_TIRO=1;
			}
			
			if(ENEMY6_TIRO==1){
				if(clocks%2==0){
					ENEMY6_TIROY++;
				}
				if(ENEMY6_TIROY>15)ENEMY6_TIRO=0;	
			}
		
		}
				
		//--------------------------------------------------------------
		
		//ENEMY7
		if(ENEMY7_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy3(sprites,enemys_x+(ESPACO*0),enemys_y+12);
			
			//TIRO ENEMY
			if(ENEMY7_TIRO==0)ENEMY7_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM3);
			if(ENEMY7_DISPARA==ENEMYS_TIROFILA3)tiroenemy(ENEMY7_TIROX+(ESPACO*0)+2,ENEMY7_TIROY+7+(12));
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY7_TIROX+(ESPACO*0)+2,ENEMY7_TIROY+7+(12),0)==1)ENEMY7_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY7_X+i+(ESPACO*0),ENEMY7_Y+7+(12),ENEMY7_X+i+(ESPACO*0),ENEMY7_Y+7+(12),tiro_x,tiro_y,0)==1){
					explosion(ENEMY7_X-1+(ESPACO*0),ENEMY7_Y+15);
					ENEMY7_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY3_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY7_DISPARA==ENEMYS_TIROFILA3){
			
			if(ENEMY7_TIRO==0){
				ENEMY7_TIROX=ENEMY7_X;
				ENEMY7_TIROY=ENEMY7_Y;
				ENEMY7_TIRO=1;
			}
			
			if(ENEMY7_TIRO==1){
				if(clocks%2==0){
					ENEMY7_TIROY++;
				}
				if(ENEMY7_TIROY>9)ENEMY7_TIRO=0;	
			} 
		
		}
		
		//--------------------------------------------------------------
		
		//ENEMY8
		if(ENEMY8_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy3(sprites,enemys_x+(ESPACO*1),enemys_y+12);
			
			//TIRO ENEMY
			if(ENEMY8_TIRO==0)ENEMY8_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM3);
			if(ENEMY8_DISPARA==ENEMYS_TIROFILA3)tiroenemy(ENEMY8_TIROX+(ESPACO*1)+2,ENEMY8_TIROY+7+(12));
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY8_TIROX+(ESPACO*1)+2,ENEMY8_TIROY+7+(12),0)==1)ENEMY8_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY8_X+i+(ESPACO*1),ENEMY8_Y+7+(12),ENEMY8_X+i+(ESPACO*1),ENEMY8_Y+7+(12),tiro_x,tiro_y,0)==1){
					explosion(ENEMY8_X-1+(ESPACO*1),ENEMY8_Y+15);
					ENEMY8_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY3_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY8_DISPARA==ENEMYS_TIROFILA3){
			
			if(ENEMY8_TIRO==0){
				ENEMY8_TIROX=ENEMY8_X;
				ENEMY8_TIROY=ENEMY8_Y;
				ENEMY8_TIRO=1;
			}
			
			if(ENEMY8_TIRO==1){
				if(clocks%2==0){
					ENEMY8_TIROY++;
				}
				if(ENEMY8_TIROY>9)ENEMY8_TIRO=0;	
			}
		}
		
		//--------------------------------------------------------------
		
		//ENEMY9
		if(ENEMY9_VIEW==1){
			
			//GERAL ENEMY POSIÇÃO
			enemy3(sprites,enemys_x+(ESPACO*2),enemys_y+12);
			
			//TIRO ENEMY
			if(ENEMY9_TIRO==0)ENEMY9_DISPARA=cgame_numrandom(0,ENEMYS_NUMRANDOM3);
			if(ENEMY9_DISPARA==ENEMYS_TIROFILA3)tiroenemy(ENEMY9_TIROX+(ESPACO*2)+2,ENEMY9_TIROY+7+(12));
			
			//TIRO COLISÃO
			for(int i=0;i<3;i++){
				if(cgame_collision_pixel(player_x+i,player_y-1,player_x+i,player_y-1,ENEMY9_TIROX+(ESPACO*2)+2,ENEMY9_TIROY+7+(12),0)==1)ENEMY9_TIRO=0,player_vida--;
			}
			
			//COLISÃO
			for(int i=0;i<5;i++){
				if(cgame_collision_pixel(ENEMY9_X+i+(ESPACO*2),ENEMY9_Y+7+(12),ENEMY9_X+i+(ESPACO*2),ENEMY9_Y+7+(12),tiro_x,tiro_y,0)==1){
					explosion(ENEMY9_X-1+(ESPACO*2),ENEMY9_Y+15);
					ENEMY9_VIEW=0;tiro_x=1;tiro_y=-1;tiro_ativo=0;
					score+=ENEMY3_SCORE;
				}
			}
		}
		
		//TIRO ENEMY CONTINUAR ENQUANTO DISPARO EXISTIR
		//CRIAR FUNÇÃO AQUI
		
		//ENEMY TIRO ALEATORIO
		if(ENEMY9_DISPARA==ENEMYS_TIROFILA3){
				
			if(ENEMY9_TIRO==0){
				ENEMY9_TIROX=ENEMY9_X;
				ENEMY9_TIROY=ENEMY9_Y;
				ENEMY9_TIRO=1;
			}
			
			if(ENEMY9_TIRO==1){
				
				if(clocks%2==0){
					ENEMY9_TIROY++;
				}
				
				if(ENEMY9_TIROY>9)ENEMY9_TIRO=0;	
			}
		
		}
		 	
		//--------------------------------------------------------------
		
		//PLAYER
		if(tiro_ativo==1){
			tiro(tiro_x,tiro_y);
		}
		nave(player_x,player_y);
		
		//--------------------------------------------------------------
			
		while(kbhit()){
		
			// KBHIT() = COMMAND FOR KEYBOARD DATA ENTRY
			tecla = getch();
			
			// KYBOARD INPUT
			
		//--------------------------------------------------------------	
		}	
			
		//JOYSTICK INPUT	
		switch(js.type & ~JS_EVENT_INIT){
		
			case JS_EVENT_BUTTON:
				
				//UNCOMMENT TO DISPLAY ALL BUTTONS
				//gotoxy(0,2),printf("Button %d, Value %d\n", js.number, js.value);
				
				if(js.number==0 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button X PRESSED\n");
				}
				
				if(js.number==1 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button A PRESSED\n");
				}
				
				if(js.number==2 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button B PRESSED\n");
				}
			
			
				if(js.number==3 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button Y PRESSED\n");
					
					if(tiro_ativo==0){
						cgame_beep("0.1","0.9");
						tiro_x=tiro_x+player_x;
						tiro_y=tiro_y+player_y;
						tiro_ativo=1;
					}
					
				}
				
				if(js.number==4 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button L PRESSED\n");
					if(player_x!=LIMITECAMPO)player_x--;
				}
				
				if(js.number==5 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button R PRESSED\n");
					if(player_x!=(97-LIMITECAMPO))player_x++;
				}
				
				if(js.number==8 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button SELECT PRESSED\n");
					
				}
				
				if(js.number==9 && js.value==1){
					//CODE HERE
					//gotoxy(0,2),printf("Button START PRESSED\n");
					
				}
			break;
		
			case JS_EVENT_AXIS:
				
				//UNCOMMENT TO DISPLAY ALL BUTTONS
				//gotoxy(0,2),printf("Eixo %d, Value %d\n", js.number, js.value);
				
				//BUTTON RIGHT
				if(js.number==0 && js.value==32767){
					//CODE HERE
					//gotoxy(0,2),printf("Button RIGHT PRESSED\n");
				}
				
				//BUTTON LEFT
				if(js.number==0 && js.value==-32767){
					//CODE HERE
					//gotoxy(0,2),printf("Button LEFT PRESSED\n");
				}
				
				//BUTTON UP
				if(js.number==1 && js.value==32767){
					//CODE HERE
					//gotoxy(0,2),printf("Button UP PRESSED\n");
				}
				
				//BUTTON DOWN
				if(js.number==1 && js.value==-32767){
					//CODE HERE
					//gotoxy(0,2),printf("Button DOWN PRESSED\n");
				}
		
		}	
			
		//--------------------------------------------------------------

		// GAME LOOPS (PUT ALL THE ANIMATION AND LOGIC FUNCTIONS BELOW KBHIT)
		srand(time(NULL));
		clocks++;
		if(clocks==100)clocks=0; //TIME CONTROL AT THE TERMINAL
		
		//--------------------------------------------------------------
		
		// ** CODE LOOP FUNCTIONS BELOW**
		
		//MOVE ENEMY
		if(clocks%(11-level)==0){
			
			if(level>=8 && level<11){
				ENEMYS_COLOR=9;	
			}else{
				ENEMYS_COLOR=15;	
			}
			
			if(direction==2){
				enemys_x++;//GERAL
				
				ENEMY1_X++;//COLISAO X
				ENEMY2_X++;//COLISAO X
				ENEMY3_X++;//COLISAO X
				
				ENEMY4_X++;//COLISAO X
				ENEMY5_X++;//COLISAO X
				ENEMY6_X++;//COLISAO X
				
				ENEMY7_X++;//COLISAO X
				ENEMY8_X++;//COLISAO X
				ENEMY9_X++;//COLISAO X
			}
			
			if(direction==2 && enemys_x==(108-LIMITECAMPO)-(ESPACO*3))direction=1;
		
			if(direction==1){
				enemys_x--;//GERAL
				
				ENEMY1_X--;//COLISAO X
				ENEMY2_X--;//COLISAO X
				ENEMY3_X--;//COLISAO X
				
				ENEMY4_X--;//COLISAO X
				ENEMY5_X--;//COLISAO X
				ENEMY6_X--;//COLISAO X
				
				ENEMY7_X--;//COLISAO X
				ENEMY8_X--;//COLISAO X
				ENEMY9_X--;//COLISAO X
			}
			
			if(direction==1 && enemys_x==LIMITECAMPO)direction=2;
			
			sprites++;
			if(sprites>2)sprites=1;
		}
		
		//PLAYER TIRO
		if(tiro_ativo==1){
			
			tiro_y--;	
			
			//ZERAR VARIAVEIS
			if(tiro_y==1){
				tiro_ativo=0;
				tiro_x=1;
				tiro_y=-1;
			}
		}
		
		//GAME PROXIMO NIVEL + ZERAR VARIAVEIS
		if(score==(60*1)){
			level=2;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*2)){
			level=3;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*3)){
			level=4;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*4)){
			level=5;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*5)){
			level=6;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*6)){
			level=7;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*7)){
			level=8;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*8)){
			level=9;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		if(score==(60*9)){
			level=10;
			ENEMY1_VIEW=1;
			ENEMY2_VIEW=1;
			ENEMY3_VIEW=1;
			ENEMY4_VIEW=1;
			ENEMY5_VIEW=1;
			ENEMY6_VIEW=1;
			ENEMY7_VIEW=1;
			ENEMY8_VIEW=1;
			ENEMY9_VIEW=1;
		};
		
		//ZERAR TODAS AS VARIAVEIS
		if(score==600){
			maxscore=maxscore+score;
			if(maxscore==6000)maxscore=0;
			zerargame();
		}
		
		if(player_vida==0){
			zerargame();
		}
		
		//--------------------------------------------------------------
		
		cls_buffer(); // SCREEN CLEANING
		
		//--------------------------------------------------------------
		
		once=0; // VARIABLE TO PERFORM CODE ONCE IN THE PROGRAM
		
		//--------------------------------------------------------------
	
		//  TERMINAL FPS
		FPS("26");

	}
	
	// CONNECT TERMINAL FUNCTION
	cgame_curso(1);
	cgame_echo(1);
	
  return 0;

}
