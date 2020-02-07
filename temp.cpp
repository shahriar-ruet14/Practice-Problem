#include<bits/stdc++.h>
using namespace std;

void print_func(int a)
{
    if(a>1)
    {
        print_func(a-1);
    }
    cout<<a;
}


main()
{
    print_func(10);

}
