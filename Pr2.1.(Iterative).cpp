#include <iostream>
using namespace std;

int iterativeLinearSearch(string plates[], int size, string target)
{ for (int i = 0; i < size; i++)
    { if (plates[i] == target){
            return i;
        }
    }
    return -1;
}


int main()
{
    string plates[] = {"KA01AB1234", "MH12XY5678", "DL05CD9999", "TN10EF1111", "MH12XY5678"};
    int size = sizeof(plates) / sizeof(plates[0]);

    string target;
    cout << "Enter the license plate to search: ";
    cin >> target;

    int iterativeResult = iterativeLinearSearch(plates, size, target);
    
    if (iterativeResult != -1)
        cout << "Iterative Search: Plate found at position " << iterativeResult << endl;
    else
        cout << "Iterative Search: Plate not found" << endl;

}