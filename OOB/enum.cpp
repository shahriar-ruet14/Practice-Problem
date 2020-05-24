#include<bits/stdc++.h>
using namespace std;


main()
{



    // declaring weekdays data type
    enum weekdays { mon,
                    tues,
                    wed =50,
                    thurs,
                    fri,
                    sat,
                    sun };
    // a variable named day1 holds the value of wed
    enum weekdays day1 = wed;

    // mon holds 0, tue holds 1 and so on
    cout << "The value stored in wed is :" << day1 << endl;
    cout << "The value stored in sun is :" << sun << endl;

    // looping through the values of
    // defined integral constants
    for (int i = mon; i <= sun; i++)
        cout << i << " ";
    cout << endl;

    return 0;



    return 0;
}

