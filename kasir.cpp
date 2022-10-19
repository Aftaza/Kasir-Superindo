#include <iostream>
#include <sstream>
#include <chrono>
#include <cstdlib>
#include <thread>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <typeinfo>
#include <algorithm>
#include <bits/stdc++.h>

//ambil data
#include "data.h"


#pragma comment(lib, "user32");

using namespace std; 



void delay(int x = 5, int y = 1) {
	if (y != 1) {
		for (int i = x; i > 0; --i) {
			cout << i << "\t";
			this_thread::sleep_for(chrono::seconds(1));
		}
	}
	for (int i = x; i > 0; --i) {
		//cout << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1));
	}
	
}

void kop(bool x = false){
	if (x == true)
	{
		SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	system("CLS");
	system("color b");
	cout << endl;
	cout << " .d8888b.                                   8888888               888            " << endl;
	delay(5);
	cout << "d88P  Y88b                                    888                 888            " << endl;
	delay(5);
	cout << "Y88b.                                         888                 888            " << endl;
	delay(5);
	cout << " 'Y888b.   888  888 88888b.   .d88b.  888d888 888   88888b.   .d88888  .d88b.    " << endl;
	delay(5);
	cout << "    'Y88b. 888  888 888 '88b d8P  Y8b 888P'   888   888 '88b d88' 888 d88''88b   " << endl;
	delay(5);
	cout << "      '888 888  888 888  888 88888888 888     888   888  888 888  888 888  888   " << endl;
	delay(5);
	cout << "Y88b  d88P Y88b 888 888 d88P Y8b.     888     888   888  888 Y88b 888 Y88..88P   " << endl;
	delay(5);
	cout << " 'Y8888P'   'Y88888 88888P'   'Y8888  888   8888888 888  888  'Y88888  'Y88P'    " << endl;
	delay(5);
	cout << "                    888                                                          " << endl;
	delay(5);
	cout << "                    888                                                          " << endl;
	delay(5);
	cout << "                    888                                                          " << endl;
	delay(5);
	cout << "                                 @author Afta                                    " << endl;

	}else{
		cout << endl;
	cout << " .d8888b.                                   8888888               888            " << endl;
	cout << "d88P  Y88b                                    888                 888            " << endl;
	cout << "Y88b.                                         888                 888            " << endl;
	cout << " 'Y888b.   888  888 88888b.   .d88b.  888d888 888   88888b.   .d88888  .d88b.    " << endl;
	cout << "    'Y88b. 888  888 888 '88b d8P  Y8b 888P'   888   888 '88b d88' 888 d88''88b   " << endl;
	cout << "      '888 888  888 888  888 88888888 888     888   888  888 888  888 888  888   " << endl;
	cout << "Y88b  d88P Y88b 888 888 d88P Y8b.     888     888   888  888 Y88b 888 Y88..88P   " << endl;
	cout << " 'Y8888P'   'Y88888 88888P'   'Y8888  888   8888888 888  888  'Y88888  'Y88P'    " << endl;
	cout << "                    888                                                          " << endl;
	cout << "                    888                                                          " << endl;
	cout << "                    888                                                          " << endl;
	cout << "                                 @author Afta                                     " << endl;

	}
	
}

void delimiter(string str, string deli, int i){
	int start = 0;
    int end = str.find(deli);
    //string val;
    while (end != -1) {
        tes = str.substr(start, end - start);
       
        	id[i] = stoi(tes);

        start = end + deli.size();
        end = str.find(deli, start);
    }
   	tes = str.substr(start, end - start);
    qty[i] = stoi(tes);

}

void restart();

void bill(int count){
	system("cls");
	cout << "==============================================================" << endl;
	cout << "                       PT. SuperIndo Tbk.                     " << endl;
	cout << "               Jl. KEBONSARI No. 45 RT 005/001                " << endl;
	cout << "                  Kel. KEBONSARI Kec. SUKUN                   " << endl;
	cout << "                       MALANG JAWA TIMUR                      " << endl;
	cout << "                      Telp : 03413076866                      " << endl;
	cout << "Costumer : " << client << "\t\t" << tim << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "No\t" << "Product Name\t" << "Qty\t" << "Price\t\t" << "Total" << endl;
	cout << "---------------------------------------------------------------" << endl;
	for (int i = 0; i < count; ++i)
	{
		int nor = i + 1;
		int id_product = id[i];
		string name_product = product[id_product];
		int price_product = price[id_product];
		int amt_product = qty[i];
		cout << nor << "\t" << name_product << "\t " << amt_product << "\t" << price_product << "\t\t" << total[i] << endl;
	}
	cout << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "SubTotal                                    : Rp." << sum << endl;
	cout << "Pay                                         : Rp." << pay << endl;
	cout << "Change                                      : Rp." << change << endl << endl;
	cout << "              ***Thank You for Buy our Product***              " << endl;
	system("pause");
	restart();
}


void costumer(){
	if (client.empty())	
	{
		//input user
		cout << "====================================" << endl;
		cout << "Insert Costumer : ";
		getline(cin, client);
		system("cls");
	}else{
		cout << "========================================================================================================" << endl;
		cout << "Costumer : " << client  << "                                                         " << tim;
		cout << "========================================================================================================" << endl;
	}
}


void Insert(int i = 0, bool a = false){
	if (a == true)
	{
		kop();
		costumer();
	}
	
	cout << "Insert Product Code or Command" << endl;
	cout << ">";
	cin >> cashier;

	if (cashier != "pay")
	{
		delimiter(cashier, "/", i);
	}
}

void table(int no){
	if (cashier == "pay")
	{
		no -= 1;
	}
	for (int i = 0; i < no; i++)
	{
		int nor = i + 1;
		int id_product = id[i];
		string name_product = product[id_product];
		int price_product = price[id_product];
		int amt_product = qty[i];
		total[i] = price_product * amt_product;
		if (cashier != "pay")
		{
			sum += total[i];
		}
		cout << nor << "\t\t" << id_product << "\t\t" << name_product << "\t\t" << amt_product << "\t\t" << price_product << "\t\t" << total[i] << endl; 
		
	}
	
}

void paying(){
	//int bill = sizeof(id) / sizeof(*id);
	//table(bill);
	cout << "Cash : Rp. ";
	cin >> pay;
	change = pay - sum;
	cout << "Change : Rp. " << change << endl;
	system("pause");
	bill(amt);
}


void console(string com = ""){
	amt = 1;
	while(true){
		system("cls");
		kop();
		costumer();
		cout << "No\t\tId\t\tProduct Name\t\tQty\t\tPrice\t\tTotal" << endl;
		cout << "--------------------------------------------------------------------------------------------------------" << endl;
	
		table(amt);
		cout << endl << "\t\t\t\t\t\t\t\t\tSubTotal : Rp. " << sum << endl;
		if (cashier == "pay")
		{
			amt -= 1;
			paying();
			break;
		}
		Insert(amt);
		amt++;
	}
}



int main() {

	kop(true);
	costumer();
	system("start list");
	Insert(0, true);
	console();
	

    
    cin.get();
	return 0;
}

void restart(){
	//clear all variable
	client.clear();
	sum = 0;
	for (int i = 0; i < amt; ++i)
	{
		id[i] = 0;
		qty[i] = 0;
	}
	
	for (int i = 0; i < 3; ++i)
	{
		system("cls");
		cout << "Restart program!";
		for (int i = 0; i < 10; ++i)
		{
			cout << ".";
			delay(3);
		}
	}
	main();
}