#include<stdio.h>

main(){
	//Alphabet Skipper
	char ch = 'a';
	do{
		printf("%c\t",ch);
		ch+=4;
	}
	while(ch<='z');
}
