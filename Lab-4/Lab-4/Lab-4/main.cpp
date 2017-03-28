#include <algorithm>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "Levenshtein.h"

using namespace std;

void main()
{
	setlocale(0, "");

	clock_t t1 = 0, t2 = 0, t3, t4;
	const char chars[] = {"a", "b", "c", "d", "e", "f", "g", };
	for (int i = 0; i < )
	char s1[] = "abcdefghklmnos1m", s2[] = "s1s2abcdefghomnkm";
	int  ls1 = sizeof(s1) - 1, ls2 = sizeof(s2) - 1;

	cout << endl << "----- Расстояние Левенштейна -----" << endl;
	cout << endl << "--длина --- рекурсия -- дин.програм. ---"<< endl;

	for (int i = 8; i < min(ls1, ls2); i++)
	{

		t1 = clock(); levenshtein_r(i, s1, i - 2, s2); t2 = clock();
		t3 = clock(); levenshtein(i, s1, i - 2, s2); t4 = clock();

		cout << right << setw(2) << i - 2 << "/" << setw(2) << i
			<< "        " << left << setw(10) << (t2 - t1)
			<< "   " << setw(10) << (t4 - t3) << endl;
	}

	system("pause");
}