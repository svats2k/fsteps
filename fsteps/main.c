#include <stdio.h>;

#define LOWER 0
#define UPPER 10

int sum(int a, int b)
{
	return a + b;
}

void main() {
	int a = 5, b = 6;
	printf("Hi There");
	//scanf("%d%d", &a, &b);

	printf("The sum of 2 numbers %d and %d area %d", a, b, sum(a,b));
}
