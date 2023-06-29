// https://www.geeksforgeeks.org/sort-array-wave-form-2/
//Given an unsorted array of integers, sort the array into a wave array. An array arr[0..n-1] is sorted in wave form if:
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..


#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
  int temp = *a;
    *a = *b;
    *b = temp;
}

void sortInWawe(int arr[], int n)
{ 
  for (int i = 0; i < n; i+=2)
    {
      if (i>0 && arr[i-1] > arr[i] )
        swap(&arr[i], &arr[i-1]);

      if (i<n-1 && arr[i] < arr[i+1] )
        swap(&arr[i], &arr[i + 1]);
    }


}


int main()
{
  int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
  int n = sizeof(arr)/sizeof(arr[0]); 
  sortInWawe(arr, n);
  for (int i=0; i<n; i++)
    {
      cout << arr[i] << "  ";
    }



return 0;
}