#include <stdio.h>
#include <string.h>
#include "structures.h"


void Player_Initialization(Player Players_List[])
{
    const char *Player_Names[] = {

	"Red",
	"Green",
	"Blue",
	"Yellow"
    };

    for (int i = 0; i < Total_Players; i++)
    {
	strncpy(Players_List[i].Player_Name, Player_Names[i], sizeof(Players_List[i].Player_Name) - 1);
	Players_List[i].Player_Id = (Player_Colors)i;
	Players_List[i].Player_Position = 0;
	Players_List[i].Player_Temp_Dice_Value = 0;
    }
}
