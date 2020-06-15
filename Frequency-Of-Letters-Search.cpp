//
//  main.cpp
//  Search for any
//
//  Created by Khalid  on 8/28/17.
//  Copyright © 2017 Khalid Alghamdi. All rights reserved.
//

#include <iostream>

using namespace std;
// size of char array
const int arrSize = 100;
int main()
{
    /* this program works for any word not just mississippi word*/
    // create a char array
    char word[100];
    // counter to count each character
    int counter;
    
    // read string from user
    cout << "Please Enter your word: " ;
    cin >> word;
    
    // this line only to copy content of char array to string variable
    // in case we will need it
    string str(word);
    
    cout << "The frequency of letters in the word '" << word << "': \n";
    
    // using two loops, we compare each letter with other letters
    // then we eliminates them (by replacing the letters by character - ), and increment count variable
    for (int i = 0; word[i] != '\0'; i++)
    {   counter =1;
        if(word[i] == '-') continue;
        for (int j = i + 1; word[j] != '\0'; j++){
            
            if (word[i] == word[j] && word[j] != '-' ){
                counter++;
                word[j] = '-';
            }
            
        }
        // at the end of each loop display frequency of each letter
        cout << "Frequency of " << word[i] << " = " << counter << endl;
    }
    
    return 0;
}

