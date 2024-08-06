int player_atirar=0;
int player_balltime=0;
int player_y=25;

void player(int x,int y){

	cgame_rectangle(x,y,3,1,9);
	cgame_pixel(x+0,y,9);
	cgame_pixel(x+2,y,9);
	
}
