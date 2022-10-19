#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//ambil waktu 
time_t sec = time(0);
string tim = ctime(&sec);

//inisialiasasi variabel global
  string client, cashier, tes;
  int id[10],  
      sum = 0,
      qty[10], 
      pay,
      total[10],
      amt, 
      change;

//data katalog
      string product[] = {"ProductName",
            "Pensil 2B",
            "Buku Tulis A5",
            "Pulpen\t",
            "Buku Gambar A3",
            "Spidol\t",
            "Gunting\t",
            "Lem Kertas",
            "Klip\t",
            "Tipe-x\t",
            "Note\t"
       };

       int price[] = {0,
            2000,
            3000,
            2500,
            5000,
            4000,
            8000,
            5000,
            1000,
            6000,
            5000
       };


  /*map<int, string> 
      product{
        {1, "Pensil 2B"},
        {2, "Buku Tulis A5"},
        {3, "Pulpen"},
        {4, "Buku Gambar A3"},
        {5, "Spidol"},
        {6, "Gunting"},
        {7, "Lem Kertas"},
        {8, "Klip"},
        {9, "Tipe-x"},
        {10, "Note"},

      };
  map<int, string>::iterator i;
  for(i = product.begin(); i != product.end(); i++);

  map<int, int> 
      price{
        {1, 2000},
        {2, 3000},
        {3, 2500},
        {4, 5000},
        {5, 4000},
        {6, 8000},
        {7, 5000},
        {8, 1000},
        {9, 6000},
        {10, 5000},
      };
  map<int, int>::iterator n;
  for(n = price.begin(); n != price.end(); n++);*/

/*int main() {
  char c;
  cout << "Hello World!" << endl;
  cin >> c;
  cout << c;

  return 0; 
}*/