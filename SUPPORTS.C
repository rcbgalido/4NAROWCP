#include "4NAROWCP.H"

int getColumn(int a){
	switch(a%7){
		case 0: return sevenColumn;
		case 1: return oneColumn;
		case 2: return twoColumn;
		case 3: return threeColumn;
		case 4: return fourColumn; 
		case 5: return fiveColumn;
		case 6: return sixColumn;
		default: return 0;
	}
}

void incrementColumn(int a){
	switch(a%7){
		case 0: ++sevenColumn; break;
		case 1: ++oneColumn; break;
		case 2: ++twoColumn; break;
		case 3: ++threeColumn; break;
		case 4: ++fourColumn; break;
		case 5: ++fiveColumn; break;
		case 6: ++sixColumn; break;
		default: exit(0);		
	}
}

int getIncrement(int a){
	switch(a%7){
		case 0: return 7;
		case 1: return 1;
		case 2: return 2;
		case 3: return 3;
		case 4: return 4;
		case 5: return 5;
		case 6: return 6;
		default: return 0;		
	}
}

int getCircleXCoordinate(int a){
	switch(a%7){
		case 0: return 440;
		case 1: return 200;
		case 2: return 240;
		case 3: return 280;
		case 4: return 320;
		case 5: return 360;
		case 6: return 400;
		default: return 0;		
	}
}