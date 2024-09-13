#include<stdio.h>

main(){
	int a,b,c,result;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	result = (a<b && a<c)?a:(b<c)?b:c;
	printf("%d is minimum",result);
}
