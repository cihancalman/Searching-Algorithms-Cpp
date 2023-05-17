#include <iostream>
using namespace std;

int binarySearch(int arr[],int,int,int);
int exponentialSearch(int arr[],int n,int x) {
	if (arr[0]== x)
	{
		return 0;
	}
	int i = 1;
	while (i < n && arr[i] <=x)
	{
		i = i * 2;
	}

	binarySearch(arr,i/2,min(i,n-1),x);
}

int binarySearch(int arr[], int l, int r, int x) {
	if (r>= l)
	{
		int mid = l + (r - l) / 2;
		if (arr[mid]==x)
		{
			return mid;
		}

		if (arr[mid] >x)
		{
			return binarySearch(arr, l, mid - 1, x);
		}

		return binarySearch(arr,mid+1,r,x);
	}

	return -1;
}
int main()
{
	int myArray[] = { 1,5,7,9,12,29,34,41,55,62 }; //array must be sorted
	int size = sizeof(myArray) / sizeof(myArray[0]);
	int target = 29;

	int result = exponentialSearch(myArray, size, target);
	(result == -1)
		? cout << "Element is not present in array" << endl
		: cout << "Element is present at index " << result << endl;
	return 0;
}

