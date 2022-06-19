
#include "utils.h"

void promptName (NovelData *story){
	puts ("Please enter your name: "); //?????
	scanf ("%s", story->name);
}

int randomizer (int nNum){
	int nNum = rand() % 3;
	return nNum;
}
	 
int nLifeCounter (int *nLife){
	nLife -= 1;
	return nLife;
}

void Introduction (){
	printf("Another one of your classmates has disappeared from school...\n");
	printf("Rumor has it, that a widowed woman has returned to haunt from the grave...\n");
	printf("A woman with the widest smile... and the sharpest scissors...\n");
	printf("Your classmate has left a notebook full of cryptic notes...\n");
	printf("One page read, \"can send her back where she belongs.\"...\n ");
	printf("After he disappeared too, you decided to study the notebook more for clues...\n");
	printf("It details a ritual that can stop the widowed woman once and for all...\n");
	printf("What's the worst thing that could happen?\n");
}

void NameSelection (NovelData *story){

	printf("The class photographer named..\n");
	promptName (story);
	while (nNameChecker (story->name) == FALSE)
	{
		puts ("Invalid input! Please enter a valid name...\n");
		printf("The class photographer named..\n");
		promptName (story);
	}
	
	printf("stays late at school to investigate the case of a missing classmate...\n");
	printf("Little does %s know he/she is not alone in the building..\n",(story->name));

}

void Hall (){
	printf("As %s walk out to the hall...\n");
	printf("%s decides whether to go and investigate in the library or in one of the classrooms where classmates have disappeared...\n");
}

int HallChoice (){
	int nChoice;
	do {
		printf("1) Classroom\n");
		printf("2) Library\n");
		scanf("%d", &nChoice);
	} while (nChoice != 1 && nChoice != 2);

	return nChoice;
}


void Classroom (){
    printf("As %s enters this dark and gloomy classroom...\n");
	printf("%s notices something odd with the lockers...\n");
	printf("One of them is rattled but %s cannot tell which.\n");
}


int InvestigateLockers (){
	int nChoice;
	do	
	{
		printf("Do you wish to investigate?\n");
		printf("1) Yes\n");
		printf("2) No\n");
		scanf("%d", &nChoice);
	}
	while (nChoice != 1 && nChoice != 2);

	return nChoice;

}

int InvestigateLockerA (){
	int nChoice;
	do	
	{
		printf("Do you wish to open locker A?\n");
		printf("1) Yes\n");
		printf("2) No\n");
		scanf("%d", &nChoice);
	}
	while (nChoice != 1 && nChoice != 2);

	return nChoice;

}

int InvestigateLockerB (){
  int nChoice;
do	
  {
	printf("Do you wish to open locker B?\n");
	printf("1) Yes\n");
	printf("2) No\n");
	scanf("%d", &nChoice);
  } while (nChoice != 1 && nChoice != 2);
 
 return nChoice;

}
	


void Library (){
	printf("As %s walks further into the library...\n");
	printf("%s sees a peculiar source of light...\n");
	printf("%s walks slowly to the light source...\n");
	printf("It turned out to be a candle.\n");
}


//Endings
int OkEnding1 (){
	int over;
	printf("As %s picks up the bracelet...\n");
	printf("One of the lockers rattled once more...\n");
	printf("Alerting the figure in the hallway and it turned out to be...\n");
	printf("Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki tries to attack %s but was dispelled...\n");
	printf("by your diseased classmate that owned the bracelet...\n");
	printf("And she said “leave right now and return the bracelet to my mother.”\n");
	printf("Ok Ending\n");
	return over = 1;
}

int OkEnding2 (){
	int over;
	printf("As %s passed the blackboards test....\n");
	printf("The blackboard spells out \"leave now or be forever lost\"...\n");
	printf("%s leaves the school.\n");
	printf("Ok Ending\n");
	return over = 1;
}

int OkEnding3 (){
	int over;
	printf("%s does not have either items to excorise the Scissor Lady...\n");
	printf("Yet the Scissor Lady fleed...\n");
	printf("%s classmates are safe, but only for today.\n");
	printf("Ok Ending\n");
	return over = 1;
}

int BadEnding1 (){
	int over;
	printf("The blackboard screeches as if it had fingernails going through it...\n");
	printf("It alerts the mysterious figure and it turned out to be...\n");
	printf("Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n");
	printf("Bad Ending\n");
	return over = 1;
}

