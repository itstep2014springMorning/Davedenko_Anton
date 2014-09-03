#include <stdio.h>
#include <cstdlib>
#include <ctime>

void vstavkasort(int *A, int n){
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = A[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (A[j] < temp)
				break;
			A[j + 1] = A[j];
			A[j] = temp;
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
	vstavkasort(mas, n);
	for (i = 0; i < n; i++){
		printf(" %d ", mas[i]);
	}
	printf("\n");
	return 0;
}