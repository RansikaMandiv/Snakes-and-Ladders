#ifndef STRUCTURES_H
#define STRUCTURES_H

#define Total_Players 4
#define true 1
#define false 0


typedef enum{

    Player_Red,
    Player_Green,
    Player_Blue,
    Player_Yellow,

}Player_Colors;

typedef enum{

    Square_None,
    Square_Snake,
    Square_Ladder,
}Square_Type;

typedef struct{

    int Player_Id;
    int Player_Position;
    int Player_Temp_Dice_Value;
    char Player_Name[20];

}Player;

typedef struct{

    int Square_Id;
    Square_Type Cell_Type;
    int Transporting_Cell;

}Cell;

void Board_Initialization(Cell board[]);
void Player_Initialization(Player Players_List[]);
void Start_Game(void);


#endif
