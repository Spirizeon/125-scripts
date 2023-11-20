#include <stdio.h>

int main(){
	char alphabet;
	scanf("%c",&alphabet);
	switch(alphabet){
		case ('a'||'e'||'i'||'o'||'u'):
			printf("Vowel");
			break;
		case !('a'||'e'||'i'||'o'||'u'):
			printf("consonant");
			break;

		}
	return 0;
}
