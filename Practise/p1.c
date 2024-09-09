#include<stdio.h>
main(){
	
	
	int x=1;
	
	printf("Enter your ticket\nPREMIUM or NRML\nif PREMIUM enter 1 & NRML enter 2 :");
	scanf("%d",&x);
	if (x==1){
		printf("PREMIUM TICKET");
	} 
	else{
		printf("Your ticket is NRML TICKET");
	}

}
 
