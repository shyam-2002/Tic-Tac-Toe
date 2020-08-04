#include<stdio.h>
char player_one_char,player_two_char;
int count=0;
void gaming_setup(){

printf("Player 1 :(enter one of either o or x)");
scanf("%c",&player_one_char);
if(player_one_char == 'o'){
player_two_char = 'x';
}
else player_two_char = 'o';
while(game_over != 1){

printf("Choose the index from below where you want to put %c",(count%2 == 0)?player_two_char:player_one_char);
count++;
}
printf("%d | %d | %d\n______\n%d | %d | %d\n______\n%d | %d | %d",1,2,3,4,5,6,7,8,9);

}

void greet(int gaming_count){
if(gaming_count ==0){
   printf("Welcome to Tic Tac Toe\n");
}
else printf("Welcome back\n");

}

int main(){
int gaming_count = 0;


}
