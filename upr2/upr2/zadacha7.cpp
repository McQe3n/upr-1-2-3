/*
#include <iostream>
using namespace std;
int main()
{
int number;
cout << "Input the number of the players" << endl;
cin >> number;
int arr[100];
for (int i = 0; i < number; ++i)
{
cout << "Vudete tochkite na igracha " << endl;
cin >> arr[i];
}
int max = arr[0];
int min = arr[0];
int posMax = 1;
int posMin = 1;
for (int i = 1; i < number; ++i)
{
if (arr[i] > max)
{
max = arr[i];
posMax = i + 1;
}
else if (arr[i] < min)
{
min = arr[i];
posMin = i + 1;
}
}
cout << "max points: " << max << " on player: " << posMax << endl;

cout << "min points: " << min << " on player: " << posMin << endl;


return 0;

}
*/