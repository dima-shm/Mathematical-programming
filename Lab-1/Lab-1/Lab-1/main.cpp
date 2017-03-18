#include "Auxil.h"                            // вспомогательные функции 
#include <iostream>
#include <ctime>
#define  CYCLE  1000000                      // количество циклов  

using namespace std;

void main()
{
	setlocale(0, "");

	double  av1 = 0, av2 = 0;
	clock_t  t1 = 0, t2 = 0;

	auxil::start();                           // старт генерации 
	t1 = clock();                             // фиксация времени 
	for (int i = 0; i < CYCLE; i++)
	{
		av1 += (double)auxil::iget(-100, 100);// сумма случайных чисел 
		av2 += auxil::dget(-100, 100);        // сумма случайных чисел 
	}
	t2 = clock();                             // фиксация времени 


	cout << endl << "количество циклов:         " << CYCLE;
	cout << endl << "среднее значение (int):    " << av1 / CYCLE;
	cout << endl << "среднее значение (double): " << av2 / CYCLE;
	cout << endl << "продолжительность (у.е):   " << (t2 - t1);
	cout << endl << "                  (сек):   " << ((double)(t2 - t1)) / ((double)CLOCKS_PER_SEC);
	cout << endl;
	system("pause");
}