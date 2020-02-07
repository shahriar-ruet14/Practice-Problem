#include<bits/stdc++.h>
using namespace std;

struct Player
{
    int score;
    string name;
};


/*int comparator(Player a, Player b)
{


    if (a.score==b.score)
    {
        if(a.name > b.name)
            return -1;
    }

    return 1;

}
*/
bool compare(Player a, Player b)
{
if (a.score==b.score)
    {
        if(a.name > b.name)
            return false;
        else
            return true;
    }

    if(a.score > b.score)
        return true;
    else
        return false;


}

int main()
{
    vector<Player>players;
    string name;
    int score;

    int t;
    cin>>t;
    for(int i =0 ; i< t; i++)
    {
        cin>>name>>score;

        Player player_ob;
        player_ob.name = name;
        player_ob.score = score;
        players.push_back(player_ob);
    }
    sort(players.begin(), players.end(), compare); ///now complete the comparator function

   // cout<<endl;
    for(int  i=0 ; i<players.size(); i++)
    {
        cout<<players[i].name<<" "<<players[i].score<<endl;
    }






    return 0;
}
