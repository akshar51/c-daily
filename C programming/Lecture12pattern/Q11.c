#include<stdio.h>

main(){
	//          *
	//        * * * 
	//      * * * * * 
	//    * * * * * * *
	//  * * * * * * * * *
	int i,j,space;
	for(i=1;i<=5;i++){
		for(space=i;space<5;space++){
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("* ");
		}
		printf("\n");
	}
}
