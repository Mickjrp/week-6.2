#pragma warning (disable: 4996)
#include <stdio.h>

int num, a, b;

int main()
{
	FILE* f = fopen("data01.txt", "w");

	printf("Enter your number: ");
	scanf_s("%d", &num);

	for (a = 1;a <= num;a++)
	{
		for (b = 1;b <= a;b++)
		{
			fprintf(f,"*");
		}
		fprintf(f,"\n");
	}
	fclose(f);

	return 0;
}