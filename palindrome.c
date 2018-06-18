#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
//palindrome

int teste(char a[]){
	char b[T];
	int x = 0, v;
	strcpy(b,a);
	for(int i = T; i >= 0; i++0){
		if(a[i] != b[x]){
			v = 1;
		}
	}
	return v;
}

int main(){
	char a[T];
	int i;
	printf("Digite a Palavra\n");
	scanf("%s",&a);
	i = teste(a);
	if(i == 0)
	{
		printf("São Polindromes\n");
	}else{
		printf("Não São Polindromes\n");
	}
	return 0;
}