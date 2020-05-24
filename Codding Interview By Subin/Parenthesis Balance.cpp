#include<bits/stdc++.h>
using namespace std;

bool parenthesisBalance()
{
    string stk;
    cin>>stk;
    cout<<stk<<endl;
    stack<char>input;
    char c;
    char top;
    for(int i = 0 ; i< stk.size(); i++)
    {
        c = stk[i];
        cout<<c<<endl;

            if(c == '{' || c == '(' || c == '[')    input.push(c);
            else
            {

                top = input.top();
                if((c == ']'&& top == '[')||( c== '}'&& top == '{') || (c == ')' && top == '('))
                    input.pop();
                else
                    return false;
            }
        }

    if(input.size()) return false;
    else
        return true;
}


int main()
{
    while(1)
    {
        cout<<"Result : "<<parenthesisBalance()<<endl;

    }
}
