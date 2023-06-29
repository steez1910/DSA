// https://www.geeksforgeeks.org/leaders-in-an-array/
//Write a program to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. 
// And the rightmost element is always a leader. 

#include <bits/stdc++.h>
using namespace std;

void findLeaders(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= arr[i+1])
    {
      cout << arr[i] << " ";
    }
  else if (i == n-1)
    {
      cout << arr[i] << " ";
    }
  
  }
 
} 
  
  



int main()
{
  int arr[] = {12, 32, 4, 54, 2, 9, 3};
  int n = sizeof(arr)/ sizeof(arr[0]);
  findLeaders(arr, n);


  return 0;
}
