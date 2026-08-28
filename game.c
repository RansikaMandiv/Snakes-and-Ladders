#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structures.h"


int Dice_Roll(void)
{
    return (rand() % 6 + 1);
}

void Teleport_Player(int player_id,Player player_list[],Cell board[])
{
    int Player_Pos = player_list[player_id].Player_Position;

    if(board[Player_Pos].Cell_Type == Square_None)
    {
	return;
    }

    if((board[Player_Pos].Cell_Type == Square_Snake) ||
	(board[Player_Pos].Cell_Type == Square_Ladder))
    {
	player_list[player_id].Player_Position = board[Player_Pos].Transporting_Cell;
    }

    if(board[Player_Pos].Cell_Type == Square_Snake)
    {
	printf("\n  %s was eaten by a snake, back to %d!\n",player_list[player_id].Player_Name,player_list[player_id].Player_Position);
    }
    else{
	printf("\n  %s climbed a ladder to %d!\n",player_list[player_id].Player_Name,player_list[player_id].Player_Position);
    }
}

int Game_Finish_Check(int player_id,Player player_list[])
{
    if(player_list[player_id].Player_Position == 99)
    {
	return 1;
    }
    else{
	return 0;
    }
}

void Player_Moves(int player_id, Player player_list[], Cell board[])
{
    player_list[player_id].Player_Temp_Dice_Value = Dice_Roll();
    int prev_pos = player_list[player_id].Player_Position;

    if(player_list[player_id].Player_Position + player_list[player_id].Player_Temp_Dice_Value <= 99)
    {
	player_list[player_id].Player_Position += player_list[player_id].Player_Temp_Dice_Value;
    }

    printf("\n  %s rolled %d and moved from %d to %d\n",player_list[player_id].Player_Name,player_list[player_id].Player_Temp_Dice_Value,prev_pos,player_list[player_id].Player_Position);
}


void Start_Game(void)
{
    Player Players_List[Total_Players];
    Cell Board[100];
    
    Board_Initialization(Board);
    Player_Initialization(Players_List);


    printf("\n=========================================================================\n");
    printf("                         SNAKES AND LADDERS\n");
    printf("=========================================================================\n");

    printf("\nPlayers: Red, Green, Blue, Yellow\n");
    printf("\nRed will start the game.\n");


while(1)
{
    for (int i = 0; i < Total_Players; i++)
    {
	Player_Moves(i, Players_List, Board);
	Teleport_Player(i, Players_List, Board);
	
	if(Game_Finish_Check(i,Players_List) == 1)
	{
	    printf("\n  >>> %s has won the game! <<<\n",Players_List[i].Player_Name);
	    return;
	}
    }

}
}

