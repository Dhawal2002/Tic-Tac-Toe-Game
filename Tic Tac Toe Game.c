#include<stdio.h>
#include<conio.h>

int checkWinner();
void drawDesign();
char box[10]={'o','1','2','3','4','5','6','7','8','9'};

int main()
{
	int player = 1,i,choice;
	char mark;
	printf("Enter value of i='-1,0,1'\n");
	scanf("%d",&i);
	while(i == -1)
	{
		drawDesign();
		 player = (player % 2) ? 1 : 2;
		 printf("Player %d ,enter the choice :",player);
		 scanf("%d",&choice);
		 mark = ( player == 1 ) ? 'X' : 'O';
		 if(choice == 1 && box[1] == '1')
		    box[1] = mark;
		  else if(choice == 2 && box[2] == '2')
		    box[2] = mark;
		    else if(choice == 3 && box[3] == '3')
		           box[3] = mark;
		           else if(choice == 4 && box[4] == '4')
		                   box[4] = mark;
		                   else if(choice == 5 && box[5] == '5')
		                          box[5] = mark;
		                          else if(choice == 6 && box[6] == '6')
		                                   box[6] = mark;
		                                   else if(choice == 7 && box[7] == '7')
		                                          box[7] = mark;
		                                          else if(choice == 8 && box[8] == '8')
		                                                  box[8] = mark;
		                                                  else if(choice == 9 && box[9] == '9')
		                                                          box[9] = mark;
		                                                          else 
		                                                          {
		                                                          	printf("Invalid option!!!  Please input valid option\n");
		                                                          	player--;
		                                                          	getch();
																  }
																  i = checkWinner();
																  player++;
																   getch();
		    
		 
    }

    if(i == 1)
    {
    	printf("==>Winner is Player %d<==",player--);
	}
	else
	{
		printf("==> Game Draw <==");
	}
	return 0;
	
}

int checkWinner()
{
	if(box[1] == box[2] && box[2] == box[3])
	return 1;
	else if(box[4] == box[5] && box[5] == box[6])
	return 1;
	else if(box[7] == box[8] && box[8] == box[9])
	return 1;
	else if(box[1] == box[4] && box[5] == box[7])
	return 1;
	else if(box[2] == box[5] && box[5] == box[8])
	return 1;
	else if(box[3] == box[6] && box[6] == box[9])
	return 1;
	else if(box[1] == box[5] && box[5] == box[9])
	return 1;
	else if(box[3] == box[5] && box[5] == box[7])
	return 1;
	else if(box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
	return 0;
	else 
	return -1;
	
}

void drawDesign()
{
	
	printf("\n\n\t**##$$==>WELCOME TO Tic-Tac-Toe GAME<==$$##**\n\n");
	printf("======>Player1 (X) - Player2 (O)<====== \n\n");
	printf("     |     |     \n");
	printf("  %C   |  %c   |  %C   \n",box[1],box[2],box[3]);
	printf("_____ | _____ | _____\n");
	printf("     |     |     \n");
	printf("  %C   |  %c   |  %C   \n",box[4],box[5],box[6]);
	printf("_____ | _____ | _____\n");
	printf("     |     |     \n");
	printf("  %C   |  %c   |  %C   \n",box[7],box[8],box[9]);
	printf("_____ | _____ | _____\n");
}
