#include <iostream>
using namespace std;

int recursiveLinearSearch(string plates[], int size, string target, int index)
{if (index == size)
    {return -1;}
if (plates[index] == target)
    { return index;
    }
    return recursiveLinearSearch(plates, size, target, index + 1);
}


int main()
{
    string plates[] = { "JK10QS2108", "KN11RT0408", "MO13EF1234", "HK03HK6909"};
    int size=sizeof(plates)/sizeof(plates[0]);
    string target;
    cout << "Enter the license plate to search: ";
    cin >> target;

    int Result = recursiveLinearSearch(plates, size, target,0);
    if (Result != -1)
        cout << "Iterative Search: Plate found at position " << Result << endl;
    else
        cout << "Iterative Search: Plate not found" << endl;

}