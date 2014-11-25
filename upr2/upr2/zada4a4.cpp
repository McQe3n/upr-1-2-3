/*
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
int digitsCount;
int number;
cin >> digitsCount;
cin >> number;
if (digitsCount == 5){
cout << number / 10000 << endl << (number / 1000) %10 << endl << (number / 100) % 10 << endl << (number / 10) % 10 << endl << number % 10 << endl;
}
else if (digitsCount == 2){
cout << (number / 10) % 10 << endl << number % 10 << endl;
}
else if (digitsCount == 3){
cout << (number / 100) % 10 << endl << (number / 10) % 10 << endl << number % 10 << endl;
}
else if (digitsCount == 4){
cout << number / 1000 << endl << (number / 100) % 10 << endl << (number / 10) % 10 << endl << number % 10 << endl;
}
else if (digitsCount == 1){
cout << number;
}
return 0;
system("pause");
}
*/