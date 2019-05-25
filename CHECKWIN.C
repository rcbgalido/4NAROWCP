#include "4NAROWCP.H"

void checkWin(){
	checkHorizontal();
}

void checkHorizontal(){
	int a;
	for(a=1;a<=42;a++){
		if(a%7<=4&&a%7!=0){
			if(wholeGrid[a]==wholeGrid[a+1]&&wholeGrid[a]==wholeGrid[a+2]&&wholeGrid[a]==wholeGrid[a+3]){
				char choice;
				setcolor(YELLOW);
				if(wholeGrid[a]==playerColor){
					outtextxy(1,10,"PLAYER WINS (Horizontal)");
				}else if(wholeGrid[a]==computerColor){
					outtextxy(1,10,"COMPUTER WINS (Horizontal)");
				}
				winCounter=1;
				outtextxy(250,375,"PRESS N FOR NEW GAME");
				choice=getch();
				if(choice==110||choice==78){
					main();
				}else{
					exit(0);
				}
				break;
			}
		}
	}
	checkVertical();
}

void checkVertical(){
	int a;
	for(a=1;a<=21;a++){
		if(wholeGrid[a]==wholeGrid[a+7]&&wholeGrid[a]==wholeGrid[a+14]&&wholeGrid[a]==wholeGrid[a+21]){
			char choice;
			setcolor(YELLOW);
			if(wholeGrid[a]==playerColor){
				outtextxy(1,10,"PLAYER WINS (Vertical)");
			}else if(wholeGrid[a]==computerColor){
				outtextxy(1,10,"COMPUTER WINS (Vertical)");
			}
			winCounter=1;
			outtextxy(250,375,"PRESS N FOR NEW GAME");
			choice=getch();
			if(choice==110||choice==78){
				main();
			}else{
				exit(0);
			}
			break;
		}
	}
	checkForwardDiagonal();
}

void checkForwardDiagonal(){ 
	int a;
	for(a=25;a<=42;a++){
		if(a%7>=4||a%7==0){
			if(wholeGrid[a]==wholeGrid[a-8]&&wholeGrid[a]==wholeGrid[a-16]&&wholeGrid[a]==wholeGrid[a-24]){
				char choice;
				setcolor(YELLOW);
				if(wholeGrid[a]==playerColor){
					outtextxy(1,10,"PLAYER WINS (Forward Diagonal)");
				}else if(wholeGrid[a]==computerColor){
					outtextxy(1,10,"COMPUTER WINS (Forward Diagonal)");
				}
				winCounter=1;
				outtextxy(250,375,"PRESS N FOR NEW GAME");
				choice=getch();
				if(choice==110||choice==78){
					main();
				}else{
					exit(0);
				}
				break;
			}
		}
	}
	checkBackwardDiagonal();
}

void checkBackwardDiagonal(){
	int a;
	for(a=22;a<=42;a++){
		if(a%7<=4&&a%7!=0){
			if(wholeGrid[a]==wholeGrid[a-6]&&wholeGrid[a]==wholeGrid[a-12]&&wholeGrid[a]==wholeGrid[a-18]){
				char choice;
				setcolor(YELLOW);
				if(wholeGrid[a]==playerColor){
					outtextxy(1,10,"PLAYER WINS (Backward Diagonal)");
				}else if(wholeGrid[a]==computerColor){
					outtextxy(1,10,"COMPUTER WINS (Backward Diagonal)");
				}
				winCounter=1;
				outtextxy(250,375,"PRESS N FOR NEW GAME");
				choice=getch();
				if(choice==110||choice==78){
					main();
				}else{
					exit(0);
				}
				break;
			}
		}
	}
}