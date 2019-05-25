#include "4NAROWCP.H"

void playerMove(){
	if(getColumn(arrowCounter)<=6){
		setcolor(playerColor);
		circle(getCircleXCoordinate(arrowCounter),lowerbound-(getColumn(arrowCounter)*40),20);
		setfillstyle(INTERLEAVE_FILL,playerColor);
		floodfill(getCircleXCoordinate(arrowCounter),lowerbound-(getColumn(arrowCounter)*40),playerColor);
		wholeGrid[(getColumn(arrowCounter)-1)*7+getIncrement(arrowCounter)]=playerColor;
		checkWin();
		incrementColumn(arrowCounter);
		if(winCounter!=1){
			computerMove();
		}
	}
}