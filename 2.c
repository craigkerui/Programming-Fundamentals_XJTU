#include <stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	switch(a){
		case'I':printf("You are trying to input info");break;
		case'O':printf("You are trying to output info");break;
		case'D':printf("You are trying to make things ordered");break;
		case'Q':printf("You are about to quit");
	}
	return 0;
}
