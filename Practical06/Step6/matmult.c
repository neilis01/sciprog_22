//Perform Matrix Multiplication
// Used with MAKEFILE to perform same operation as files in Practical 6

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){	

	int i, j, k;

	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			for(k=0; k<p; k++){
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
}
