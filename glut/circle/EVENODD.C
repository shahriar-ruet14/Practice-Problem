#include<stdio.h>

int main()
{
    int n=1; ///value of n can be take as user input -> scanf() use kora jete pare
    while(n<5)
    { ///This { initialize the while loop range
        if(n%2 == 0) ///in your code here was a semicolon that is not allowed
        {
            printf("%i is Even\n",n);
        }
        else ///Here you can also use if(n%2 != 0)
        {
            printf("%i is Odd\n",n);
        }
        n= n+1;
    } ///This } Limits while loop area
}


///**** Your task is to take a user input range to show either it is EVEN or ODD
/// That means n er man ta input niba ar koto dur porjonto check korba setao input niba.
    ///2 ta input such as :5 abong 10 akhon 5 theke 10 er majher sob even odd dekhabe output a
