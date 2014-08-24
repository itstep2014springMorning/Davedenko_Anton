Запрограммировать на языке С. Работать только с целыми числами.
==================================================================================
1. Пользователь вводит число n, а затем n чисел. Вывести произведения этих чисел.

#include <stdio.h>
int main()
{
	int  i, j, x;
	printf("Enter your number ");
	scanf("%d", &i);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = i*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	printf("Enter your number ");
	scanf("%d", &j);
	printf("                  %d\n", x = x*j);
	return 0;
}
=========================================================
2. Пользователь вводит число x и степень p. Вывести xp.

#include <stdio.h>
int main()
{
	int i, j;
	printf("Enter your number ");
	scanf("%d", &i);
	printf("Enter your number ");
	scanf("%d", &j);
	int  x = i;
	for (int r = 1; r < j; r++){
		x = x*i;
	}
	printf("                  %d\n", x);
	return 0;
}
=================================================================================
3. Пользователь вводит число L и число x. Найти и вывести степень p такую, что xp 
наиболее близко снизу к L. (Конкретнее: xp  L, а xp+1 > L).

#include <stdio.h>
int main()
{
	int l, i;
	printf("Enter value of L=");
	scanf("%d", &l);
	printf("Enter value of X=");
	scanf("%d", &i);
	int x, y = -1;
	for (x = 1; x <= l; x = x*i){
		y = y + 1;
	}
	printf("\n");
	printf("   Xp in p%d=%d < L\n\n", y, x / i);
	printf("   Xp in p%d=%d > L\n\n", y + 1, x);
	printf("   Your p is %d\n\n", y);
	return 0;
}
================================================================================
Ответьте на вопрос: в каких случаях следует применять цикл for, а в каких while?

Цикл For может задать с какого значения начинать и на каком остановиться. 
Цикл While сначала проверяет условие - потом делает (если условие разрешает).
Но на мой взгляд можно пользоваться как For так и While. 
