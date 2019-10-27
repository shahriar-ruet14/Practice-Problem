
#include<bits/stdc++.h>
using namespace std;





int i(10),j(20);




int& swap_function(){
return i; ///this function returns only memory of i
}
main()

{
 swap_function() =j; ///here in the memory of i , J is assigned so i become 20
    cout<<i;

}
