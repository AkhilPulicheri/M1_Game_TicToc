/**
 * @file game.h
 * @author Akhil Pulicheri
 * @brief A program to play tictoctoe game.
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#ifndef GAME_H
#define GAME_H

#include <stdio.h>  
#include <time.h>   
#include <stdlib.h> 
void intro();
void gameChoice();
void greet();
void markplay(int,int);
int generateRandomNumber(int);
void gameBoard();
void gameBuildForOnePlayer();
int checkWinner();
void gameBuildForTwoPlayers();
void thanks();

#endif 
