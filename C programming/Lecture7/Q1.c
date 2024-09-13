#include<stdio.h>

main(){
	int Language;
	int Recharge;
	printf("Press 1 for English.\nPress 2 for Hindi.\nPress 3 for Gujarati.\n\n");
	printf("Select your language:");
	scanf("%d",&Language);

	switch(Language){
		case 1:
			printf("Press 1 for Internet Recharge.\nPress 2 for Top-up Recharge.\nPress 3 for Special Recharge.\n\n");
			break;
			
		case 2:
			printf("Internet Recharge ke liye 1 dabaiye.\nTop-up Recharge ke liye 2 dabaiye.\nSpecial Recharge ke liye 3 dabaiye.\n\n");
			break;	
		
		case 3:
			printf("Internet Recharge mate 1 dabavo.\nTop-up Recharge mate 2 dabavo.\nSpecial Recharge mate 3 dabavo.\n\n");
			break;
			
		default :
			printf("No language is selected.\n\n");
			break;
	}
	
	printf("Select recharge plans :");
	scanf("%d",&Recharge);
	
	switch(Recharge){
		
		case 1 :
			printf("You have successfully done a Internet Recharge");
			break;
		
		case 2 :
			printf("You have successfully done a Top-up Recharge.");
			break;
		
		case 3 :
			printf("You have successfully done a Special Recharge");
			break;
			
		default :
			printf("No pack is selected.");
			break;
	}
	
}
