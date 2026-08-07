#include <iostream>
using namespace std;

int iterativeBinarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            high = mid + 1;
        }
        else
        {
            low = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int bookCodes[] = {309,568,987,123,456,234,512,321};
    int size = sizeof(bookCodes) / sizeof(bookCodes[0]);

    int target;
    cout << "Enter the book code to search: ";
    cin >> target;

    int iterativeResult = iterativeBinarySearch(bookCodes, size, target);
    
    if (iterativeResult != -1)
        cout << "Iterative Binary Search: Book code found at position " << iterativeResult << endl;
    else
        cout << "Iterative Binary Search: Book code not found" << endl;

}