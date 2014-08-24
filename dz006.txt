Запрограммировать на языке С.
==========================================================
1. Реализовать алгоритм Евклида нахождения НОД двух чисел.
2. Найти НОК двух чисел.

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".1251");
	int x, y;
	printf(" Введите число большее нуля  ");
	scanf("%d", &x);
	printf(" Введите число большее нуля  ");
	scanf("%d", &y);
	int i = 0;
	int a = x, b = y;
	while ((x != 0) && (y != 0)){

		i = x%y;
		x = y;
		y = i;
	}
	printf(" НОД = %d\n", x);
	printf(" НОК = %d\n", a = a*b / x);
	return 0;
}
=======================================================
3. Пользователь вводит ширинуw  1 и высоту h  1, выведите соответствующую рамку
символом #.

#include <stdio.h>
#include <locale.h>
# include <string.h>
int main()
{
	setlocale(LC_ALL, ".1251");
	int x, y;
	/*printf(" Введите число большее нуля  ");
	scanf("%d", &x);
	printf(" Введите число большее нуля  ");
	scanf("%d", &y);*/
	const int height = 30;//вводим высоту прямоугольника
	const int width = 45;//вводим ширину прямоугольника
	int x1 = height;
	int x2 = width;
	int i;
	char buffer[height][width + 2];
	for (i = 0; i < height; i++){
		memset(buffer[i], ' ', width); // устанавливаем пробелы
		strcpy(buffer[i] + width, "\n"); // устанавливаем символы окончания сироки после пробелов
	}
	for (i = 0; i < height; i++){//левая колонка
		for (int j = 0; j < width; j++){
			if ((j >= x1 - height) && (j < x1 - (height - 1))){
				buffer[i][j] = '#';
			}
		}
	}
	for (i = 0; i < height; i++){//правая колонка
		for (int j = 0; j <= width; j++){
			if ((j < x2) && (j >= x2 - 1)){
				buffer[i][j] = '#';
			}
		}
	}
	for (i = 0; i < height; i++){//верхняя планка
		for (int j = 0; j < (width - 1); j++){
			if ((i >= 0) && (i < x1 - (height - 1))){
				buffer[i][j] = '#';
			}
		}
	}
	for (i = 0; i < height; i++){//нижняя планка
		for (int j = 0; j < (width - 1); j++){
			if ((i <= x1) && (i>(x1 - 2))){
				buffer[i][j] = '#';
			}
		}
	}
	for (i = 0; i < height; i++) {//выводим буфер
		printf("%s", buffer[i]);
	}

	return 0;
}
