#include <bits/stdc++.h>
using namespace std;




void rightRotate(int arr[], int j, int n) {

   int x = arr[n-1], i;
   for (i = n-1; i > j; i--)
      arr[i] = arr[i-1];
   arr[j] = x;
}

void rotaiting(int arr[], int n) {

    int i = 0;
    while(i < n) {
        rightRotate(arr, i, n);
        i += 2;
    }

    for(int i = 0; i < n; i++) 
    {
    cout << arr[i] << "  ";
    }
}


int main() {

    int ar1[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(ar1)/sizeof(ar1[0]);
  rotaiting(ar1, n);
  return 0;
}