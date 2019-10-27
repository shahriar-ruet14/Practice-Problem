#include<bits/stdc++.h>
using namespace std;

main()
{

    int t,l,c,i;
    cin>>t;
    char S[100];
    while(t-->0)
    {
        c =0;
        cin>>S;
       l = strlen(S);

      if(l%3 !=0)
        return 0;
        i=0;
        while(i++<l)
        {
            switch((i+1)%3)
            {
            case 1 || 0 :
                if(S[i] != 'S')
                    c++;

                break;
                case 2: if(S[i] != 'O')
                    c++;


                break;
            }
        }
      cout<<c<<endl;

    }
}

