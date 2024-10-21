#include<stdio.h>
int main(){
	char *ptr;
	char str[100];
	int i,count=0;
	printf("Enter any string:");
	gets(str);
	for(i=0; str[i] !='\0';i++){
		count++;
	}
	printf("The length of string is :%d",count);	
}