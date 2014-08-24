#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <string.h>

void shellsort(int *A, int N){
	int d, n = 5, i, j, t;
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
	setlocale(LC_ALL, ".1251");
	int i, j, x, y, z;
	int const n = 5;
	int mas[n], cifri[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100;
		x = mas[i]/10;
		y = mas[i]-(x*10);
		x = x + y;
		cifri[i] = x;
	}
	printf("        Сформированный массив ");
	for (i = 0; i < n; i++){
		printf(" %d ", mas[i]);
	}
	printf("\n\n");
	printf("          Массив из сумм цифр ");
	for (i = 0; i < n; i++){
		printf(" %d ", cifri[i]);
	}
	printf("\n\n");
	shellsort(cifri, n);
	printf("         Сортировка сумм цифр ");
	for (i = 0; i < n; i++){
		printf(" %d ", cifri[i]);
	}
	printf("\n\n");
	printf(" Сортировка массива по суммам ");
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			z = mas[j] / 100;
			x = (mas[j] - (z * 100)) / 10;
			y = mas[j] - ((x * 10) + (z * 100));
			x = x + y + z;
				if (cifri[i] == x){
					printf(" %d ", mas[j]);
					break;
			}
		}
	}
	printf("\n\n\n\n\n\n");
	return 0;
}
