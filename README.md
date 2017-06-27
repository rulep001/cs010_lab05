# CS 10 - Lab 5: Introduction to `for` Loops

## Overview
You will continue to submit a single file to R'Sub, but you will follow the framework below to set up your program.
Your submission will have multiple blocks. All the code for an exercise goes in the corresponding branch.

### Framework
```
#include <iostream>

using namespace std;

int main()
{
    int ex;
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;
    if (1 == ex)
    {
        // All Exercise 1 code
    }
    else if (2 == ex) {
        // All Exercise 2 code
    }
    ...etc...
    return 0;
}
```

### Setup
1. Create a file named `lab5.cpp` within the proper directory.
2. Copy‐paste or type the denoted framework into your file.
3. Fix any indenting to match your indenting style.
4. Copy‐paste the proper assessment header, then fill in.

## Exercise 1
In the prelab you used the `at()` function to test the value of individual characters in a string. This time, you will use the same function to modify characters.
Follow exactly the same process, but now instead of reporting whether the characters are present, change all occurrences of 'e' to '3', of 'i' to '1', and of 'x' to '\*' (this is an unfortunately common tactic for creating “strong” passwords).
As you can see, the `at()` function is versatile ‐ it works for both reading ("looking at"), and writing ("changing") individual characters inside a string.

## Exercise 2
Frequently, we will need to know if a certain character, or word, or phrase, is present in a string; and if it is present, we need to know where. We could use the looping technique we practiced above ‐ but this is such a common task that the string class provides us with a function for it (find).
1. Prompt the user for a string, read in a single word.
2. Now, using the find function, report the index of the first occurrence of:
    1. the character '.' and
    2. the location of the first occurrence of the string "stop".
If what you are searching for is NOT present in the string, report that fact.
Remember, the find function can take an argument of type char, or of type string, and if the requested value is not present, the function returns the special value `string::npos`

## Known Bugs
No currently known bugs!
