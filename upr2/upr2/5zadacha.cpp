/*
#include <iostream>
#include <math.h>


int power(int base, int degree)
{
int result = 1;
for (int i = 0; i < degree; ++i)
{
result *= base;
}

return result;
}
using namespace std;
int main()
{
int number;
int digitsCount;
cout << "Vuvedete chislo ";
cin >> number;

if (number == 1)
{
digitsCount = 1;
}
else{
digitsCount = ceil(log10(number));
}

for (int i = 1; i <= digitsCount / 2; ++i)
{
if ( (number / power(10, digitsCount - i) % 10) != ( number / power(10, i - 1) % 10) ){
cout << number << " is not palindrom" << endl;
return 1;
}
}

cout << number << " is palindrom" << endl;
cin.get();
return 0;
system("pause");
}
*/