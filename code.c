#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	unsigned short  int n = 0;
	unsigned short  int min = 0;
	unsigned short  int max = 0; 
	float number = 0;
	int qw = 0;
	float qe = 0;
	int qr = 0;
	float sum = 0;
	int j = 0;
	//float otvet = 0;


	printf("Введите колличество чисел: ");
	scanf_s("%hu", &n);

	printf("Введите минимальное значение : ");
	scanf_s("%hu", &min);	

	printf("Введите максимальное значение : ");
	scanf_s("%hu", &max);
	
	for (int i = 0; i < n; i++) {
		if (n < 10) {
			number = (float)rand() / RAND_MAX * (max - min) + min;
			printf("Число : ");
			printf("%f \n", number);
			 qw = number;
			 qe = number - qw;
			 qr = qe * 10;
			 printf("qr: ");
			 printf("%d \n", qr);
			
		}
		else {
			number = (float)rand() / RAND_MAX * (max - min) + min;
			printf("Число : ");
			printf("%f \n", number);
			 qw = number;
			 qe = number - qw;
			 qr = qe * 100;
			 printf("qr: ");
			 printf("%d \n", qr);
		}
		
		
		j = 0;
		while (j <= n ) {
			if(qr < n) {
				sum = sum - number;
				printf("Вычли : ");
				printf("%f \n", sum);
				break;
			}
			else {
				sum = sum + number;
				printf("Сложили : ");
				printf("%f \n", sum);
				break;
			}
			j++;
		}
	}
	printf("%f", sum);
	return 0;
}
