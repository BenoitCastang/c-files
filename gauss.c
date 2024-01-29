#include <stdio.h>

int sumNviaGauss(int n);
void sumNviaWhile(int n);

int main() {
	sumNviaWhile(100);
	return 0;
}

int sumNviaGauss(int n) {
	int sum = 1;
	sum = n * (n + 1) / 2;
	return sum;
}

void sumNviaWhile(int n) {
	int sum = 0;
	int i = 1;
	while (i <= n) {
		sum += i;
		printf("%d + %d = %d\n", i-1, i, sum);
		i++;
	}
}
/home/porco/c/enum.c
