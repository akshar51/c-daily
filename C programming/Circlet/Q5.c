#include<stdio.h>

main(){
	//        5
	//      4 5 4
	//    3 4 5 4 3
	//  2 3 4 5 4 3 2
	//1 2 3 4 5 4 3 2 1 
	int i,j,space;
	for(i=5;i>=1;i--){
		for(space=1;space<i;space++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf(" %d",j);
		}
		for(j=4;j>=i;j--){
			printf(" %d",j);
		}
		printf("\n");
	}
}
