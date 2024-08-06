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
 * FUNCTIONS 1
 * 
 * 1-SONG BEEP
 * 
 * 1-SONG BEEP
 * USE THE PLAY PROGRAM, AS A FUNCTION CALL, GENERATING A SONG FOR YOUR GAME
 *  
 * */
 
void cgame_beep(char sound_intensity[],char sound_power[]){
	
	//INSTALL PLAY: SUDO APT-GET INSTALL PLAY
	char command[100];
	sprintf(command,"play -q -n synth %s sin %s>/dev/null 2>&1 &",sound_intensity,sound_power);
	system(command);
	
	
}
