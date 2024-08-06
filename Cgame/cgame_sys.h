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
 * FUNCTIONS 5
 * 
 * 1-FULLSCREEN
 * 2-CURSOR
 * 3-ECHO
 * 4-CLEAR
 * 
 * 1-FULLSCREEN
 * MAKES THE SCREEN BIG, WITH A FUNCTION CALL
 * 
 * 2-CURSOR
 * TURN THE MOUSE CURSOR ON OR OFF, WHEN IT BLINKS AND APPEARS ON THE SCREEN
 * 
 * 3-ECHO
 * TURN OFF DATA INPUT ON SCREEN,NO CHARACTERS WHEN TYPING
 * 
 * 4-CLEAR
 * CLEAR SCREEN
 * 
 * */

#include <stdlib.h>

void cgame_fullscreen(){
	system("wmctrl -r :ACTIVE: -b toggle,maximized_vert,maximized_horz");		
}

void cgame_curso(int off_on){
	
	if(off_on == 1)printf("\e[?25h");// CURSOR LIGADO
	
	if(off_on == 0)printf("\e[?25l");// CURSOR DESLIGADO
		
}

void cgame_echo(int off_on){
	
	if(off_on == 1)system("stty echo");// ECHO DA TELA LIGADO
	
	if(off_on == 0)system("stty -echo");// ECHO DA TELA DESLIGADO	
	
}

void cgame_clear(){
	
	system("clear"); // LIMPAR TELA

}

