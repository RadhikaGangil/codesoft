#include<iostream>

int main()
{
    

//std::cout<<"hel    lo world";
 int answer=6;
 int guess;
 int no_of_rounds=0;
 int chances=5;
 bool gameover=false;

std::cout<<"WELCOME TO OUR NUMBER GUESSING GAME.....! \n";
std::cout<<"LETS START THE GAME\n";
std::cout<<"Ther are some rules\n 1.you have guess the correct number in minimum chances\n 2. you have only 3 attempts\n ALLTHE BEST\n";
std::cout<<"you have to guess the number between(1-10)\n ";
 while ( answer!=guess && !gameover)
 {
    if(no_of_rounds<chances){
        std::cout<<"Enter your number";
        std::cin>>guess;
        if(guess>answer){
            std::cout<<"too high\n";
            
        }
        else if(guess<answer){
            std::cout<<"too low\n";
        }
        else{
            std::cout<<"matched\n";
        }
        no_of_rounds++;
    }
    else{
        gameover=true;
    }

 }
 if(gameover)

{
    std::cout<<"YOU LOST....!\n";
}
else{
    std::cout<<"Hurrah.... YOU WIN....!\n";
}
 
 
 
    return 0;

}
