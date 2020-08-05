#include<stdio.h>
#include<stdlib.h>
char player_one_char,player_two_char;
int count=1;
int user_index,game_over = 0;
char input_arr[3][3];
char winning_char ;
int check_game_status(){
if(count <=9){
for(int i=0;i<3;i++){
  if((input_arr[i][0] == 'o' || input_arr[i][0] == 'x') &&input_arr[i][0] == input_arr[i][1] && input_arr[i][1]== input_arr[i][2] ){
    winning_char = input_arr[i][0];
    return 1;}
  }
for(int j=0;j<3;j++){
if((input_arr[0][j] == 'o' || input_arr[0][j] == 'x') && input_arr[0][j] == input_arr[1][j] && input_arr[1][j]== input_arr[2][j] ){
    winning_char = input_arr[0][j];
    return 1;
  }  
 } 
if((input_arr[0][0] == 'o' || input_arr[0][0] == 'x') && input_arr[0][0] == input_arr[1][1] && input_arr[1][1] == input_arr[2][2]){
  winning_char = input_arr[0][0];
  return 1;}
if((input_arr[1][1] == 'o' || input_arr[1][1] == 'x') && input_arr[0][2] == input_arr[1][1] && input_arr[1][1] == input_arr[2][0]){
  winning_char = input_arr[1][1];
  return 1;}
if(count == 9){
winning_char = 'd';
return 1;}
return 0;   
}

}
void scan_and_print(){
char arr[9] = {'1','2','3','4','5','6','7','8','9'};
int player_input_index;
while(game_over != 1){
printf("Choose the index from below where you want to put %c\n",(count%2 == 0)?player_two_char:player_one_char);

printf("%c | %c | %c\n_________\n%c | %c | %c\n_________\n%c | %c | %c\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);
scanf("%d",&player_input_index);
*(&input_arr[0][0]+player_input_index-1) = (count%2 ==0)?player_two_char:player_one_char;
arr[player_input_index-1] = (count%2==0)?player_two_char:player_one_char;
 game_over = check_game_status();
 //printf("%c ",winning_char);
 count++;
 system("clear");
  }
if(winning_char == player_one_char){
 printf("Player 1 is winner");}
else if(winning_char == player_two_char){
 printf("Player 2 is winner");}
else printf("Match is drawn");    
}
void gaming_setup(){

printf("Player 1 :(enter one of either o or x)\n");
scanf("%c",&player_one_char);
if(player_one_char == 'o'){
player_two_char = 'x';
}
else player_two_char = 'o';
}

void greet(int gaming_count){
if(gaming_count ==0){
   printf("Welcome to Tic Tac Toe\n");
}
else printf("Welcome back\n");

}

int main(){
 system("clear");
 int gaming_count = 0;
 greet(gaming_count);
 gaming_setup();
 scan_and_print();

}
