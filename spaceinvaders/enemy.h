//VARIAVEL X E Y DE TODOS OS ENEMY
int sprites=1;
int enemys_x=LIMITECAMPO;
int enemys_y=4;
//int enemys_speed=4;

//DIRECAO ESQ=1 E DIR=2 
int direction=2;

//ESPACO ENTRE INIMIGOS
int ESPACO=10;

//ENEMYS TIRO VALOR PARA ATIRAREM ENTRE NUMERO GERADOS ALEATORIAMENTE
int ENEMYS_NUMRANDOM1=3;
int ENEMYS_NUMRANDOM2=10;
int ENEMYS_NUMRANDOM3=20;

int ENEMYS_TIROFILA1=1;
int ENEMYS_TIROFILA2=5;
int ENEMYS_TIROFILA3=10;

//ENEMY
int ENEMY1_DISPARA=0;
int ENEMY1_VIEW=1;
int ENEMY1_X=LIMITECAMPO+1;
int ENEMY1_Y=0;
int ENEMY1_TIRO=0;
int ENEMY1_TIROX=LIMITECAMPO+1;
int ENEMY1_TIROY=0;

int ENEMY2_DISPARA=0;
int ENEMY2_VIEW=1;
int ENEMY2_X=LIMITECAMPO+1;
int ENEMY2_Y=0;
int ENEMY2_TIRO=0;
int ENEMY2_TIROX=LIMITECAMPO+1;
int ENEMY2_TIROY=0;

int ENEMY3_DISPARA=0;
int ENEMY3_VIEW=1;
int ENEMY3_X=LIMITECAMPO+1;
int ENEMY3_Y=0;
int ENEMY3_TIRO=0;
int ENEMY3_TIROX=LIMITECAMPO+1;
int ENEMY3_TIROY=0;

int ENEMY4_DISPARA=0;
int ENEMY4_VIEW=1;
int ENEMY4_X=LIMITECAMPO+1;
int ENEMY4_Y=0;
int ENEMY4_TIRO=0;
int ENEMY4_TIROX=LIMITECAMPO+1;
int ENEMY4_TIROY=0;

int ENEMY5_DISPARA=0;
int ENEMY5_VIEW=1;
int ENEMY5_X=LIMITECAMPO+1;
int ENEMY5_Y=0;
int ENEMY5_TIRO=0;
int ENEMY5_TIROX=LIMITECAMPO+1;
int ENEMY5_TIROY=0;

int ENEMY6_DISPARA=0;
int ENEMY6_VIEW=1;
int ENEMY6_X=LIMITECAMPO+1;
int ENEMY6_Y=0;
int ENEMY6_TIRO=0;
int ENEMY6_TIROX=LIMITECAMPO+1;
int ENEMY6_TIROY=0;

int ENEMY7_DISPARA=0;
int ENEMY7_VIEW=1;
int ENEMY7_X=LIMITECAMPO+1;
int ENEMY7_Y=0;
int ENEMY7_TIRO=0;
int ENEMY7_TIROX=LIMITECAMPO+1;
int ENEMY7_TIROY=0;

int ENEMY8_DISPARA=0;
int ENEMY8_VIEW=1;
int ENEMY8_X=LIMITECAMPO+1;
int ENEMY8_Y=0;
int ENEMY8_TIRO=0;
int ENEMY8_TIROX=LIMITECAMPO+1;
int ENEMY8_TIROY=0;

int ENEMY9_DISPARA=0;
int ENEMY9_VIEW=1;
int ENEMY9_X=LIMITECAMPO+1;
int ENEMY9_Y=0;
int ENEMY9_TIRO=0;
int ENEMY9_TIROX=LIMITECAMPO+1;
int ENEMY9_TIROY=0;

int ENEMY1_SCORE=10;
int ENEMY2_SCORE=7;
int ENEMY3_SCORE=3;

int ENEMYS_COLOR=15;

void tiroenemy(int x,int y){
	cgame_color(ENEMYS_COLOR);
	gotoxy(x,y),printf("|");	
}

void explosion(int x,int y){
	gotoxy(x,y+0);printf("█  █  █");
	gotoxy(x,y+1);printf(" █ █ █");
	gotoxy(x,y+2);printf("  ███");
	gotoxy(x,y+3);printf(" █ █ █");
	gotoxy(x,y+4);printf("█  █  █");		
}

void enemy1(int sprite,int x,int y){

	cgame_color(ENEMYS_COLOR);

	if(sprite==1){
	gotoxy(x,y+0);printf(" █████");
	gotoxy(x,y+1);printf(" █ █ █");
	gotoxy(x,y+2);printf("███████");
	gotoxy(x,y+3);printf("  █ █");
	}
	
	if(sprite==2){
	gotoxy(x,y+0);printf(" █████");
	gotoxy(x,y+1);printf(" █ █ █");
	gotoxy(x,y+2);printf("███████");
	gotoxy(x,y+3);printf("█     █");
	}
	
}

void enemy2(int sprite,int x,int y){

	cgame_color(ENEMYS_COLOR);

	if(sprite==1){
	gotoxy(x,y+0);printf("█     █");
	gotoxy(x,y+1);printf(" █████");
	gotoxy(x,y+2);printf("██ █ ██");
	gotoxy(x,y+3);printf("█ █ █ █");
	}
	
	if(sprite==2){
	gotoxy(x,y+0);printf(" █   █");
	gotoxy(x,y+1);printf(" █████");
	gotoxy(x,y+2);printf("██ █ ██");
	gotoxy(x,y+3);printf("█     █");
	}
}

void enemy3(int sprite,int x,int y){

	cgame_color(ENEMYS_COLOR);

	if(sprite==1){
	gotoxy(x,y+0);printf("   █");
	gotoxy(x,y+1);printf(" █████");
	gotoxy(x,y+2);printf("█ ███ █");
	gotoxy(x,y+3);printf(" ██ ██");
	}
	
	if(sprite==2){
	gotoxy(x,y+0);printf("   █");
	gotoxy(x,y+1);printf(" █████");
	gotoxy(x,y+2);printf("█ ███ █");
	gotoxy(x,y+3);printf("██   ██");
	}
}
