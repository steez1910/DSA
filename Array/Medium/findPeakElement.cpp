// https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
// Given an array arr[] of integers. Find a peak element i.e. an element that is not smaller than its neighbors. 
// Note: For corner elements, we need to consider only one neighbor. 


#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int size)
{
	if (size == 1)
		return arr[0];
	if (arr[0] >= arr[1])
		return arr[0];
	if (arr[size - 1] >= arr[size - 2])
		return arr[size - 1];

	for (int i = 1; i < size - 1; i++) {

		if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
			return arr[i];
	}
}

int main()
{
	int arr[] = {10, 20, 15, 2, 23, 90, 67};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Peak Elemen is : " << findPeak(arr, size);
	return 0;
}
