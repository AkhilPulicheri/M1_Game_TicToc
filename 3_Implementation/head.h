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

void layout_frame(char *cont[3][3]);
void update_value(char input_number, int player, char *cont[3][3]);
int check_winner(char *cont[3][3]);
int filled_up(char *cont[3][3]);


