// https://www.geeksforgeeks.org/find-number-of-triangles-possible/
// Given an unsorted array of positive integers, find the number of triangles that can be formed with three different array elements as three sides of triangles. 
// For a triangle to be possible from 3 values, the sum of any of the two values (or sides) must be greater than the third value (or third side). 

#include <bits/stdc++.h>
using namespace std;

int findTriangl(int arr[], int n)
{
      int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++)
          if (arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j] && arr[k] + arr[j] > arr[i])
            count++;
        }
    }
    return count;
  
}


int main()
{
  int arr[] = {4, 6, 3, 7};
  int n = sizeof(arr)/ sizeof(arr[0]);
  cout << findTriangl(arr, n);
  return 0;
}