int randomizer (){
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
void NameSelection (){
	printf("The class photographer named\n");
	scanf("%s",nNameChecker ((name[i])))
	printf("stays late at school to investigate the case of a missing classmate...\n");
	printf("Little does %s know he/she is not alone in the building…\n",(name[i]));

}


// check sleep function : https://linuxhint.com/sleep-function-c/ 
int nQuiz (){
int nAnswer // r u planning to code ur quizzes in one function?
			// yes, is that bad??
	switch(randomizer ()) {
	case 1 :
	printf("if one year for Onis is equivalent to seven human years.\n");
	printf("How long has an Oni been haunting a 37 year old human\n ");
	printf("considering the Oni has been haunting since birth, in Oni years?\n");
	printf("%s\n%s\n%s\n%s\n", "[1] 37 years",
				   "[2] 1 year",
				   "[3] 259 years",
				   "[4] None of the above."); //suggestion
	break;
	case 2 :
	printf("The person who built it sold it. The person who bought it never used it.\n ");
	printf("The person who used it never saw it. What is it?\n");
	printf("%s\n%s\n%s\n%s\n", "[1] A car",
				   "[2] A coffin",
				   "[3] A house",
				   "[4] All of the above."); //suggestion
	break;
	case 3 :
	printf("If a pumpkin pie weighs four pounds and is sliced in half while each half is\n ");
	printf("sliced into thirds, what is the weight, in ounces, of each slice?\n");
	printf("(HINT: a pound equals sixteen ounces)\n");
         	printf("%s\n%s\n%s\n%s\n", "[1] 64",
				   "[2] 4",
				   "[3] 16",
				   "[4] 8");
	break;
	
	}
}
int nFirstArithmeticQuiz (){
	printf("if one year for Onis is equivalent to seven human years.\n");
	printf("How long has an Oni been haunting a 37 year old human\n ");
	printf("considering the Oni has been haunting since birth, in Oni years?\n");
	printf("%s\n%s\n%s\n%s\n", "[1] 37 years",
				   "[2] 1 year",
				   "[3] 259 years",
				   "[4] None of the above.");
	return 0;
}
int nSecondArithmeticQuiz (){
	printf("The person who built it sold it. The person who bought it never used it.\n ");
	printf("The person who used it never saw it. What is it?\n");
	printf("%s\n%s\n%s\n%s\n", "[1] A car",
				   "[2] A coffin",
				   "[3] A house",
				   "[4] All of the above.");
	return 0;
}
int nFirstLogicalQuiz (){
	printf("If a pumpkin pie weighs four pounds and is sliced in half while each half is\n ");
	printf("sliced into thirds, what is the weight, in ounces, of each slice?\n");
	printf("(HINT: a pound equals sixteen ounces)\n");
    printf("%s\n%s\n%s\n%s\n", "[1] 64",
				   "[2] 4",
				   "[3] 16",
				   "[4] 8");
	return 0;
}
int nNameChecker ()
{
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
                        puts("Valid");
                else 
                        puts("Invalid");
        return 0;
}
