/*********************************************************************************************************
This is to certify that this project is my own work, based on my personal efforts in studying and applying the concepts 
learned. I have constructed the functions and their respective algorithms and corresponding code by myself. The 
program was run, tested, and debugged by my own efforts. I further certify that I have not copied in part or whole or 
otherwise plagiarized the work of other students and/or persons.
Eros Aneelouv A. Gonzaga, DLSU ID# 12120952
*********************************************************************************************************/
#include "utils.h"


int main() 
{
	//Variables
	int i;
	int over;
	int nChoice;
	int Flag;
	int nLife = 3;
	NovelData story, *temp;
	temp = &story;



	srand(time(NULL)); // randomizes seed
	// printf("welcome to teyvat!\n");
	// for (i = 0; i < strlen(phrase); i++)
	// int i;
	// char phrase[50] = "greetings traveller
	// {
		
	// 	printf("%c", phrase[i]);
	// 	Sleep (1);
	// }
	// printf("greetings traveller");

	Introduction ();
	//NameSelection (temp->character.name);
	Hall ();
	nChoice = HallChoice ();
	if (nChoice == 1){
       Classroom ();
	   InvestigateLockers ();
	}
	else if (nChoice == 2){
		Library ();
	}
	
	

	printf("");

	return 0;
}
