#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

int start =0, last = 0; ///to find unarranged area
char word[] = "eyssaasse",tergate[] ="essayasse" ; /// default case took for debug fast
int c =0;
void swap(char *xp, char *yp)
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;

}
int bubol_sort()
{

    for(int i = start+1; i< strlen(word)-last-1 ; i++)
    {
        for(int j =start+1; j<strlen(word)-last-i-1; j++ )
        if (word[j] > word[j+1]){
         swap(&word[j], &word[j+1]);
         c++;
         if(word == tergate)
            break;
    }

}
return c;
}
int main() {
	int n;


        while(true){
            cin>>word>>tergate; //user input

        for(int i =0 ; i<strlen(word); i++)
        {
            if(word[i]!=tergate[i])
              break;
              start =i;

        }

        for(int i =strlen(word); i>=0; i--)
        {

            if(word[i] !=tergate[i])
             break;

            last =i;


        }

		cout<<bubol_sort()<<endl;

		c=0;

        }


	return 0;
}
