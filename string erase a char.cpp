// CPP code to illustrate
// erase(size_type idx, size_type len )
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

// Function to demo erase
void eraseDemo(string str)
{
    // Deletes 4 characters from index number 1
    //str.erase(4,1);

for(int i =4; i<sizeof(str)/sizeof(str[0])-1; i++)
{
    str[i]=str[i+1];
}
    cout << "After erase : ";
    cout << str;
}

// Driver code
int main()
{
    string str("Hello World!");

    cout << "Before erase : ";
    cout << str << endl;
    eraseDemo(str);

    return 0;
}
