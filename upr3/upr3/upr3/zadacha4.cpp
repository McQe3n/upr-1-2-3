#include <iostream>
using namespace std;
int main()
{
	int array1[] = { 1, 3, 45, 566, 4532 }; //is sorted
	int array2[] = { 4532, 232, 43, 3, 2242 }; //is not sorted
	int array3[] = { 4532, 232, 43, 3, 1 }; //is sorted
	const int sizeArr = 5;
	bool isSorted = true;
	if (sizeArr == 0) cout << "Invalid array " << endl;
	for (int i = 0; i < sizeArr - 1; i++){
		if (array1[i] <= array1[sizeArr - 1])
		{
			if (array1[i] > array1[i + 1]) isSorted = false;
		}
		else if (array1[i] < array1[i + 1]) isSorted = false;
	}
	if (isSorted)
		cout << "Is sorted " << endl;
	else
		cout << "Is not sorted" << endl;
	return 0;
}