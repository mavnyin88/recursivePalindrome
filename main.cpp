//
//  main.cpp
//  Recursive_Palindrome
//
//  Created by Michael Avnyin on 10/6/15.
//  Copyright (c) 2015 Michael Avnyin. All rights reserved.
//

#include <iostream>
using namespace std;

string palindrome(string x, int first, int last){
    
    if (last <= first) return "This is a palindrome.";
    
    if (x.substr(first,1)==x.substr(last,1)){
        
        return palindrome(x,first+1,last-1);
    }
    else return "This is not a palindrome.";
}


int main(int argc, const char * argv[]) {

    string p;
    cout << "Enter a series of letters: ";
    cin >> p;
    int first = 0;
    int last = p.length()-1;
    cout << palindrome(p,first,last) << endl;
    
    return 0;
}
