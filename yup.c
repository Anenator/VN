/*********************************************************************************************************
This is to certify that this project is my own work, based on my personal efforts in studying and applying the concepts 
learned. I have constructed the functions and their respective algorithms and corresponding code by myself. The 
program was run, tested, and debugged by my own efforts. I further certify that I have not copied in part or whole or 
otherwise plagiarized the work of other students and/or persons.
Eros Aneelouv A. Gonzaga, DLSU ID# 12120952
*********************************************************************************************************/
#include "utils.h"
#include "codes.c"

int main() 
{
	//Variables
	int nChoice;
	int nFlag = 0;
	int temp = 0;
	NovelData story;



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

	Introduction();
	NameSelection(&story);
	Hall(&story);

	nChoice = HallChoice ();

	if (nChoice == 1){
		Classroom(&story);
		if (InvestigateLockers() == 1){	
			if (InvestigateLockerA == 1){
				InvestigateLockerATRUE(&story);
				//Find bracelet
			}
			else if (InvestigateLockerB == 1){
				InvestigateLockerBTRUE(&story);
				nFlag+= PickUp(nFlag);
			}
			else {
				if (nQuiz(&story))
					OkEnding2(&story);
				else
					BadEnding1(&story);
			}
		}
	} 
	else if (nChoice == 2){
		Library(&story);
		if (CheckBookshelves() == 1){
      		InvestigateBookShelvesTRUE(&story);
	  		nQuiz (&story);
	} else Light(&story);
	nFlag+= PickUp(nFlag);
    if(nFlag == 2){
		BestEnding4(&story);
	else if (nFlag == 1)
		GoodEnding(&story);
	else if (nFlag == 0)
		OkEnding3(&story);
		

	}
	return 0;
}
