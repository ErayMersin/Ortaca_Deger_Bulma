#include<stdio.h>
#include<stdlib.h>

int main() {

	float sayi1, sayi2, sayi3;

	printf("1.Sayi Gir: ");
	scanf_s("%f", &sayi1);

	printf("2.Sayi Gir: ");
	scanf_s("%f", &sayi2);

	printf("3.Sayi Gir: ");
	scanf_s("%f", &sayi3);

	if (sayi1 > sayi2)
	{
		if (sayi2 > sayi3)
		{
			printf("Ortanca Sayi Degeri: %f", sayi2);
		}
	}
	if (sayi1 > sayi3)
	{
		if (sayi3 > sayi2)
		{
			printf("Ortanca Sayi Degeri: %f", sayi3);
		}
	}
	if (sayi2 > sayi1)
	{
		if (sayi1 > sayi3)
		{
			printf("Ortanca Sayi Degeri: %f", sayi1);
		}
	}
	if (sayi2 > sayi3)
	{
		if (sayi3 > sayi1)
		{
			printf("Ortanca Sayi Degeri: %f", sayi3);
		}
	}
	if (sayi3 > sayi1)
	{
		if (sayi1 > sayi2)
		{
			printf("Ortanca Sayi Degeri: %f", sayi1);
		}
	}
	if (sayi3 > sayi2)
	{
		if (sayi2 > sayi1)
		{
			printf("Ortanca Sayi Degeri: %f", sayi2);
		}
	}

	return 0;
}