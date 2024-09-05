#include<stdio.h>

main(){
	int a=1;
	int b=5;
	printf("%d%3d\n",a,b);
	int swap=a; //swap=1
	a=b; //a=5
	b=swap;// b=1
	printf("%d%3d\n%d\n",a,b,swap);
	
}
