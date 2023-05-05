#include <iostream>
using namespace std;

int binarySearch(int array[],int size,int target) {
	int left, right, mid;
	left = 0;
	right = size - 1;

	while (left <= right) {
		mid = (left + right) / 2;

		if (array[mid] == target) {
			return mid;
		}
		else if (target <array[mid])
		{
			right = mid - 1;
			
		}
		else
		{
			left = mid + 1;
			
		}
		
	}
	return -1;
}


int main()
{
    int myArray[] = { 1,5,7,9,12,29,34,41,55,62 }; //array must be sorted
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int target = 34;

	int result = binarySearch(myArray, size, target);
	(result == -1)
		? cout << "Element is not present in array" << endl
		: cout << "Element is present at index " << result << endl;
	return 0;

}

