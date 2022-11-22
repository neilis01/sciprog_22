// Import Statements
#include <stdio.h>


int main(void){

	// Initialise variables
	int n = 5, p = 3, q = 4;
	double A[n][p], B[q][p], C[n][q];

	int i, j, k; // Loop indices


	// Initialise A. B and C matrices
	
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){

			A[i][j] = i + j;

		}
	}

        for(i=0; i<p; i++){
                for(j=0; j<q; j++){

			B[i][j] = i - j;

                }
        }

        for(i=0; i<n; i++){
                for(j=0; j<q; j++){

                        C[i][j] = 0.0;

                }
        }



	// Perform Matrix Multiplication
/*	
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			for(k=0; k<p; k++){
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
*/
	// Calling separate file
	matmult(n,p,q,A,B,C);


	// Print out the Matrices
	
	printf("\n This is Matrix A \n");

	for(i = 0; i<n; i++){
		for(j=0; j<p; j++){
			printf("%3.0f", A[i][j]);
		}
		printf("\n");
	}

	printf("\n");


        printf("\n This is Matrix B \n");

        for(i = 0; i<p; i++){
                for(j=0; j<q; j++){
                        printf("%3.0f", B[i][j]);
                }
		printf("\n");
        }

        printf("\n");

        printf("\n This is Matrix C \n");

        for(i = 0; i<n; i++){
                for(j=0; j<q; j++){
                        printf("%3.0f", C[i][j]);
                }
		printf("\n");
        }

        printf("\n");



	return 0;

}
