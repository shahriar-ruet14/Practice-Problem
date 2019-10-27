#include<bits/stdc++.h>
using namespace std;

class B
{
    int prvB1;
public:
    B()
    {
        prvB1 = 0;
    }
    void getprvB1(int x)
    {
        prvB1 = x;
    }
    void show_prvB1(A a) ///will be declared  as a friend function, so no inline definaton
};


class A
{
    int prvA1;
public:
    A()
    {
        prvA1 = 0;
    }
    void getprvA1(int x)
    {
        prvA1 = x;
    }
    friend void::show_prvB1(A a);

};
void B:: show_prvB1(A a)
{
    cout<<"\nvalue of prvA1 "<<prvA1;
    cout<<"\nvalue of prvB1 "<<prvB1;

}
int main()
{
    A a1;
    B b1;
    G



    return 0;
}
