#include "4NAROWCP.H"

void programInitialize(){
	playerColor=100; //RED
	computerColor=110; //YELLOW
	arrowCounter=1;
	winCounter=0;
	oneColumn=1; twoColumn=1; threeColumn=1; fourColumn=1;
	fiveColumn=1; sixColumn=1; sevenColumn=1;
}

void showHeaderFooter(){
	int a, x, y;

	setcolor(BLUE);
	for(a=1;a<=8;a++){
		line(140+(40*a),120,140+(40*a),lowerbound-20); //VERTICAL
		line(180,(lowerbound+60)-(40*a),460,(lowerbound+60)-(40*a)); //HORIZONTAL
	}
	
	/** STAND */ 
	setcolor(BLUE);
	line(180,(lowerbound+60)-40,220,lowerbound-20);
	line(460,(lowerbound+60)-40,420,lowerbound-20);

	setcolor(YELLOW);
	outtextxy(1,1,"FOUR-IN-A-ROW");
	
	setcolor(BLUE);
	for(y=1;y<=6;y++){
		for(x=200;x<=440;x=x+40){
			circle(x,lowerbound-(y*40),20);
		}
	}
}