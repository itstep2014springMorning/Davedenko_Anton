//Запрограммировать на языке С.
//
//1. Пользователь вводит натуральное число x  2. Проверить является ли оно простым1.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, ".1251");
	int n, x, i;
	printf("Ведите любое число большее двух - ");
	scanf("%d", &n);
	for (i = 2; i < n; ++i){
		if (n%i == 0){
			printf("                  Сложное число\n\n");
			break;
		}
	}
	if (i == n){
		printf("                  Простое число\n\n");
	}
	return 0;
}

//2. Разложить натуральное число x  2 на простые сомножители 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, ".1251");
	int i, j;
	i = 2;
	printf("Введите число большее двух \n");
	scanf("%d", &j);
	while (j / i != 0){
		while (j%i == 0){
			j = j / i;
			printf("%d ", i);
		}
		++i;
	}
	printf("\n\n");
	return 0;
}

//3. Пользователь вводит нечётное число n выведите ромбик символом # диагонали которого равны n.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, ".1251");
	int i, d, w, j, h;
	printf("Введите любое число <100\n                      ");
	 scanf("%d", &d);
	for (i = 1; i <= d; i += 2){
		w = (d - i) / 2;
		for (j = 1; j <= w; j++){
			printf(" ");
		}
		for (j = 1; j <= i; j++){
			printf("#");
		}
		printf("\n");
	}
	for (i = (d - 2); i >= 1; i -= 2){
		h = (d - i) / 2;
		for (j = 1; j <= h; j++){
			printf(" ");
		}
		for (j = 1; j <= i; j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}