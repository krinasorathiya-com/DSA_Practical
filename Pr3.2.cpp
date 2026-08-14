#include <iostream>
using namespace std;

void sortColors(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { 
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int colors[] = {1,2,0,0,2,1,1,0,2,1,0,0,0,2,2,2,1,1,1};
    int n = 9;

    sortColors(colors, n);

    cout << "Sorted colour codes: ";

    for (int i = 0; i < n; i++) {
        cout << colors[i] << " ";
    }

    return 0;
}