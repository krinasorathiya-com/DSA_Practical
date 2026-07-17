#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    
stringstream ss(sentence);
string word;
string longestWord;


    while (ss >> word)
    {
        if (word.length() > longestWord.length())
        {
            longestWord = word;
        }
    }

    if (longestWord.empty())
    {
        cout << "No word entered." << endl;
    }
    else
    {
        cout << "Longest word: " << longestWord << endl;
        cout << "Length: " << longestWord.length() << endl;
    }

    return 0;
}