// https://www.geeksforgeeks.org/move-zeroes-end-array/
// Given an array of random numbers, Push all the zero’s of a given array to the end of the array. 
// For example, if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. 
// The order of all other elements should be same. Expected time complexity is O(n) and extra space is O(1).


#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{ 
 int j = 0;
 for (int i = 0; i < n; i++) 
  {
    if (arr[i] != 0) 
      {
        swap(arr[j], arr[i]); 
        j++;
      }
  }
 
  

}


int main()
{
  int arr[] = {12, 0, 32, 0, 0, 54, 4};
  int n = sizeof(arr)/sizeof(arr[0]); 

pushZerosToEnd(arr,n);
for (int i = 0; i < n; i++) 
  {
      cout << arr[i] << "  ";
  }
return 0;
}