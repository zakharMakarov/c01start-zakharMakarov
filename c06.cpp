#include <iostream>
using namespace std;

int main()
{
   int a = 0;
   int b = 0;
   char operation;
   cout << "Введите первое число: ";
   cin >> a;
   cout << "Введите второй число: ";
   cin >> b;
   cout << "Введите оператор: ";
   cin >> operation;

   switch (operation)
   {
   case '-':
      cout << a - b << endl;
      break;
   case '+':
      cout << a + b << endl;
      break;
   case '*':
      cout << a * b << endl;
      break;
   case '/':
      cout << a / b << endl;
      break;
   default:
      cout << "Error\n";
   }
   return 0;
}