#include <iostream>
using namespace std;
int main()
{

    int n1, n2, max;
    label:
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    while (true)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max<<endl;
            break;
        }
        else
            ++max;
    }
    goto label;

    return 0;
}
