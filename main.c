#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("---------------------------------------------- \n");
	int a = 5, b = 6, c;
	c= --a + ++b;
	printf("%d \n", c);
	printf("---------------------------------------------- \n");
	int aa = 5, bb = 6, cc;
	cc= aa++ - bb--;
	printf("%d \n", cc);
	// -1
	printf("---------------------------------------------- \n");
	
	return 0;
}
