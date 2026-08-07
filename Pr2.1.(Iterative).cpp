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
    string plates[] = { "JK10QS2108", "KN11RT0408", "MO13EF1234", "HK03HK6909"};
    string target;
    cout << "Enter the license plate to search: ";
    cin >> target;

    int Result = iterativeLinearSearch(plates, size, target);
    if (Result != -1)
        cout << "Iterative Search: Plate found at position " << Result << endl;
    else
        cout << "Iterative Search: Plate not found" << endl;

}