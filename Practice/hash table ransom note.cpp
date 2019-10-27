#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

    unordered_map<string,int>::iterator it;




bool ransom_note( vector<string> magazine, vector <string> ransom )
{
    unordered_map<string, int> u_map;
    for(int i =0 ; i< magazine.size(); i++)
    {
        it = u_map.find(magazine[i]);
        if(it == u_map.end())  ///match
        {
            u_map.insert(pair< string, int > (magazine[i],1));

        }
        else
        {
            u_map[magazine[i]]++;
        }
    }
    for(int i =0 ; i< ransom.size(); i++)
    {
        it =u_map.find(ransom[i]);
        if(it == u_map.end())
        {
            return false;
        }
        else if(it->second == 0)
            return false;

        u_map[ransom[i]]--;
    }
    return true;



}





int main()
{
    int m,n;
    cin>>m>>n;
    vector<string> magazine(m);
    for(int i =0 ; i< m; i++)
        cin>>magazine[i];


    vector< string > ransom(n);
    for(int i =0 ; i< m; i++)
        cin>>ransom[i];

    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;


}
