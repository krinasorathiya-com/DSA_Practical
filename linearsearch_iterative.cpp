#include<iostream>
using namespace std;


int linearSearchIterative(int arr[], int n, int target)
{for (int i = 0; i < n; i++) 
    { if (arr[i] == target)
    {return i;
}
}
return -1;
}

int main() {
int arr[] = {45,90,56,34,2,1234,67,78,67,367};
int n = 10, target = 78;

int result = linearSearchIterative(arr, n, target);
if (result != -1) cout << "Found at index " << result; 
else cout << "Not Found";
return 0;

}