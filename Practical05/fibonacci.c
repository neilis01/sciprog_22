// Library Declarations
#include <stdio.h>
#include <stdlib.h>


// Input arguments : f(n-1) and f(n-2)
// On exit, they have values of f(n) and f(n-1)
void fibonacci(int *a, int *b);


// Main Function
int main(){

	// Declaration of Variables
	int n, i;
	int f1 = 1;
	int f0 = 0;

	// User input
	printf("Enter a positive integer n\n");
	scanf("%d", &n);

	// Case where input is negative
	if(n<1){
		printf("This number is not Positive");
		exit(1);
	}

	// Printing Fibonacci Sequence
	printf("The fibonacci sequence is :\n");
	printf("%d, %d, ", f0, f1);

	for (i=2; i<=n; i++){

		fibonacci(&f1, &f0);
		printf("%d, ", f1);

		if((i+1%10) == 0){
			printf("\n");
		}
	}

}


void fibonacci(int *a, int *b){

	int next;

	// *a = f(n-1) *b = f(n-2) next = f(n)
	next = *a + *b;

	// *a = f(n) , *b = f(n-1)
	*b = *a;
	*a = next;
}
