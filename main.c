#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, k;
	char c;
	
	printf("Enter the calculation : ");
	scanf("%d%c%i", &i, &c, &j);
	
	if(c=='+'){
		k=i+j;
		printf("result : %d.\n",k);
	}
	else if(c=='-'){
		k=i-j;
		printf("result : %d\n", k);
	}
	else if(c=='*'){
		k=i*j;
		printf("result : %d\n", k);
	}
	else if(c=='/'){
		k=i/j;
		printf("result : %d\n", k);
	}
	else if (c=='%'){
		k=i%j;
		printf("result is : %d\n", k);
	}
	else {
		printf("잘못된 연산자 입니다.");
	}
	
	return 0;
}
