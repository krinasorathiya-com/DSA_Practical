#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);

    string longestWord = "";
    string currentWord = "";
    int maxLength = 0;
    int currentLength = 0;

    for(char c : sentence)
    {
        if (c == ' ')
        {
            if (currentLength > maxLength)
            {
                longestWord = currentWord;
                maxLength = currentLength;
            }
            currentWord = "";
            currentLength = 0;
        }
        else
        {
            currentWord += c;
            currentLength++;
        }
    }
}