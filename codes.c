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

void Hall (NovelData *story){
	printf("As %s walk out to the hall...\n", (story->name));
	printf("%s decides whether to go and investigate in the library or in one of the classrooms where classmates have disappeared...\n", (story->name));
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


void Classroom (NovelData *story){
    printf("As %s enters this dark and gloomy classroom...\n",(story->name));
	printf("%s notices something odd with the lockers...\n",(story->name));
	printf("One of them is rattled but %s cannot tell which.\n",(story->name));
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
int Library (NovelData *story){
	printf("%s walks into the library...\n",(story->name));
	printf("%s sees some bookshelves...\n",(story->name));
	printf("One of the bookshelves shook on its own...\n");
	printf("Some books fell on the floor. \n");
}

int CheckBookshelves (){
	int nChoice;
	do	
	{
		printf("Would you like to investigate the bookshelves?\n");
		printf("1) Yes\n");
		printf("2) No\n");
		scanf("%d", &nChoice);
	} while (nChoice != 1 && nChoice != 2);
	
	return nChoice;
	}


void Light (NovelData *story){
	printf("As %s walks further into the library...\n",(story->name));
	printf("%s sees a peculiar source of light...\n",(story->name));
	printf("%s walks slowly to the light source...\n",(story->name));
	printf("It turned out to be a candle.\n",(story->name));
}


int PickUp (){
  int nChoice;
do	
  {
	printf("Do you wish to pick it up?\n");
	printf("1) Yes\n");
	printf("2) No\n");
	scanf("%d", &nChoice);
  } while (nChoice != 1 && nChoice != 2);
 
 return nChoice;
}

int InvestigateBookShelvesTRUE(NovelData *story){
	printf("As %s investigates the bookshelves...\n",(story->name));
	printf("A grim looking book jumped out on of the bookshelves and opened itself up...\n");
	printf("It called itself Truth...\n");
	printf("Truth wanted to take %s into its fairytale...\n",(story->name));
	printf("But would not do so under one condition...\n",(story->name));
	printf("If %s is able to answer his question correctly...\n",(story->name));
	
}

//Endings
int OkEnding1 (NovelData *story){
	int over;
	printf("As %s picks up the bracelet...\n",(story->name));
	printf("One of the lockers rattled once more...\n");
	printf("Alerting the figure in the hallway and it turned out to be...\n");
	printf("Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki tries to attack %s but was dispelled...\n",(story->name));
	printf("by your diseased classmate that owned the bracelet...\n");
	printf("And she said “leave right now and return the bracelet to my mother.”\n");
	printf("Ok Ending\n");
	return over = 1;
}

int OkEnding2 (NovelData *story){
	int over;
	printf("As %s passed the blackboards test....\n",(story->name));
	printf("The blackboard spells out \"leave now or be forever lost\"...\n");
	printf("%s leaves the school.\n",(story->name));
	printf("Ok Ending\n");
	return over = 1;
}

int OkEnding3 (NovelData *story){
	int over;
	printf("%s does not have either items to excorise the Scissor Lady...\n",(story->name));
	printf("Yet the Scissor Lady fleed...\n");
	printf("%s classmates are safe, but only for today.\n",(story->name));
	printf("Ok Ending\n");
	return over = 1;
}

int BadEnding1 (NovelData *story){
	int over;
	printf("The blackboard screeches as if it had fingernails going through it...\n");
	printf("It alerts the mysterious figure and it turned out to be...\n");
	printf("Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n",(story->name));
	printf("Bad Ending\n");
	return over = 1;
}

int BadEnding2 (NovelData *story){
	int over;
	printf("%s decides to take a closer look at the figure.\n",(story->name));
	printf("It turned out to be Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n",(story->name));
	printf("Bad Ending\n");
	return over = 1;
}

int BadEnding2 (NovelData *story){
	int over;
	printf("As %s failed to answer Truth's puzzle...\n",(story->name));
	printf("Truth became two times his size and sucked %s\n",(story->name));
	printf("As Truth closes his pages, he belches...\n");
	printf("%s was eaten by Truth.\n",(story->name));
	printf("Bad Ending\n");
	return over = 1;
}

int BadEnding3 (NovelData *story){
	int over;
	printf("%s decides to take a closer look at the figure.\n",(story->name));
	printf("It turned out to be Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n",(story->name));
	printf("Bad Ending\n");
	return over = 1;
}

int BestEnding (NovelData *story){
	int over;
	printf("%s both items to exorcise the Scissor Lady...\n",(story->name));
	printf("The Scissor Lady turned into ash...\n");
	printf("%s won't have any of his/er classmates dissappear ever again!\n",(story->name));
	printf("Best Ending\n");
	return over = 1;
}

int TragicEnding (NovelData *story){
	int over;
	printf("As %s walks past the bracelet\n",(story->name));
	printf("A scream was heard saying \"Why did you leave me?\"\n");
	printf("The figure in the hallway heard the scream and it turned out to be...\n");
	printf("It turned out to be Miruki, one of the marked souls by the Scissor Lady!!\n");
	printf("Miruki doesn't hesitate to strike an unarmed %s.\n",(story->name));
	printf("Tragic Ending\n");
	return over = 1;
}

int GoodEnding (NovelData *story){
	int over;
	printf("%s only has one of the items to exorcise the Scissor Lady...\n",(story->name));
	printf("The Scissor Lady was visibly hurt and fleed away...\n");
	printf("The Scissor Lady will not haunt your classmates for a very long time.\n");
	printf("Good Ending\n");
	return over = 1;
}




// check sleep function : https://linuxhint.com/sleep-function-c/ 
int nQuiz (NovelData *story){
int nWhichQuiz = 0;
	switch(randomizer (nWhichQuiz)) {
	case 1 :
	nFirstArithmeticPuzzle (story);
	break;
	case 2 :
	nSecondArithmeticPuzzle (story);
	break;
	case 3 :
	nFirstLogicalPuzzle (story);
	break;
	
	}
}

int nFirstArithmeticPuzzle (NovelData *story){
	int nAnswer;
	printf("if one year for Onis is equivalent to seven human years.\n");
		printf("How long has an Oni been haunting a 37 year old human\n ");
		printf("considering the Oni has been haunting since birth, in Oni years?\n");
		printf("%s\n%s\n%s\n%s\n", 
				"[1] 37 years",
				"[2] 1 year",
				"[3] 259 years",
				"[4] None of the above.");
	do {	
		if(story->life == 0) {
			return 0;
		}
		scanf("%d",nAnswer);
		if(nAnswer == 3) 
			return 1;
		if(nAnswer != 3) {
			story->life--;
			printf ("Incorrect answer! Try again..\n");
			printf("%s\n%s\n%s\n%s\n",
					"[1] 37 years",
					"[2] 1 year",
					"[3] 259 years",
					"[4] None of the above.");
		}
	} while(nAnswer != 3);

	return 0;
}


int nSecondArithmeticPuzzle (NovelData *story){
	int nAnswer;
	do {printf("The person who built it sold it. The person who bought it never used it.\n ");
	printf("The person who used it never saw it. What is it?\n");
	printf("%s\n%s\n%s\n%s\n", "[1] A car",
				   "[2] A coffin",
				   "[3] A house",
				   "[4] All of the above.");
		 if(nAnswer == 3) return 1; }
		 while(nAnswer != 3);
	{
		story->character.life--;
		printf ("Incorrect answer! Try again..\n");
	    printf("%s\n%s\n%s\n%s\n", "[1] A car",
				   "[2] A coffin",
				   "[3] A house",
				   "[4] All of the above.");
				   scanf("%d",nAnswer);
	};
	return 0;

}
int nFirstLogicalPuzzle (NovelData *story){
	int nAnswer;
	do{ printf("If a pumpkin pie weighs four pounds and is sliced in half while each half is\n ");
	printf("sliced into thirds, what is the weight, in ounces, of each slice?\n");
	printf("(HINT: a pound equals sixteen ounces)\n");
    printf("%s\n%s\n%s\n%s\n", "[1] 64",
				   "[2] 4",
				   "[3] 16",
				   "[4] 8");
	 if(nAnswer == 3) return 1; }
	 while(nAnswer != 3);
	{
		story->character.life--;
		printf ("Incorrect answer! Try again..\n");
        printf("%s\n%s\n%s\n%s\n", "[1] 64",
				   "[2] 4",
				   "[3] 16",
				   "[4] 8");
				   scanf("%d",nAnswer);
	};
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


