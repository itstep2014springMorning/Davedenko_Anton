Запрограммировать на языке С. Массивы не использовать.
================================================================================
1. Пользователь вводит радиус основания и высоту (можно целыми числами). Вывести
объём и полную поверхность конуса (дробными числами с форматированием).

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, ".1251");
	float l, i;
	printf("Ведите радиус конуса - ");
	scanf("%f", &l);
	printf("Ведите высоту конуса - ");
	scanf("%f", &i);
	float x = 0.3333333333333333333333333333333333333333333333333*3.14159265359*(l*l)*i;
	printf("Объем конуса равен   - %.3f\n", x);
	float y = 3.1415926535897932384626433832795 * l*(l + i);
	printf("Полная площадь поверхности круглого конуса равна - %.3f\n\n", y);
	return 0;
}
=======================================================================================
2. Вывести в виде таблицы (например по 16 символов в строке) первую половину табли-
цы ASCII (символы с кодами от 0 до 127 включительно).

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, ".1251");
	int stolbec = 8;
	int stroka = 16;
	int  i, j;
	int y = 0;
	for (j = 0; j < stolbec; j++){
		int x = 0 + y;
		for (i = 0; i < stroka; i++){
			printf("%d(%c) ", x,x);
			x += 8;
		}
		y += 1;
		printf("\n\n");
	}
	printf("\n\n");
	return 0;
}
======================================================================================
3. Пользователь вводит число x и степень p. Вывести xp. Степень целая (т.е. может быть
отрицательной).

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".1251");
	signed int i, j;
	printf("Введите число ");
	scanf("%d", &i);
	printf("Введите степень числа ");
	scanf("%d", &j);
	if (j > 0){
		int  x = i;
		for (int r = 1; r < j; r++){
			x = x*i;
		}
		printf("Результат при положительной степени %d\n", x );
	}
	if (j<0){
		float x = i;
		for (int r = -1; r > j; r--){
			x = x*i;
		}
		printf("Результат при отрицательной степени %.4f\n", x = 1 / x);
	}
	return 0;
}
====================================================
4. Пользователь вводит число n  1. Затем вводит n чисел. Вывести максимальное и
минимальное из этих чисел.

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".1251");
	signed int  q, w, e, r, t;
	printf("Введите число больше единицы  ");
	scanf("%d", &q);
	printf("Введите любое число ");
	scanf("%d", &w);
	printf("Введите любое число ");
	scanf("%d", &e);
	printf("Введите любое число ");
	scanf("%d", &r);
	printf("Введите любое число ");
	scanf("%d", &t);
	signed int max = 1;
	if (max < q){
		max = q;
	}if (max < w){
		max = w;
	}if (max < e){
		max = e;
	}if (max < r){
		max = r;
	}if (max < t){
		max = t;
	}
	signed int min = max;
	if (min > q){
		min = q;
	}if (min > w){
		min = w;
	}if (min > e){
		min = e;
	}if (min > r){
		min = r;
	}if (min > t){
		min = t;
	}
	printf("\nМаксимальное число %d", max);
	printf("\nМинимальное число  %d\n", min);
	return 0;
}
=====================================================================
Пользователь вводит число n _ 0. Программа выводит n чисел Фибоначчи.

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, ".1251");
	int i, q;
	printf(" Введите число большее нуля  ");
	scanf("%d", &q);
	printf("\n");
	int x = 0, y = 1;
	for (i = 1; i <= q; i++){
		int r = x + y;
		x = y;
		y = r;
		printf(" %d ", y);
	}
	printf("\n\n");
	printf(" Число Фибоначчи %d=%d\n\n",q,y);
	return x;
}
