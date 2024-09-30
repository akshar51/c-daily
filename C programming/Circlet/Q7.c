#include<stdio.h>

main(){
	// * * * * *
	// *       *
	// * * * * *
	// *
	// *
	int i,j,k;
	int n = 5;
	for(i = 0; i < n; i++){
    	printf("* ");
    }
  	printf("\n");
  	printf("*");
  	for(k = 1; k < n + 3; k++){
   		printf(" ");
  	}
  	printf("*\n");
  	for(i = 0; i < n; i++){
    	printf("* ");
    }
  	printf("\n");
  	printf("*\n*\n");
}
