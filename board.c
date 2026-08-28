#include <stdio.h>
#include "structures.h"


void Board_Initialization(Cell board[])
{
    for (int i = 0; i < 100; i++)
    {
        board[i] = (Cell){
            .Square_Id = i,
            .Cell_Type = Square_None,
            .Transporting_Cell = 0
        };
    }


//Initializing Ladders

    board[1] = (Cell){
            .Square_Id = 1,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 22
        };

    board[7] = (Cell){
            .Square_Id = 7,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 33
        };

    board[19] = (Cell){
            .Square_Id = 19,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 76
        };

    board[31] = (Cell){
            .Square_Id = 31,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 67
        };


    board[40] = (Cell){
            .Square_Id = 40,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 78
        };

    board[73] = (Cell){
            .Square_Id = 73,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 87
        };

    board[81] = (Cell){
            .Square_Id = 81,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 99
        };

    board[84] = (Cell){
            .Square_Id = 84,
            .Cell_Type = Square_Ladder,
            .Transporting_Cell = 94
        };


//Initializing Snakes

    board[28] = (Cell){
	.Square_Id = 28,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 9
    };


    board[37] = (Cell){
	.Square_Id = 37,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 14
    };

    board[46] = (Cell){
	.Square_Id = 46,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 5
    };


    board[52] = (Cell){
	.Square_Id = 52,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 32
    };


    board[61] = (Cell){
	.Square_Id = 61,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 36
    };


    board[85] = (Cell){
	.Square_Id = 85,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 53
    };


    board[91] = (Cell){
	.Square_Id = 91,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 69
    };


    board[96] = (Cell){
	.Square_Id = 96,
	.Cell_Type = Square_Snake,
	.Transporting_Cell = 24
    };

}
