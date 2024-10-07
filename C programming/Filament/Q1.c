#include<stdio.h>
#include<string.h>

main(){
	// PALINDROME
	
	int l,i,j=0;
	char str[30];
	printf("Enter any string :");
	gets(str);
	l=strlen(str);
	for(i=0;i<l/2;i++){
		if(str[i]!='\0'){
			if(str[i]!=str[l-i-1]){
			j=1;
		}
		}
	}
	if(j==0){
		printf("String is palindrome.");
	}
	else{
		printf("String is not palindrome.");
	}
}
