#include <iostream>
using namespace std;
int main()
{
    cout << "eded daxil edin: ";
     int t;
     cin >> t;
     t % 2 == 0 && cout << "T cut ededdir" || cout << "T tek eddedir";
     cout << endl;
     cout << "2 eded daxil edin:";
     int num2;
     cin >> num2;
     int num2_2;
     cin >> num2_2;
     num2 > num2_2&& cout << num2_2 << " daha kicikdir" << endl;
     num2_2 > num2&& cout << num2 << " daha kicikdir" << endl;
     num2 == num2_2 && cout << "beraberdiler" << endl;
     cout << "eded daxil edin: ";
     int num;
     cin >> num;
     num > 0 && cout << "num musbet ededdir:";
     num == 0 && cout << "num 0 ededdir:";
     num < 0 && cout << "num menfi ededdir:";
     cout << endl;
     cout << "2 eded daxil edin: ";
     double num;
     cin >> num;
     double num_2;
     cin >> num_2;
     cout << "kolkulatorda ne elemek isteyirsen 1.+ \n2.-\n 3.*\n 4./  ";
     int choise;
     cin >> choise;
     if (choise == 1) {
         double total = num + num_2;
         cout << total << " cavabdir";
     }
     else  if (choise == 2) {
         double total = num - num_2;
         cout << total << " cavabdir";
     }
     else  if (choise == 3) {
         double total = num * num_2;
         cout << total << " cavabdir";
     }
     else  if (choise == 4) {
         double total = num / num_2;
         cout << total << " cavabdir";
     }
     else {
         cout << "ERROR bele cavab yoxdur";
     }
     cout << endl;
      cout << "eded daxil edin : ";
      int num;
      cin >> num;
      (num > 1 && num < 50) && cout << " eded 1 ve 50 arrasindadir" || cout << "edde 1 50 arrasinda deyil";
      cout << endl;
}