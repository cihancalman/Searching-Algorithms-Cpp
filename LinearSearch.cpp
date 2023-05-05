#include <iostream>
using namespace std;

int linearSearch(int array[],int size,int x) {
	for (int i = 0; i < size; i++)
	{
		if (array[i] == x)
			return i;
	}
	return -1;
}




int main()
{
	int Myarray[] = { 7,45,26,0,41,1,111,652 };
	int size = sizeof(Myarray) / sizeof(Myarray[0]);
	int x = 100;

	int result = linearSearch(Myarray, size, x);
	(result == -1)
		? cout << "Element is not present in array" << endl
		: cout << "Element is present at index " << result << endl;
		return 0;
}
