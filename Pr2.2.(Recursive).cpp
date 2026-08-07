#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int low, int high, int target)
{
    if (low > high)
    { return -1;
    }

    int mid = (low+ high) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return recursiveBinarySearch(arr, mid + 1, high, target);
    }
    else
    {
        return recursiveBinarySearch(arr, low, mid - 1, target);
    }
}

int main()
{
    int bookCodes[] = {309,568,987,123,456,234,512,321};
    int size = sizeof(bookCodes) / sizeof(bookCodes[0]);
    int target;

    cout << "Enter the book code to search: ";
    cin >> target;


    int recursiveResult = recursiveBinarySearch(bookCodes, 0, size - 1, target);
    if (recursiveResult != -1)
        cout << "Recursive Binary Search: Book code found at position"<< recursiveResult << endl;
    else
        cout << "Recursive Binary Search: Book code not found" << endl;

    return 0;
}