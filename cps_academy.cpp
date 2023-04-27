
                                        /*  -> MODULE 1 <-  */
                /* class 6 */ 

/* type casting */
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 1e9;
//     long long int c = (long long int)a*a;

//     /* storing multiplication of a*a */

//     cout<<c<<endl;
// }

    /*      class 7     */

/* modulus */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // cycle of mods;

//     int a = 17;
//     for (int i = 1; i <= 17; i++)
//     {
//         cout<<i%5<<" ";
//     }
    
//     /*

//     1. kono decimal number ke 10 diye mod korle oi number er decimal 
//     representation er last digit pabo.

//     34 % 10 = 4;

//     2. kono decimal number ke 2 diye mod korle oi number er binary 
//     representation er last digit pabo.

//     34 = 100010

//     34%2 = 0; 0 is the last digit of the binary representation of 34

//     -> so kono decimal value ke jekono number system er base diye
//     mod korle oi number system er representation er last digit ta pawa jabe.
    

//     */

// }

/*   DECIMAL TO BINARY       */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int a = 23; /* binary representation of 23 = 10111*/
//     string str;
//     while(a!=0){
//                             /* mod , div, mod, div ... mod,div */
//        char c = (a%2)+48;
//        str.push_back(c);
//         a = a/2;
//     }
//     reverse(str.begin(),str.end());
//     cout<<str<<endl;
// }


// digits 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 2345;
    string str;

    while(a!=0){    
        int d = a%10; // mod , div , mod , div .... mod, div,mod , div //
        char c = d+48;
        str.push_back(c);
        // cout<<d;
        a = a/10;
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}