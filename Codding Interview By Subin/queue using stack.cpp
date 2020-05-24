
#include<bits/stdc++.h>
using namespace std;


void queueByStack()
{
    cout<<"1. to enqueue\n2. to dequeue"<<endl;
    int x;
    stack<char> stk1,stk2;

   while(1){ cin>>x;
    switch (x){
        case 1: char ch;
                cin>>ch;
                stk1.push(ch);
                cout<<"push done"<<endl;
                break;
        case 2:
           if(!stk2.size())
           {
                while(stk1.size())
                {
                    stk2.push(stk1.top());
                    stk1.pop();
                }
           }
           cout<<"Dequeue Element : "<<stk2.top()<<endl;
            stk2.pop();
            break;
    }
    }

}
int main()
{
    queueByStack();


}
