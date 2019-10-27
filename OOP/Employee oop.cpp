#include<bits/stdc++.h>
#include<conio.h>
#include<dos.h>
using namespace std;

class Employee
{
private:
    char* emp_name;
    int emp_join_year;
    float emp_salary;
public:

    Employee(char* name, int year, float salary);
private:
    int worked_year(void);
    void print_info(void);


};

Employee:: Employee(char* name, int year, float salary)
{
    emp_name = name;
    emp_join_year = year;
    emp_salary = salary;
    print_info();

}

int Employee:: worked_year(){

   struct date current_date;
   int year_difference;
   getdate(&current_date);
   year_difference = current_date.
    }


int main()
{



    return 0;
}
