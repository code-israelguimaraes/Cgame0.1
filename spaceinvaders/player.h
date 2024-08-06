int player_x=LIMITECAMPO;
int player_y=25;
int player_vida=3;

int tiro_ativo=0;
int tiro_x=0;
int tiro_y=0;

int maxscore=0;

void tiro(int x,int y){
	cgame_color(40);
	gotoxy(x,y),printf("|");	
}

void nave(int x,int y){

	cgame_color(40);
	gotoxy(LIMITECAMPO+0,2),printf("SCORE:%d",score);
	gotoxy(LIMITECAMPO+10,2),printf("LEVEL:%d",level);
	gotoxy(LIMITECAMPO+20,2),printf("MAXSCORE:%d",maxscore);
	
	if(player_vida==3)gotoxy(LIMITECAMPO+40,2),printf("LIVE: █ █ █");
	if(player_vida==2)gotoxy(LIMITECAMPO+40,2),printf("LIVE: █ █");
	if(player_vida==1)gotoxy(LIMITECAMPO+40,2),printf("LIVE: █");
	if(player_vida==0)gotoxy(LIMITECAMPO+40,2),printf("LIVE:");

	cgame_color(40);
	gotoxy(x,y+0);printf(" █");
	gotoxy(x,y+1);printf("███");
	

}
