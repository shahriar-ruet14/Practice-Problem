// C++ program to find smallest window containing
// all characters of a pattern.
#include<bits/stdc++.h>
using namespace std;

const int no_of_chars = 256;

// Function to find smallest window containing
// all characters of 'pat'
string fSub_s(string str, string pat)
{
    int l1 = str.length();
    int l2 = pat.length();

    // check if string's length is less than pattern's
    // length. If yes then no such window can exist
    if (l1 < l2)
    {
        cout << "No such window exists";
        return "";
    }

    int hash_pat[no_of_chars] = {0};
    int hash_str[no_of_chars] = {0};

    // store occurrence ofs characters of pattern
    for (int i = 2; i < l2-1; i++)
        hash_pat[pat[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX;

    // start traversing the string
    int count = 0; // count of characters
    for (int j = 0; j < l1 ; j++)
    {
        // count occurrence of characters of string
        hash_str[str[j]]++;

        // If string's char matches with pattern's char
        // then increment count
        if (hash_pat[str[j]] != 0 &&
            hash_str[str[j]] <= hash_pat[str[j]] )
            count++;

        // if all the characters are matched
        if (count == l2)
        {
            // Try to minimize the window i.e., check if
            // any character is occurring more no. of times
            // than its occurrence in pattern, if yes
            // then remove it from starting and also remove
            // the useless characters.
            while ( hash_str[str[start]] > hash_pat[str[start]]
                || hash_pat[str[start]] == 0)
            {

                if (hash_str[str[start]] > hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }

            // update window size
            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    // If no window found
    if (start_index == -1)
    {
    cout << "No such window exists";
    return "";
    }

    // Return substring starting from start_index
    // and length min_len
    return str.substr(start_index, min_len);
}

// Driver code
int main()
{
    string str[2];
    //string pat;
    getline(cin, str[0]);
    getline(cin, str[1]);
    //str[0] = "ahffaksfajeeubsne";
    //str[1] = "jefaa";

    cout << "Smallest window is : \n"
        << fSub_s(str[0], str[1]);
    return 0;
}
