#include <bits/stdc++.h>
using namespace std;
 
// A XOR based function to find
// the element that appears only once
void search(int arr[], int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++) {
        XOR = XOR ^ arr[i];
    }
    cout << "The required element is " << XOR << "\n";
}
 
// Driver code
int main()
{
    int arr[] = { 1, 1, 2, 4, 4, 5, 5, 6, 6 };
    int len = sizeof(arr) / sizeof(arr[0]);
 
    search(arr, len);
 
    return 0;
}
