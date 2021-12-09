# include<graphics.h>
main()
{
	initwindow(500,400);
	//circle
	circle(220,150,85);
	circle(220,150,70);
	setfillstyle(SOLID_FILL,BLUE);
	circle(220,150,28);
	floodfill(200,150, WHITE);
	//big triangle line
	line(150,110,290,110);
	line(150,110,220,230);
	line(290,110,220,230);
	//small triangle line
	setfillstyle(INTERLEAVE_FILL, LIGHTCYAN);
	line(200,164,220,120);
	line(200,164,240,164);
	line(220,120,240,164);
	floodfill(220,150, WHITE);
	// inside line
	line(160,120,270,120);
	line(170,120,230,219);
	line(220,200,275,110);
	//extra line
	line(210,70,210,110);
	line(230,70,230,110);
	line(184,164,150,180);
	line(188,178,160,190);
	line(260,164,290,180);
	line(250,178,285,195);
	//inside second triangle colour
	setfillstyle(SOLID_FILL, DARKGRAY);
	line(160,120,270,120);
	line(170,120,230,219);
	line(220,200,275,110);
	floodfill(190,130,WHITE);
	setfillstyle(SOLID_FILL, DARKGRAY);
	line(160,120,270,120);
	line(170,120,230,219);
	line(220,200,275,110);
	floodfill(250,130,WHITE);setfillstyle(SOLID_FILL, DARKGRAY);
	line(160,120,270,120);
	line(170,120,230,219);
	line(220,200,275,110);
	floodfill(220,190,WHITE);
	//colour corner
	setfillstyle(WIDE_DOT_FILL,CYAN);
	circle(220,150,70);
	line(150,110,290,110);
	line(210,70,210,110);
	floodfill(190,90, WHITE);
	
	setfillstyle(WIDE_DOT_FILL,CYAN);
	circle(220,150,70);
	line(150,110,290,110);
	line(230,70,230,110);
	floodfill(250,90, WHITE);
		
	setfillstyle(WIDE_DOT_FILL,CYAN);
	circle(220,150,70);
	line(150,110,220,230);
	line(184,164,150,180);
	floodfill(160,150, WHITE);
		
	setfillstyle(WIDE_DOT_FILL,CYAN);
	circle(220,150,70);
	line(150,110,220,230);
	line(188,178,160,190);
	floodfill(190,200, WHITE);
		
	setfillstyle(WIDE_DOT_FILL,CYAN);
	circle(220,150,70);
	line(290,110,220,230);
	line(260,164,290,180);
	floodfill(250,200, WHITE);
		
	setfillstyle(WIDE_DOT_FILL,CYAN);
	circle(220,150,70);
	line(290,110,220,230);
	line(250,178,285,195);
	floodfill(280,150, WHITE);
	
	//TIK TIK LINE COLOUR
	setfillstyle(CLOSE_DOT_FILL,LIGHTCYAN);
	line(150,110,290,110);
	line(160,120,270,120);
	line(150,110,220,230);
	line(220,200,275,110);
	floodfill(200,115,WHITE);
	
	setfillstyle(CLOSE_DOT_FILL,LIGHTCYAN);
	line(290,110,220,230);
	line(170,120,230,219);
	line(220,200,275,110);
	floodfill(255,150,WHITE);
	
	//Extra lines colour
	
	setfillstyle( XHATCH_FILL, WHITE);
	line(210,70,210,110);
	line(230,70,230,110);
	floodfill(220,90,WHITE);
		
	setfillstyle( XHATCH_FILL, WHITE);
	line(184,164,150,180);
	line(188,178,160,190);
	floodfill(170,180,WHITE);
		
	setfillstyle( XHATCH_FILL, WHITE);
	line(260,164,290,180);
	line(250,178,285,195);
	floodfill(270,170,WHITE);
		
	//Circle Border colour
	circle(220,150,83);
	getch();
}
