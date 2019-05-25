#include "4NAROWCP.H"

void computerMove(){
	int a, counter;
	counter=0;

	//COMPUTER OFFENSIVE

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==a&&wholeGrid[a+1]==computerColor&&wholeGrid[a+2]==computerColor&&wholeGrid[a+3]==computerColor){
					if((a/7)+1==getColumn(a)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
						wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
						checkWin();
						incrementColumn(a);
						counter=1;
						//printAlgorithm("Left Horizontal Offense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a+1]==computerColor&&wholeGrid[a+2]==computerColor&&wholeGrid[a+3]==a+3){
					if(((a+3)/7)+1==getColumn(a+3)||((a+3)%7==0&&(a+3)/7==getColumn(7))){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a+3),lowerbound-(getColumn(a+3)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a+3),lowerbound-(getColumn(a+3)*40),computerColor);
						wholeGrid[(getColumn(a+3)-1)*7+getIncrement(a+3)]=computerColor;
						checkWin();
						incrementColumn(a+3);
						counter=1;
						//printAlgorithm("Right Horizontal Offense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a+1]==a+1&&wholeGrid[a+2]==computerColor&&wholeGrid[a+3]==computerColor){
					if(((a+1)/7)+1==getColumn(a+1)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a+1),lowerbound-(getColumn(a+1)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a+1),lowerbound-(getColumn(a+1)*40),computerColor);
						wholeGrid[(getColumn(a+1)-1)*7+getIncrement(a+1)]=computerColor;
						checkWin();
						incrementColumn(a+1);
						counter=1;
						//printAlgorithm("Middle Horizontal Offense 1");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a+1]==computerColor&&wholeGrid[a+2]==a+2&&wholeGrid[a+3]==computerColor){
					if(((a+2)/7)+1==getColumn(a+2)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a+2),lowerbound-(getColumn(a+2)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a+2),lowerbound-(getColumn(a+2)*40),computerColor);
						wholeGrid[(getColumn(a+2)-1)*7+getIncrement(a+2)]=computerColor;
						checkWin();
						incrementColumn(a+2);
						counter=1;
						//printAlgorithm("Middle Horizontal Offense 2");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=21;a++){
			if(wholeGrid[a]==computerColor&&wholeGrid[a+7]==computerColor&&wholeGrid[a+14]==computerColor&&wholeGrid[a+21]==a+21){
				delay(500);
				setcolor(computerColor);
				circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
				setfillstyle(INTERLEAVE_FILL,computerColor);
				floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
				wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
				checkWin();
				incrementColumn(a);
				counter=1;
				//printAlgorithm("Vertical Offense");
				break;
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a-8]==computerColor&&wholeGrid[a-16]==computerColor&&wholeGrid[a-24]==a-24){
					if(((a-24)/7)+1==getColumn(a-24)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-24),lowerbound-(getColumn(a-24)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-24),lowerbound-(getColumn(a-24)*40),computerColor);
						wholeGrid[(getColumn(a-24)-1)*7+getIncrement(a-24)]=computerColor;
						checkWin();
						incrementColumn(a-24);
						counter=1;
						//printAlgorithm("Left Forward Diagonal Offense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==a&&wholeGrid[a-8]==computerColor&&wholeGrid[a-16]==computerColor&&wholeGrid[a-24]==computerColor){
					if((a/7)+1==getColumn(a)||(a%7==0&&a/7==getColumn(7))){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
						wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
						checkWin();
						incrementColumn(a);
						counter=1;
						//printAlgorithm("Right Forward Diagonal Offense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a-8]==a-8&&wholeGrid[a-16]==computerColor&&wholeGrid[a-24]==computerColor){
					if(((a-8)/7)+1==getColumn(a-8)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-8),lowerbound-(getColumn(a-8)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-8),lowerbound-(getColumn(a-8)*40),computerColor);
						wholeGrid[(getColumn(a-8)-1)*7+getIncrement(a-8)]=computerColor;
						checkWin();
						incrementColumn(a-8);
						counter=1;
						//printAlgorithm("Middle Forward Diagonal Offense 1");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a-8]==computerColor&&wholeGrid[a-16]==a-16&&wholeGrid[a-24]==computerColor){
					if(((a-16)/7)+1==getColumn(a-16)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-16),lowerbound-(getColumn(a-16)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-16),lowerbound-(getColumn(a-16)*40),computerColor);
						wholeGrid[(getColumn(a-16)-1)*7+getIncrement(a-16)]=computerColor;
						checkWin();
						incrementColumn(a-16);
						counter=1;
						//printAlgorithm("Middle Forward Diagonal Offense 1");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==a&&wholeGrid[a-6]==computerColor&&wholeGrid[a-12]==computerColor&&wholeGrid[a-18]==computerColor){
					if((a/7)+1==getColumn(a)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
						wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
						checkWin();
						incrementColumn(a);
						counter=1;
						//printAlgorithm("Left Backward Diagonal Offense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a-6]==computerColor&&wholeGrid[a-12]==computerColor&&wholeGrid[a-18]==a-18){
					if(((a-18)/7)+1==getColumn(a-18)||((a-18)%7==0&&(a-18)/7==getColumn(7))){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-18),lowerbound-(getColumn(a-18)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-18),lowerbound-(getColumn(a-18)*40),computerColor);
						wholeGrid[(getColumn(a-18)-1)*7+getIncrement(a-18)]=computerColor;
						checkWin();
						incrementColumn(a-18);
						counter=1;
						//printAlgorithm("Right Backward Diagonal Offense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a-6]==a-6&&wholeGrid[a-12]==computerColor&&wholeGrid[a-18]==computerColor){
					if(((a-6)/7)+1==getColumn(a-6)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-6),lowerbound-(getColumn(a-6)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-6),lowerbound-(getColumn(a-6)*40),computerColor);
						wholeGrid[(getColumn(a-6)-1)*7+getIncrement(a-6)]=computerColor;
						checkWin();
						incrementColumn(a-6);
						counter=1;
						//printAlgorithm("Middle Backward Diagonal Offense 1");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==computerColor&&wholeGrid[a-6]==computerColor&&wholeGrid[a-12]==a-12&&wholeGrid[a-18]==computerColor){
					if((a-12/7)+1==getColumn(a-12)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-12),lowerbound-(getColumn(a-12)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-12),lowerbound-(getColumn(a-12)*40),computerColor);
						wholeGrid[(getColumn(a-12)-1)*7+getIncrement(a-12)]=computerColor;
						checkWin();
						incrementColumn(a-12);
						counter=1;
						//printAlgorithm("Middle Backward Diagonal Offense 2");
						break;
					}
				}
			}
		}
	}

	//COMPUTER DEFENSIVE

	for(a=1;a<=42;a++){
		if(a%7<=4&&a%7!=0){
			if(wholeGrid[a]==a&&wholeGrid[a+1]==playerColor&&wholeGrid[a+2]==playerColor&&wholeGrid[a+3]==playerColor){
				if((a/7)+1==getColumn(a)){
					delay(500);
					setcolor(computerColor);
					circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
					setfillstyle(INTERLEAVE_FILL,computerColor);
					floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
					wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
					checkWin();
					incrementColumn(a);
					counter=1;
					//printAlgorithm("Left Horizontal Defense");
					break;
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a+1]==playerColor&&wholeGrid[a+2]==playerColor&&wholeGrid[a+3]==a+3){
					if(((a+3)/7)+1==getColumn(a+3)||((a+3)%7==0&&(a+3)/7==getColumn(7))){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a+3),lowerbound-(getColumn(a+3)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a+3),lowerbound-(getColumn(a+3)*40),computerColor);
						wholeGrid[(getColumn(a+3)-1)*7+getIncrement(a+3)]=computerColor;
						checkWin();
						incrementColumn(a+3);
						counter=1;
						//printAlgorithm("Right Horizontal Defense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a+1]==a+1&&wholeGrid[a+2]==playerColor&&wholeGrid[a+3]==playerColor){
					if(((a+1)/7)+1==getColumn(a+1)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a+1),lowerbound-(getColumn(a+1)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a+1),lowerbound-(getColumn(a+1)*40),computerColor);
						wholeGrid[(getColumn(a+1)-1)*7+getIncrement(a+1)]=computerColor;
						checkWin();
						incrementColumn(a+1);
						counter=1;
						//printAlgorithm("Middle Horizontal Defense 1");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a+1]==playerColor&&wholeGrid[a+2]==a+2&&wholeGrid[a+3]==playerColor){
					if(((a+2)/7)+1==getColumn(a+2)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a+2),lowerbound-(getColumn(a+2)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a+2),lowerbound-(getColumn(a+2)*40),computerColor);
						wholeGrid[(getColumn(a+2)-1)*7+getIncrement(a+2)]=computerColor;
						checkWin();
						incrementColumn(a+2);
						counter=1;
						//printAlgorithm("Middle Horizontal Defense 2");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=21;a++){
			if(wholeGrid[a]==playerColor&&wholeGrid[a+7]==playerColor&&wholeGrid[a+14]==playerColor&&wholeGrid[a+21]==a+21){
				delay(500);
				setcolor(computerColor);
				circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
				setfillstyle(INTERLEAVE_FILL,computerColor);
				floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
				wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
				checkWin();
				incrementColumn(a);
				counter=1;
				//printAlgorithm("Vertical Defense");
				break;
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a-8]==playerColor&&wholeGrid[a-16]==playerColor&&wholeGrid[a-24]==a-24){
					if(((a-24)/7)+1==getColumn(a-24)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-24),lowerbound-(getColumn(a-24)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-24),lowerbound-(getColumn(a-24)*40),computerColor);
						wholeGrid[(getColumn(a-24)-1)*7+getIncrement(a-24)]=computerColor;
						checkWin();
						incrementColumn(a-24);
						counter=1;
						//printAlgorithm("Left Forward Diagonal Defense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==a&&wholeGrid[a-8]==playerColor&&wholeGrid[a-16]==playerColor&&wholeGrid[a-24]==playerColor){
					if((a/7)+1==getColumn(a)||(a%7==0&&a/7==getColumn(7))){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
						wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
						checkWin();
						incrementColumn(a);
						counter=1;
						//printAlgorithm("Right Forward Diagonal Defense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a-8]==a-8&&wholeGrid[a-16]==playerColor&&wholeGrid[a-24]==playerColor){
					if(((a-8)/7)+1==getColumn(a-8)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-8),lowerbound-(getColumn(a-8)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-8),lowerbound-(getColumn(a-8)*40),computerColor);
						wholeGrid[(getColumn(a-8)-1)*7+getIncrement(a-8)]=computerColor;
						checkWin();
						incrementColumn(a-8);
						counter=1;
						//printAlgorithm("Middle Forward Diagonal Defense 1");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=25;a<=42;a++){
			if(a%7>=4||a%7==0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a-8]==playerColor&&wholeGrid[a-16]==a-16&&wholeGrid[a-24]==playerColor){
					if(((a-16)/7)+1==getColumn(a-16)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-16),lowerbound-(getColumn(a-16)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-16),lowerbound-(getColumn(a-16)*40),computerColor);
						wholeGrid[(getColumn(a-16)-1)*7+getIncrement(a-16)]=computerColor;
						checkWin();
						incrementColumn(a-16);
						counter=1;
						//printAlgorithm("Middle Forward Diagonal Defense 2");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==a&&wholeGrid[a-6]==playerColor&&wholeGrid[a-12]==playerColor&&wholeGrid[a-18]==playerColor){
					if((a/7)+1==getColumn(a)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
						wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
						checkWin();
						incrementColumn(a);
						counter=1;
						//printAlgorithm("Left Backward Diagonal Defense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a-6]==playerColor&&wholeGrid[a-12]==playerColor&&wholeGrid[a-18]==a-18){
					if(((a-18)/7)+1==getColumn(a-18)||((a-18)%7==0&&(a-18)/7==getColumn(7))){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-18),lowerbound-(getColumn(a-18)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-18),lowerbound-(getColumn(a-18)*40),computerColor);
						wholeGrid[(getColumn(a-18)-1)*7+getIncrement(a-18)]=computerColor;
						checkWin();
						incrementColumn(a-18);
						counter=1;
						//printAlgorithm("Right Backward Diagonal Defense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a-6]==a-6&&wholeGrid[a-12]==playerColor&&wholeGrid[a-18]==playerColor){
					if(((a-6)/7)+1==getColumn(a-6)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-6),lowerbound-(getColumn(a-6)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-6),lowerbound-(getColumn(a-6)*40),computerColor);
						wholeGrid[(getColumn(a-6)-1)*7+getIncrement(a-6)]=computerColor;
						checkWin();
						incrementColumn(a-6);
						counter=1;
						//printAlgorithm("Middle Backward Diagonal Defense 1");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=22;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==playerColor&&wholeGrid[a-6]==playerColor&&wholeGrid[a-12]==a-12&&wholeGrid[a-18]==playerColor){
					if((a-12/7)+1==getColumn(a-12)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a-12),lowerbound-(getColumn(a-12)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a-12),lowerbound-(getColumn(a-12)*40),computerColor);
						wholeGrid[(getColumn(a-12)-1)*7+getIncrement(a-12)]=computerColor;
						checkWin();
						incrementColumn(a-12);
						counter=1;
						//printAlgorithm("Middle Backward Diagonal Defense 2");
						break;
					}
				}
			}
		}
	}

	//STRATEGIC

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==a&&wholeGrid[a+1]==playerColor&&wholeGrid[a+2]==playerColor&&wholeGrid[a+3]==a+3){
					if(((a/7)+1==getColumn(a)&&((a+3)/7)+1==getColumn(a+3)&&getColumn(a)==getColumn(a+3))||((a+3)%7==0&&(a+3)/7==getColumn(7))&&getColumn(a)==getColumn(7)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
						wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
						checkWin();
						incrementColumn(a);
						counter=1;
						//printAlgorithm("Two Horizontal Adjacent Defense");
						break;
					}
				}
			}
		}
	}

	if(counter!=1){
		for(a=1;a<=42;a++){
			if(a%7<=4&&a%7!=0){
				if(wholeGrid[a]==a&&wholeGrid[a+1]==computerColor&&wholeGrid[a+2]==computerColor&&wholeGrid[a+3]==a+3){
					if(((a/7)+1==getColumn(a)&&((a+3)/7)+1==getColumn(a+3)&&getColumn(a)==getColumn(a+3))||((a+3)%7==0&&(a+3)/7==getColumn(7))&&getColumn(a)==getColumn(7)){
						delay(500);
						setcolor(computerColor);
						circle(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),20);
						setfillstyle(INTERLEAVE_FILL,computerColor);
						floodfill(getCircleXCoordinate(a),lowerbound-(getColumn(a)*40),computerColor);
						wholeGrid[(getColumn(a)-1)*7+getIncrement(a)]=computerColor;
						checkWin();
						incrementColumn(a);
						counter=1;
						//printAlgorithm("Two Horizontal Adjacent Offense");
						break;
					}
				}
			}
		}
	}

	//RANDOM

	if(counter!=1){
		computerRandomMove();
	}
}

void computerRandomMove(){
	while(1){
		int random=1+rand()%7;
		if(getColumn(random)<=6){
			delay(500);
			setcolor(computerColor);
			circle(getCircleXCoordinate(random),lowerbound-(getColumn(random)*40),20);
			setfillstyle(INTERLEAVE_FILL,computerColor);
			floodfill(getCircleXCoordinate(random),lowerbound-(getColumn(random)*40),computerColor);
			wholeGrid[(getColumn(random)-1)*7+getIncrement(random)]=computerColor;
			checkWin();
			incrementColumn(random);
			break;
		}
	}
	//printAlgorithm("Random");
}