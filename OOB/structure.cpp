#include<bits/stdc++.h>
using namespace std;



struct Person
{
    char name[50];
    int age;
    float salary;
};
union Person1
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;
    float a;
    Person1 union1;

cout<<sizeof(p1)<<endl;
cout<<sizeof(union1)<<endl; ///union is better in terms of memory allocation


    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}
