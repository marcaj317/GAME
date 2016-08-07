	/* ----------------------------------------------------------------------------------
   ECE71 Project 
   Marc Abou Jaoude
   ---------------------------------------------------------------------------------- */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int TotalScore = 0;
int rounds = 0;
int Computer;
int User;

void Lose(){
	TotalScore--;
	if(TotalScore < 0) 
		TotalScore = 0;
}

void Win(){
	TotalScore++;
	if(TotalScore < 0)
		TotalScore = 0;
}

void RPS(){
	enum Hands{
		
	/*Rock = 0, Paper = 1, Scissors = 2, EXIT = 3*/
	Rock, Paper, Scissor, Exit
	
	};
	
	printf("\n You are playing ROCK/PAPER/SCISSORS \n");
    
    /*input and check rounds from the user */
    printf("\nEnter how many rounds you want to play: ");
	scanf("%i", &rounds);
	if(rounds <= 0){
	    do{
			printf("\nEnter how many rounds you want to play: ");
			scanf("%i", &rounds);
			if(rounds > 0)
				break;
		}while(rounds <= 0);
	}
	
	/*Loop the number of rounds */
	for(int x = 0; x <= rounds; x++){
	
		Computer = rand() % 2; /*random number between 0 and 2*/
		
		printf("\nSelect a value... \n 0: Rock \n 1: Paper \n 2: Scissors \n 3: Exit \n Enter Value: ");
		
		scanf("%i", &User);
		
		if(User == Exit) /*if user wants to exit, go back to main*/
  			break;
  
		if(User == Computer){
			printf("\nDraw! Total Score: %i\n", TotalScore);
			rounds++;
		}
		
  		/*Check who wins and adjust score*/
		if(User == Rock && Computer == Paper)
		{
			Lose();
  			printf("\nYou Lose! You chose Rock, Computer chose Paper. Total Score: %i\n", TotalScore);
  		}
  		
		if(User == Rock && Computer == Scissor)
 		{
 			Win();
		 	printf("\nYou Win! You chose Rock, Computer chose Scissors. Total Score: %i\n", TotalScore);
		}	
  
		if(User == Paper && Computer == Rock)
  		{
 			Win();	
			printf("\nYou win! You chose Paper, Computer chose Rock. Total Score: %i\n", TotalScore);
		} 
		 
		if(User == Paper && Computer == Scissor)
		{
			Lose();
  			printf("\nYou Lose! You chose Paper, Computer chose Scissor. Total Score: %i\n", TotalScore);
		}
		
		if(User == Scissor && Computer == Paper)
		{
 			Win();
 			printf("\nYou win! You chose Scissor, Computer chose Paper. Total Score: %i\n", TotalScore);
 		}
  
		if(User == Scissor && Computer == Rock)
		{
			Lose();
  			printf("\nYou Lose! You chose Scissor, Computer chose Rock. Total Score: %i\n", TotalScore);
  		}
  		
  		/*if user inputs invalid values*/
  		if(User > Exit || User < Rock)
			printf("\nError: Enter an acceptable value\n");
	}
}

