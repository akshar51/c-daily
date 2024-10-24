#include<stdio.h>

main(){
	//SUM OF ELEMENT USING POINTER
	int i,sum=0;
	int *ptr;
	int str[5]={10,20,30,40,60};
	for(i=0;i<5;i++){
		ptr=&str[i];
		sum=sum + *ptr;
	}
	printf("%d",sum);
}
