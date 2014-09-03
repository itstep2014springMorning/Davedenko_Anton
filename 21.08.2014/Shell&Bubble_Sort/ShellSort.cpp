#include <stdio.h>
#include <cstdlib>
#include <ctime>

void shellesort(int *A, int n){
	int d, i, j, t;
	for (d = n / 2; d > 0; d /= 2){
		for (i = d; i < n; i++){
			for (j = i; j >= d && A[j - d] > A[j]; j -= d){

				t = A[j];
				A[j] = A[j - d];
				A[j - d] = t;
			}
		}
	}
}
int main(){
	int i;
	int const n = 10;
	int mas[n];//shell
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100;
	}
	for (i = 0; i < n; i++){
		printf(" %d ", mas[i]);
	}
	printf("\n\n");
	shellesort(mas, n);
	for (i = 0; i < n; i++){
		printf(" %d ", mas[i]);
	}
	printf("\n");
	return 0;
}