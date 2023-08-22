
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


// // digits 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 2345;
//     string str;

//     while(a!=0){    
//         int d = a%10; // mod , div , mod , div .... mod, div,mod , div //
//         char c = d+48;
//         str.push_back(c);
//         // cout<<d;
//         a = a/10;
//     }
//     reverse(str.begin(),str.end());
//     cout<<str<<endl;
// }

// /*  class 8 */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // and operator 

//     cout<<(  5&6&8  )<<endl;
 
//     // or operator 
//     cout<<(  5|6|8  )<<endl;

//     // x-or operator 

//     cout<<(  5^6^8  )<<endl;


//     // even shongkhok 1 er x-or always 0
    
//     cout<<(1^1^1^1)<<endl; // 1 4ta

//     // ODD shongkhok 1 er x-or always 1

//     cout<<(1^1^1^1^1)<<endl; // 1 5ta 


//     // a er shate a ke x-or korle 0 ashbe

//     cout<<( 5 ^ 5 )<<endl;

//     // from 5 numbers , there is only one unique value , which one is unique 
//     // 4 6 4 6 1
//     // 4 4 4 4 1

//     // a b c d e
//     int a = 4,b = 6,c = 4,d = 6, e = 10;

//     cout<<(a^b^c^d^e)<<endl;

//     // n-1 numbers will be given, those will be 1 to n. one number will be missing 
//     // find the missing number;

//   int ara[4] = {1,4,3,2};

//   int p = 0;
//   for ( int i = 0; i < 4; i++)
//   {
//     p = p ^ ara[i];

//   }

//   int q = 0;
//   for ( int i = 1; i <=5; i++)
//   {
//     q = q ^ i;
//   }

//   cout<<(p^q)<<endl;// 5 is missing 


// }

// // class 11  [ IF ELSE ]
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 10, b = 5;

//     string s = (a>b) ? "A is Bigger " : "B is Bigger";
//     cout<<s<<endl;
// }

//class 13 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
// //finding square root of a number
//     int sq = 0;
//     for (int i = 1; i <=a ; i++)
//     {
//         if(i*i >=a){
//             if(i*i == a){
//                 sq = i;
//             }else{
//                 sq = i-1;
//             }
//             break;
//         }
//     }

//     int ct = 0;
//     for (int i = 1; i <=sq; i++)
//     {
//         if(a%i == 0){

//             int c  = a/i;
//             if(c==i){
//                 ct++;
//             }else{
//                 ct+=2;
//             }
//         }
//     }

//     cout<<ct<<endl;
    

    
// }

/// max array
// const int mx = 1e8
// int ara[mx];

// matrix rotation 90 degree clockwise

// int n ;
// int ara[n][n];
// int rot[n][n];

// for ( int i = 0,x = 0; i < n; i++,x++)
// {
//     for (int j = n-1,y=0; j >=0 ; j--,y++)
//     {
//         rot[x][y] = ara[j][i];
//     }
    
// }


// // matrix rotation 90 degree anticlockwise
// int n ;
// int ara[n][n];
// int rot[n][n];

// for ( int i = n-1,x = 0; i >=0 ; i--,x++)
// {
//     for (int j = 0,y=0; j<n ; j++,y++)
//     {
//         rot[x][y] = ara[j][i];
//     }
    
// }

// Erasing all occurrence of a specific char from string.

	// string str = "aaassdddaaasdd";

	// // removing all occurence of d;

	// str.erase(remove(str.begin(),str.end(),'d'),str.end());

	// cout<<str<<endl;//aaassaaas



// //checking if a string is a sub-string of the main string 
// 	string str = "showrav";

// 	if(str.find("rav") != -1){
// 		cout<<"FOUND\n";
// 	}else{
// 		cout<<"NOT FOUND\n";
// 	}

//always use double type with log() fucntion


// reverse a queue
// https://practice.geeksforgeeks.org/problems/queue-reversal/1
// queue<int> rev(queue<int> q)
//     {
        
//     stack<int>st;

//     while(!q.empty()){
//         st.push(q.front());
//         q.pop();
//     }

//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }
    
//     return q;

// }


//Reverse First K elements of Queue ( Geeks for Geeks )
//  https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

// approach with stack and queue (obviously )
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
      
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     int k = 3;
    
//     stack<int> st;
//     queue<int> tq;

//     while(k--){
//         st.push(q.front());
//         q.pop();


//     while( !st.empty()){
//         tq.push(st.top());
//         st.pop();
//     }


//     while (!q.empty())
//     {
//         tq.push(q.front());
//         q.pop();
//     }

// 	// in GFG return the TQ in solve function
//     while( !tq.empty()){
//         cout<<tq.front()<<" ";
//         tq.pop();
//     }   
// }

// Substring check
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int is_subString(string s1,string s2)
// {
//     if(s1.find(s2) == string::npos){
//         // not substring
//         return 0;
//     }else{
//         return 1;
//         // substring
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
      
//     cout<<is_subString("abaaba","aba");
// }

//substring with index 
// C++ implementation of the approach

#include <bits/stdc++.h>
using namespace std;

// function to get the index of s2 in s1
int isSubstring(string s1, string s2)
{
	// using find method to check if s1 is
	// a substring of s2
	if (s2.find(s1) != string::npos)
		return s2.find(s1);
	return -1;
}

// Driver code
int main()
{
	string s1 = "for";
	string s2 = "geeksforgeeks";

	// Function Call
	int res = isSubstring(s1, s2);
	if (res == -1)
		cout << "Not present";
	else
		cout << "Present at index " << res;
	return 0;
}

// this code is contributed by phasing17
