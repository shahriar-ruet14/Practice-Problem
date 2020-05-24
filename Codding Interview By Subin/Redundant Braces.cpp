#include<bits/stdc++.h>
using namespace std;
bool redundantBraces()
{
    //string str = "(a+b*(c-d))";
    string str = "((a+b))";
    stack<char> stk;
   char top;
   for(auto& ch: str)
   {
       if(ch == ')')
       {
            top = stk.top();
            stk.pop();

            bool flag = true;
            while(top != '(' )
            {
                /* Before a closing bracket ) no operand is possible*/
                if (top == '+' || top == '-' ||
					top == '*' || top == '/')
					flag = false;
            top = stk.top();
            stk.pop();
            cout<<top<<" ";
            }

            if(flag == true)
                return true;
       }
       else
        stk.push(ch);

   }
   return false;
}


int main()
{
    cout<<redundantBraces();
}
