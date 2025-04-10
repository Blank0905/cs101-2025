#include <stdio.h>

int strlen(char* s) {
	if(*s==0){
		return 0;
	}
	return 1+strlen(s+1);
}

int main() {
	char s[] = "IU is a girl!";
	printf("(%s)len is %d",s, strlen(s));
	return 0;
} 
