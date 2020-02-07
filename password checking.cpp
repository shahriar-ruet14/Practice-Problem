#include<bits/stdc++.h>
using namespace std;

void check(char a[])
{
    bool flag1 =false ,flag2 =false ,flag3 =false,flag4 = false;

    for (int i =0; a[i]!= '\0'; i++)
    {
        if((a[i]>=48&&a[i]<=58))
        {
            flag1 = true;
        }
        if(a[i]=='#'||a[i]=='$'||a[i]=='*'||a[i]=='&') flag2= true;
        if((a[i]>=65&&a[i]<=90)) flag3 =true;


        cout<<a[i];

    }
     if(flag1==true &&flag2==true &&flag3==true)
    printf("\ntrue password\n");
    else
    printf("wrong\n");

}



main()
{
 char pass[10] = "Aab1#a12d";
   printf("Enter your password that should satisfy the following criteria\n1. password should contain atleast one capital letter\n2. should have one digit from(o-9)\n3. atleast one special charecter($,*,#,&)\n4. length should be atleast 6\n");
      check(pass);

}
