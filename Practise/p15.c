#include<stdio.h>

main(){
	// A B C D E
	// A B C D
	// A B C
	// A B
	// A
	
	char i,j;
	for(i='E';i>='A';i--){
		for(j='A';j<=i;j++){
			printf(" %c",j);
		}
		printf("\n");
	}
}
