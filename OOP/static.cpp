#include<bits/stdc++.h>
using namespace std;

class Sample
{
    static int x,y;
public:
    void setxy(int a, int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<"  " <<y<<endl;
    }

    Sample(int m)
    {
        cout<<"\nparameterized Constractor "<<m;
        cout <<"calling form COnstrucor\n";
        x= 1;
        y=1;
        print();
    }
    ~Sample()
    {
        cout<<"\nparameterized Destractor ";
        cout <<"calling form Destrucor\n";
        x= 2;
        y=2;
       l. print();
    }

};

int Sample::x;
int Sample::y;
///To access Static member it need to use scope resulation.



///friend Class



class A
{
    int private_A;
public:
    A(){private_A = 0;}
    void set_A(int a){ private_A = a;}

};
class B
{

};



int main()
{
    Sample sm(55);
    sm.setxy(5,10);
    sm.print();




    return 0;
}
