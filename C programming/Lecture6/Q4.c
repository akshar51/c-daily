#include<stdio.h>

main(){
	int a,b,c,d;
	printf("Enter a value of the first number:");
	scanf("%d",&a);
	printf("Enter a value of the second number:");
	scanf("%d",&b);
	printf("Enter a value of the third number:");
	scanf("%d",&c);
	printf("Enter a value of the fourth number:");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("%d is big",a);
			}
			else{
				printf("%d is big",d);
			}	
		}
	}
	else if(b>a){
		if(b>c){
			if(b>d){
					printf("%d is big",b);
				}
			else{
					printf("%d is big",d);
				}	
			}
		}
	else if(c>a){
		if(c>b){
			if(c>d){
					printf("%d is big",c);
				}
			else{
					printf("%d is big",d);
				}	
			}
		}
	else{
		printf("%d is big",d);
	}
	

}

