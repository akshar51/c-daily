#include<stdio.h>

main(){
	int math;
	int english;
	int science;
	
	printf("Enter your mathematics mark :");
	scanf("%d",&math);
	printf("Enter your english mark :");
	scanf("%d",&english);
	printf("Enter your science mark :");
	scanf("%d",&science);
	
	//Total Marks
	int total = math + english + science;
	printf("Total is %d\n",total);
	
	//Average mark
	int avg = total / 3;
	printf("Average is %d\n",avg);
	
	
	//FOR GRADE
	
	switch(avg/10){
		
		case 10:
		case 9:
			printf("Your Grade is A.Excellent work!.\n");
			break;
		
		case 8:
			printf("Your Grade is B.Well done.\n");
			break;
		
		case 7:
			printf("Your Grade is C.Good job.\n");
			break;
			
		case 6:
			printf("Your Grade is D.You passed, but you could do better.\n");
			break;
			
		case 5:
			printf("Your Grade is E.Poor.\n");
			break;
			
		case 4:
			printf("Your Grade is F.Sorry, you failed.\n");
			break;
		
		default :
			printf("FAIL.\n");
	}
	
	
	//ELIGIBILITY LEVEL
	
	if (avg>=50){
		printf("Congratulations! You are eligible for the next level.");
	}
	else{
		printf("Please try again next time.");
	}
	
	
	
}
