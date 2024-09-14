#include<stdio.h>

main(){
	int score;
	printf("Enter your score out of 100 :");
	scanf("%d",&score);
	
	//FOR GRADE
	
	switch(score/10){
		
		case 10:
		case 9:
			printf("Your Grade is A.\nExcellent work!.\n");
			break;
		
		case 8:
			printf("Your Grade is B.\nWell done.\n");
			break;
		
		case 7:
			printf("Your Grade is C.\nGood job.\n");
			break;
			
		case 6:
			printf("Your Grade is D.\nYou passed, but you could do better.\n");
			break;
			
		case 5:
			printf("Your Grade is E.\nPoor.\n");
			break;
			
		case 4:
			printf("Your Grade is F.\nSorry, you failed.\n");
			break;
		
		default :
			printf("FAIL.\n");
	}
	
	
	//ELIGIBILITY LEVEL
	
	if (score>=50){
		printf("Congratulations! You are eligible for the next level.");
	}
	else{
		printf("Please try again next time.");
	}
	
	
	
}
