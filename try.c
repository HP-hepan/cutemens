#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int d = 0;

	if (a > b) {
		if (a > c) {
			max = a;
		}
		else {
			d = c;
		}
	}
	else {
		if (b > c) {
			d = b;
		}
		else {
			d = c;
		}
	}

	printf("%d", d);

	return 0;
}