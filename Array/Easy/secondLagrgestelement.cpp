#include <bits/stdc++.h>
using namespace std;




// void secondLargest(int arr[], int size)
// {
//   int first = INT_MIN;
//   int second = INT_MIN;
//   for (int i = 0; i < size; i++)
//   {
//     if (arr[i] > first)
//     {
//       second = first;
//       first = arr[i] ;
      
//     }
//     else if (arr[i] > second && arr[i] != first)
//     {
//       second = arr[i];
      
//     }
   
//   }
//   cout << second <<endl;
// }

void sum(int arr[], int n)
{
  int summ=0;
    for (int i = 0; i < n; i++)
     {
      summ = summ + arr[i];
    }
    cout << summ;
}

int main()
{
  int arr[] = {2, 1, 1, 4,};
  int n = sizeof(arr)/sizeof(arr[0]);
  // secondLargest(arr, n);
  sum(arr, n);
  return 0;

}