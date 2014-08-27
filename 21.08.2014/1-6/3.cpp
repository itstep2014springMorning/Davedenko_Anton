/*1. Запрограммировать на языке C
Написать программу, которая предлагает пользователю ввести два числа, а затем выводит
5 арифметических операций в следующем виде :
7 + 5 = 12
7 - 5 = 2
7 * 5 = 35
7 / 5 = 1
7 % 5 = 2
Решение :*/
#include <stdio.h>
		int main()
{
			int i, j, x, c, v, b, n,y,d;
			printf("Enter your first number  ");
			scanf("%d", &i);
			printf("Enter your second number ");
			scanf("%d", &j);
			printf("%d+%d=%d\n", i, j, x=i+j);
			printf("%d-%d=%d\n", i, j, c = i - j);
			printf("%d*%d=%d\n", i, j, v = i * j);
			printf("%d/%d=%d\n", i, j, b = i / j);
			printf("%d%%%d=%d\n", i, j, y = i - (b*j));
			return 0;
		}
