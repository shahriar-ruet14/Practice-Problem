#include<bits/stdc++.h>
using namespace std;


main()
{
   ifstream infile;
	infile.open("abc_test.txt");
	//ofstream outfile;
	//outfile.open("p4out1.txt");
	int counter =0;
	while(!infile.eof())
	{
		char c = infile.get();

        cout<<c;
        counter++;
        if(counter%30 == 0)
        {
            cout<<endl;
        }
	}
}



