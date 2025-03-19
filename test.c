#include <stdio.h>
#define AR_LEN 1000
//Array3. Дано целое число N (> 1), а также первый член A и разность D 
//арифметической прогрессии. Сформировать и вывести массив размера N, 
//содержащий N первых членов данной прогрессии: A,    A + D,    A + 2·D,    A + 3·D,    … .

//Array7°. Дан массив размера N. Вывести его элементы в обратном порядке.

void ar_input(int *ar, int *pn); // 1. Ввод
void ar_print(int *ar, int n);// 3. Печать
void ar_prog(int *ar, int n);
void ar_swap(int *ar, int n);
void ar_reverse(int *ar, int n);
int main() {
	int ar[AR_LEN];
	int n;
	ar_input(ar, &n);
	ar_print(ar, n);
	printf("\n");
	ar_reverse(ar, n);
	ar_print(ar, n);
	printf("\n");
	return 0;
}

void ar_input(int *ar, int *pn) {
	scanf("%d", pn);
	for (int i = 0; i < *pn; i++) {
		scanf("%d", &ar[i]);
	}
}

void ar_print(int *ar, int n) {
	printf("[");
	for (int i = 0; i < n; i++) {
		printf("%d%s", ar[i], i < n-1 ? "," : "]");
	}
}
void ar_prog(int *ar, int n) {
	int d;
	int a;
	printf("\nВведите D:");
	scanf("%d", &d);
	printf("\nВведите A:");
	scanf("%d", &a);
	for (int i = 0; i < n; i++) {
		ar[i] = a + i * d;
	}
}

void ar_swap(int *ar, int n) {
	int i = n - 1;
	while (i >= 0) {
		printf("%d ", ar[i]);
		i = i - 1;
	}
}

void ar_reverse(int *ar, int n) {
	int i = 0;
	int j = n - 1;
	while (i < j) {
		int temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
		i = i + 1;
		j = j - 1;
	}
}