void RPSLS(){
	
	enum Hand{
		
	/*Rock = 0, Paper = 1, Scissors = 2, Lizard = 3, Spock = 4, EXIT = 5*/
	Rock, Paper, Scissor, Lizard, Spock, Exit
	
	};
	
	printf("\n You are playing ROCK/PAPER/SCISSORS/LIZARD/SPOCK \n");
    
    /*input rounds from the user */
    printf("\nEnter how many rounds you want to play: ");
	scanf("%i", &rounds);
	if(rounds <= 0){
	    do{
			printf("\nEnter how many rounds you want to play: ");
			scanf("%i", &rounds);
			if(rounds > 0)
				break;
		}while(rounds <= 0);
	}
	
	/*loop number of rounds*/
	for(int x = 0; x <= rounds; x++){
		Computer = rand() % 4;
		
		printf("\nSelect a value... \n 0: Rock \n 1: Paper \n 2: Scissors \n 3: Lizard \n 4. Spock \n 5. Exit \n Enter Value: ");
		
		scanf("%i", &User);
		
		if(User == Exit)
  			break;
  
		if(User == Computer){
			printf("\nDraw! Total Score: %i\n", TotalScore);
			rounds++;
		}
		/*check who wins and adjust score */  
		if(User == Rock && Computer == Paper)
		{
			Lose();
  			printf("\nYou Lose! You chose Rock, Computer chose Paper. Total Score: %i\n", TotalScore);
		}
		if(User == Rock && Computer == Scissor)
		{	
			Win();
 			printf("\nYou Win! You chose Rock, Computer chose Scissors. Total Score: %i\n", TotalScore);
 		}
 		
 		if(User == Rock && Computer == Lizard)
 		{
 			Win();
  			printf("\nYou win! You chose Rock, Computer chose lizard. Total Score: %i\n", TotalScore);
  		}
  		if(User == Rock && Computer == Spock)
  		{
			Lose();
  			printf("\nYou Lose! You chose Rock, Computer chose Spock. Total Score: %i\n", TotalScore);
  		}
		if(User == Paper && Computer == Rock)
		{
 			Win();
  			printf("\nYou win! You chose Paper, Computer chose Rock. Total Score: %i\n", TotalScore);
		}
		if(User == Paper && Computer == Scissor)
		{
			Lose();
  			printf("\nYou Lose! You chose Paper, Computer chose Scissor. Total Score: %i\n", TotalScore);
  		}
  		if(User == Paper && Computer == Lizard)
  		{
			Lose();
  			printf("\nYou Lose! You chose Paper, Computer chose Lizard. Total Score: %i\n", TotalScore);
  		}
  		if(User == Paper && Computer == Spock)
  		{
 			Win();
  			printf("\nYou win! You chose Paper, Computer chose Spock. Total Score: %i\n", TotalScore);
  		}
		if(User == Scissor && Computer == Paper)
		{
 			Win();
 			printf("\nYou win! You chose Scissor, Computer chose Paper. Total Score: %i\n", TotalScore);
  		}
		if(User == Scissor && Computer == Rock)
		{
			Lose();
  			printf("\nYou Lose! You chose Scissor, Computer chose Rock. Total Score: %i\n", TotalScore);
  		}
  		if(User == Scissor && Computer == Lizard)
  		{
 			Win();
 			printf("\nYou win! You chose Scissor, Computer chose Lizard. Total Score: %i\n", TotalScore);
 		}
 		if(User == Scissor && Computer == Spock)
 		{
			Lose();
 			printf("\nYou Lose! You chose Scissor, Computer chose Spock. Total Score: %i\n", TotalScore);
 		}
 		if(User == Lizard && Computer == Paper)
 		{
 			Win();
 			printf("\nYou Win! You chose Lizard, Computer chose Paper. Total Score: %i\n", TotalScore);
 		}
 		if(User == Lizard && Computer == Rock)
 		{
			Lose();
 			printf("\nYou Lose! You chose Lizard, Computer chose Rock. Total Score: %i\n", TotalScore);
 		}
 		if(User == Lizard && Computer == Scissor)
 		{
			Lose();
 			printf("\nYou Lose! You chose Lizard, Computer chose Scissor. Total Score: %i\n", TotalScore);
 		}
 		if(User == Lizard && Computer == Spock)
 		{
 			Win();
 			printf("\nYou Win! You chose Lizard, Computer chose Spock. Total Score: %i\n", TotalScore);
 		}
 		if(User == Spock && Computer == Lizard)
 		{
			Lose();
 			printf("\nYou Lose! You chose Spock, Computer chose Lizard. Total Score: %i\n", TotalScore);
 		}
 		if(User == Spock && Computer == Paper)
 		{
			Lose();
 			printf("\nYou Lose! You chose Spock, Computer chose Paper. Total Score: %i\n", TotalScore);
 		}
 		if(User == Spock && Computer == Scissor)
 		{
 			Win();
 			printf("\nYou Win! You chose Spock, Computer chose Scissor. Total Score: %i\n", TotalScore);
 		}
 		if(User == Spock && Computer == Rock)
 		{
 			Win();
 			printf("\nYou Win! You chose Spock, Computer chose Rock. Total Score: %i\n", TotalScore);
 		}
 		
 		/*if user enters invalid value*/
  		if(User > Exit || User < Rock)
			printf("\nError: Enter an acceptable value\n");
	}
}

void Rules(){
	printf("\n\n Rock beats Scissors or Lizard \n Paper beats Rock or Spock \n Scissors beats Paper or Lizard \n Lizard beats Paper or Spock \n Spock beats Scissors or Rock \n\n");
}

int main(void){
	enum Choice{
		/* nothing = 0, playRPS = 1, playRPSLS = 2, SeeRules = 3, Exit = 4 */
		nothing, playRPS, playRPSLS, SeeRules, Exit
	};
	int Selection;
	Selection = nothing;
	
	do{ /*loop until user exits*/
	
		printf("\nMAIN MENU: \nWhat would like to play?\n To play Rock/Paper/Scissors enter 1 \n To play Rock/Paper/Scsissors/Lizard/Spock enter 2 \n To see the rules enter 3 \n To Exit enter 4 \n Total Score = %i\nEnter Value: ", TotalScore);
		scanf("%i", &Selection);
		
		switch (Selection){
			case playRPS:
				RPS();
				break;
				
			case playRPSLS:
				RPSLS();
				break;
				
			case SeeRules:
				Rules();
				break;
				
			case Exit:
				break;
				
			default:
				printf("\n Enter one of the listed values. \n");
		}
	}while(Selection != Exit);
	return 0;
} 
