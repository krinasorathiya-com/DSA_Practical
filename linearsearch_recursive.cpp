#include <iostream>
using namespace std;



int linearSearchRecursive(int arr[], int i, int n, int target)
{if (i == n) return -1; 
if (arr[i] == target) return i; 
return linearSearchRecursive(arr, i + 1, n, target); 
}

int main() {
int arr[] = {13,67,89,34,56,789,12,34,56,890,678,345};
int n =12 , target = 89;

int result = linearSearchRecursive(arr, 0, n, target);
if (result != -1) cout << "Found at index " << result; 
else cout << "Not Found";
return 0;
}