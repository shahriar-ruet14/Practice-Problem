#include<bits/stdc++.h>
using namespace std;


int product(int a, int b)
{
    if(a==0 || b== 0)
        return 0 ;
    else
    {
        return a+product(a,b-1); ///aktu complexity komano jabe choto boro consider kore

    }
}

main()
{
    int a,b;
    while(true){

    cin>>a>>b;
    cout<<product(a,b)<<endl;

    }

}
