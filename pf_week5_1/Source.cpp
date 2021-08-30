//64010846
#include <stdio.h>
int main()
{
	float h,avr = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("Enter student no. %d hight : ",i+1);
		scanf_s("%f", &h);
		avr += h;
	}
	printf("Avarge student hight : %.3f\n", avr / 10);
	return 0;
}