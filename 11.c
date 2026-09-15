#include <stdio.h>
#include <locale.h>
int main()

{

	printf("123\n"); // подзадание 1
	printf("%d\n\t %d\n\t\t %d\n\t\t\t %d\n", 1, 2, 3, 4);
	printf("%10.5f\n ", 12.234657);
	setlocale(LC_CTYPE, ".UTF8");
	printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n", 7, 5, 7 % 5);
	printf("Умножения %d на %d равно %d\n", 2000, 4, 2000 * 4);
	printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);
	printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000);
	printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000);
	printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000);
}





#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, ".UTF8");
	int N = 16;
	int K = 6;
	printf("Сейчас %d часов %d минут\n", N, K);
	printf("Идет %d минута суток\n", N *60 + K);
	printf("До полуночи осталось %d часов %d минут\n ", 24 - N, 60 - K);
	printf("С 8:00 прошло %d секунд\n", 60*60 * N + 60* K - 8 * 60*60);
	printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", N / 24., K / 60.);
}


#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, ".UTF8");
	int n=2;
	int l=333;
	float k=n / l;
	int m= n % l;
	printf("Дано: \n\t\t %d\n\t\t\%d\n\t -----------\n Ответ: \n\t+ %2.2d.%4.4d", n,l,k,m);


