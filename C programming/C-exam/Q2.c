#include<stdio.h>
#include<string.h>

main(){
	//COUNTING OF EACH VOWEL IN THE SENTENCE AND DISPLAY THE COUNT
	
	char str[50];
	int count=0,n,i;
	
	printf("Enter the string :");
	scanf("%s",&str);
	n=strlen(str);
	for(i=0;i<n;i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			count++;
		}
	}
	printf("Number of vowel in string : %d",count);
}
