#include <bits/stdc++.h>
using namespace std;

void swap (int* a, int* b)
{
   int temp = *a;
    *a = *b;
    *b = temp;
}
void rearrange(int arr[], int n)
{
  for (int i = 0; i < n-1; i += 2)
  {
    if  (arr[i] < arr[i+1])
    {
      swap(&arr[i+1], &arr[i]);
    }
  }
  

}

int main()
{
  int n = 5;
  int arr[] = { 1, 3, 2, 2, 5 };
  rearrange(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "  ";
  }
 return 0;  
}