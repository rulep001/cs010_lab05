//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab5.cpp
/// @brief Lab 5
///
/// @author Ryan Ulep [rulep001@ucr.edu]
/// @date April 28, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ex;
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;

    if (1 == ex)
    {
        int i;
        string word;
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;

        // Looks for values in word
        for (i = 0; i < word.length(); i++) {
            if (word.at(i) == 'e') {
                word.at(i) = '3';
            }
            if (word.at(i) == 'x') {
                word.at(i) = '*';
            }
            if (word.at(i) == 'i') {
                word.at(i) = '1';
            }
        }
        cout << "Your word transformed is " << word << endl;
    }
    else if (2 == ex)
    {
        int i;
        bool period = true;
        bool stop = true;
        string word;

        // Checks for certain characters
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;

        for (i = 0; i < word.length(); i++) {
            if (word.at(i) == '.') {
                cout << "The character \'.\' is located at index " << i << endl;
                period = false;
            }
        }
        if (period) {
            cout << "The entry does not contain the character \'.\'" << endl;
        }
        // Looks at position
        int position;
        position = word.find("stop");
        if (position >= 0 && position <= word.length() - 1) {
            cout << "The word \"stop\" starts at index " << position << endl;
            stop = false;
        }
        if (stop) {
            cout << "The entry does not contain the word \"stop\"" << endl;
        }
    }

    return 0;
}
