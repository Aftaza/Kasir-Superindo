#include <iostream>
#include <string>
#include <windows.h>

#include "data.h"

using namespace std;

int main() {
	system("mode con: cols=65 lines=35 & color a");
	system("title List Katalog SuperIndo");
	system("cmdow @ /MOV 800 30");

	cout << "==============================================================" << endl;
	cout << "                       PT. SuperIndo Tbk.                     " << endl;
	cout << "               Jl. KEBONSARI No. 45 RT 005/001                " << endl;
	cout << "                  Kel. KEBONSARI Kec. SUKUN                   " << endl;
	cout << "                       MALANG JAWA TIMUR                      " << endl;
	cout << "                      Telp : 03413076866                      " << endl;
	cout << "  Id\t\t" << "Product Name\t\t" << "Price" << endl;
	cout << "---------------------------------------------------------------" << endl;
	for (int i = 1; i <= 10; ++i)
	{
		cout << "  " << i << "\t\t" << product[i] << "\t\t" << price[i] << endl;
	}

	cout << endl << "> How to Insert Product?" << endl;
	cout << "  ProductId/AmountProduct ex: 1/3" << endl;
	cout << "> Insert 'pay' to go paying all product" << endl << endl;
	system("pause");

	return 0;
}