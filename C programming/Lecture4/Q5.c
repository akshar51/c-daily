#include<stdio.h>

main(){
	int a = 7;
	int b = 3;
	printf("%d%4d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d%4d",a,b);
	

}