int BadEnding2 (){
	int over;
	printf("%s decides to take a closer look at the figure.\n");
	printf("It turned out to be Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n");
	printf("Bad Ending\n");
	return over = 1;
}

int BadEnding2 (){
	int over;
	printf("%s decides to take a closer look at the figure.\n");
	printf("It turned out to be Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n");
	printf("Bad Ending\n");
	return over = 1;
}

int BadEnding3 (){
	int over;
	printf("%s decides to take a closer look at the figure.\n");
	printf("It turned out to be Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n");
	printf("Bad Ending\n");
	return over = 1;
}

int BestEnding (){
	int over;
	printf("%s both items to exorcise the Scissor Lady...\n");
	printf("The Scissor Lady turned into ash...\n");
	printf("%s won't have any of his/er classmates dissappear ever again!\n");
	printf("Best Ending\n");
	return over = 1;
}

int TragicEnding (){
	int over;
	printf("As %s walks past the bracelet\n");
	printf("A scream was heard saying \"Why did you leave me?\"\n");
	printf("The figure in the hallway heard the scream and it turned out to be...\n");
	printf("It turned out to be Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n");
	printf("Tragic Ending\n");
	return over = 1;
}

int GoodEnding (){
	int over;
	printf("%s only has one of the items to exorcise the Scissor Lady...\n");
	printf("The Scissor Lady was visibly hurt and fleed away...\n");
	printf("The Scissor Lady will not haunt your classmates for a very long time.\n");
	printf("Good Ending\n");
	return over = 1;
}



// check sleep function : https://linuxhint.com/sleep-function-c/ 
int nQuiz (){
int nWhichQuiz = 0;
	switch(randomizer (nWhichQuiz)) {
	case 1 :
	nFirstArithmeticPuzzle (int *nLife);
	break;
	case 2 :
	nSecondArithmeticPuzzle (int *nLife);
	break;
	case 3 :
	nFirstLogicalPuzzle (int *nLife);
	break;
	
	}
}

int nFirstArithmeticPuzzle (NovelData *story){
	int nAnswer = 0;
	do{	printf("if one year for Onis is equivalent to seven human years.\n");
	printf("How long has an Oni been haunting a 37 year old human\n ");
	printf("considering the Oni has been haunting since birth, in Oni years?\n");
	printf("%s\n%s\n%s\n%s\n", "[1] 37 years",
				   "[2] 1 year",
				   "[3] 259 years",
				   "[4] None of the above.");
				   scanf("%d",nAnswer);
	if(nAnswer == 3) return TRUE;
	while(nAnswer != 3)
	{
		story->character.life--;
		printf ("Incorrect answer! Try again..\n");
		printf("%s\n%s\n%s\n%s\n", "[1] 37 years",
				   "[2] 1 year",
				   "[3] 259 years",
				   "[4] None of the above.");
				   scanf("%d",nAnswer);
	};
	return FALSE;
}

int nSecondArithmeticPuzzle (){
	printf("The person who built it sold it. The person who bought it never used it.\n ");
	printf("The person who used it never saw it. What is it?\n");
	printf("%s\n%s\n%s\n%s\n", "[1] A car",
				   "[2] A coffin",
				   "[3] A house",
				   "[4] All of the above.");
	return 0;
}
int nFirstLogicalPuzzle (){
	printf("If a pumpkin pie weighs four pounds and is sliced in half while each half is\n ");
	printf("sliced into thirds, what is the weight, in ounces, of each slice?\n");
	printf("(HINT: a pound equals sixteen ounces)\n");
    printf("%s\n%s\n%s\n%s\n", "[1] 64",
				   "[2] 4",
				   "[3] 16",
				   "[4] 8");
	return 0;
}

int nNameChecker (){
        data name;
        int i, is_valid = TRUE;
        puts("Enter name (No Special characters nor numbers):  ");
        scanf (" %[^\n]s", name);
        for (i = 0; i < strlen(name); i++)
        { 
                if (IS_VALID (name[i]) == FALSE) 
                        is_valid = FALSE;
        }
                if (is_valid == TRUE) 
                        // puts("Valid");
						return 1;
                else 
                        // puts("Invalid");
						return 0;
        return 0;
}


