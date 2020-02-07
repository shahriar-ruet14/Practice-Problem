#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
int Count = 0;

int l= s.size();
    for(int i =1 ; i< l; i++){


        for(int j =0; j<l; j=j+i)
        {



        while(next_permutation(s.begin(),s.end()))
        Count++;

        }
    }


return Count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);
       sort(s.begin(),s.end());

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
