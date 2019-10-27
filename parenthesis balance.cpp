#include<bits/stdc++.h>
using namespace std;


bool areParanthesisBalanced(string expr, int l)
{
    stack <char> s;


    char x;

    for(int i =0 ; i<l; i++)
    {


        if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }

        /// If s.empty te closing bracket pai tahole end;
        if(s.empty())
            return false;

        switch (expr[i])
        {
        case ')':
            x =  s.top();
            if(x == '}' || x == ']')
                return false;
            s.pop();
            break;

        case '}':
            x =  s.top();
            if(x == ')' || x == ']')
                return false;
            s.pop();
            break;

        case ']':
            x =  s.top();
            if(x == '}' || x == ')')
                return false;
            s.pop();
            break;
        }

    }
    return s.empty();

}

main()
{
    string expr = "{()}[](])";
    int l = expr.length();
    cout<<l<<endl;

    bool result = areParanthesisBalanced(expr, l);

    cout<<result;



}
