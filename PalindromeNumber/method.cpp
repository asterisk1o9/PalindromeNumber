//
//  method.cpp
//  PalindromeNumber
//
//  Created by Marvin Augustin on 6/9/22.
//

#include "method.hpp"

vector <int> nums;

void method::convertX(int x){
    
    if(x >= 10)
        convertX(x / 10);

        int digit = x % 10;
    //cout << digit << " ";
        nums.push_back(digit);

}

void method::print(){
    for(auto e : nums){
        cout << e << " ";
    }
    cout << "\n";
}

bool method::isPalindrome(int x){
    convertX(x);
    print();

    auto beg = nums.begin();
    //auto midUp = nums.begin() + (nums.size() / 2);
    //auto midDown = nums.begin() + (nums.size() / 2);
    auto end = nums.end() -1;
    
    if(nums.size() %2 ==0){
        for(auto midUp = nums.begin() + (nums.size() / 2), midDown = nums.begin() + ((nums.size() / 2)-1); midUp != end || midDown == beg; midUp++, midDown--){
            cout << "Left value is " << *midDown << " and right value is " << *midUp << "\n";
            if(*midUp != *midDown){
                cout << "No palindrome";
                break;
            }
        }
    }
    else{
        cout << "Palindrome";
    }
    
    return false;
}


