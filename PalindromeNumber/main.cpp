//
//  main.cpp
//  PalindromeNumber
//
//  Created by Marvin Augustin on 6/9/22.
//

#include <iostream>
#include "method.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    method testObj;
    
    int x = 112211;
    
    //testObj.convertX(x);
    cout << "\n";
    testObj.isPalindrome(x);
    cout << "\n";

    return 0;
}
