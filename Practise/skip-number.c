#include<stdio.h>

main(){
	// SKIPPING NUMBER IN 1-10( skip 7)
	
	int i;
	for(i=1;i<=10;i++){
		if(i==7){
			continue;
		}
		printf("%d\n",i);
	}
}
