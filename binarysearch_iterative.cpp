#include <bits/stdc++.h>
using namespace std;

int binarySearchIterative(int arr[], int n, int target) {
int low = 0, high = n - 1;
while (low <= high) {
int mid = low + (high - low) / 2; 

if (arr[mid] == target) return mid; 

else if (arr[mid] < target) low = mid + 1; 

else high = mid - 1; 

}
return -1; 
}

int main() {

int arr[] = {312, 823, 912, 619, 429, 245, 867, 391};

int n = 10, target = 429;

int result = binarySearchIterative(arr, n, target);

if (result != -1) cout << "Found at index " << result;
else cout << "Not Found";
return 0;

}