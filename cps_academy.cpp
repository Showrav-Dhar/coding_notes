
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

// #include <bits/stdc++.h>
// using namespace std;

// // function to get the index of s2 in s1
// int isSubstring(string s1, string s2)
// {
// 	// using find method to check if s1 is
// 	// a substring of s2
// 	if (s2.find(s1) != string::npos)
// 		return s2.find(s1);
// 	return -1;
// }

// // Driver code
// int main()
// {
// 	string s1 = "for";
// 	string s2 = "geeksforgeeks";

// 	// Function Call
// 	int res = isSubstring(s1, s2);
// 	if (res == -1)
// 		cout << "Not present";
// 	else
// 		cout << "Present at index " << res;
// 	return 0;
// }

// // this code is contributed by phasing 17

// //count digit in number

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n = 100;

//     int Num_Of_Digit = floor( log10(n)+1 );

//     cout<<Num_Of_Digit<<endl;
// }


//balanced bracket

// bool is_balanaced(string str){
//     stack<char>st;

//     int flag = 1;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if(str[i] == '('){
//             st.push(str[i]);
//         }else{
//             if(st.size() == 0){
//                 flag = 0;
//                 break;
//             }else{
//                 if(st.top() == '(' and str[i] == ')'){
//                     st.pop();
//                 }else{
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//     }

//     if(st.size() == 0 and flag == 1){
//         return true;
//     }else{
//         return false;
//     }
// }

//			module 2
//prefix sum and contributuon technique

//cses 1650 (range xor queries)
// just do partial xor of all item then do xor of pref[r]^pref[l-1]

// leetcode 1480
// leetcode 560 
// subarray sum equal K
// CSES 1661
//CSES 1660
// int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
        
//         int sum = 0;
//         int ans = 0;

//         unordered_map<int,int>finder;
//         finder[sum] = 1; // (0 er count 1 kore disi) 

//         for(int i = 0;i<n;i++){
//             sum+=nums[i];// prefix sum nichhi

//             ans += finder[sum-k];

//             finder[sum]++;

//         }

//         return ans;
//     }


// subsequence checker

// if target string is subsequence of s2 string

// bool is_subsequence(string target,string s2){
    
//     stack<char>s;
//     for(auto it : target){
//         s.push(it);
//     }

//     for (int i = s2.length()-1; i >= 0; i--)
//     {
//         if(s.empty()){
//             return true;
//         }

//         if(s.top() == s2[i]){
//             s.pop();
//         }
//     }
    
//     if(s.empty()){
//         return true;
//     }else{
//         return false;
//     }
    
// }


// Merge Sort
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e5;
// int ara[mx];

// void Merge(int l,int mid,int r){
//     int temp[mx];
//     int Tid = 0;
//     int Lid = l;
//     int Rid = mid+1;

//     while (Lid<=mid and Rid<=r)
//     {
//         if(ara[Lid]<=ara[Rid]){
//             temp[Tid] = ara[Lid];
//             Lid++;
//             Tid++;
//         }else{
//             temp[Tid] = ara[Rid];
//             Rid++;
//             Tid++;
//         }
//     }
//     while(Lid<=mid){
//         temp[Tid] = ara[Lid];
//             Lid++;
//             Tid++;
//     }

//     while (Rid<=r)
//     {
//        temp[Tid] = ara[Rid];
//             Rid++;
//             Tid++;
//     }

//     Tid = 0;
//     for (int i = l; i <=r; i++)
//     {
//         ara[i] = temp[Tid];
//         Tid++;
//     }
    
    
// }

// void MergeSort(int l,int r){
//     if(l==r){
//         return;
//     }

//     int mid = (l+r)/2;
//     MergeSort(l,mid);
//     MergeSort(mid+1,r);

//     Merge(l,mid,r);
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ara[i];
//     }

//     MergeSort(0,n-1);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<ara[i]<<" ";
//     }
    
    
      
// }

/// working with structure

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// struct person
// {
//     double score;
//     int age;
//     string name;
// };

// bool cmp(const person &a,const person &b){
    
//     if(a.score > b.score) return true;// higher score gets more priority
//     else if(a.score == b.score and a.age < b.age) return true;//if score same then lesser age 
//     else if(a.score == b.score and a.age == b.age and a.name<b.name) return true;
//     return false;
// }

// void printStruct(person info){
//     cout<<info.name<<" "<<info.age<<" "<<info.score<<endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     person a;
//     a.score = 3.95;
//     a.age = 23;
//     a.name = "pazi";

//     person b;
//     b.score = 3.15;
//     b.age = 23;
//     b.name = "Showrav";

//     cout<<cmp(a,b)<<endl;// as a has higher score so the output will be equal 1

// }


// first and last occurence of a number using bs
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     int ara[13] = {9, 9, 2, 2, 6, 6, 6, 7, 7, 4, 4, 4, 4};
//     int n = 13;

//     int x = 4;

//     sort(ara, ara + n);
//     // first
//     int l = 0;
//     int r = n - 1;
//     int first_pos = -1;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         if (ara[mid] > x)
//         {
//             r = mid - 1;
//         }
//         else if (ara[mid] < x)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             first_pos = mid;
//             r = mid - 1;
//         }
//     }
//     cout << first_pos << endl;
//     // last
//     l = 0;
//     r = n - 1;
//     int last_pos = -1;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         if (ara[mid] > x)
//         {
//             r = mid - 1;
//         }
//         else if (ara[mid] < x)
//         {
//             l = mid + 1;
//         }
//         else
//         {
//             last_pos = mid;
//             l = mid + 1;
//         }
//     }
//     cout << last_pos << endl;
// }


// LOWER BOUND AND UPPER BOUND

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     vector<int> ara= { 1, 3, 5, 5, 5, 16, 20 };
//     int n = ara.size();
//     int l = 0, r = n-1;
//     int key = 5;
//     //lower bound 
//     int pos = n;
//     while (l<=r)
//     {
//         int mid = (l+r)/2;
//         if(ara[mid]>=key){
//             pos = min(pos,mid);
//             r = mid - 1;
//         }else{
//             l = mid + 1;
//         }
//     }
//     cout<<pos<<endl;
//     //upper bound 
//     l = 0;
//     r = n-1;
//     int pos1 = n;
//     while (l<=r)
//     {
//         int mid = (l+r)/2;
//         if(ara[mid]>key){
//             pos1 = min(pos1,mid);
//             r = mid - 1;
//         }else{
//             l = mid + 1;
//         }
//     }
//     cout<<pos1<<endl;
    
// }

// Fractional Bisection Binary Search 
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     double target = 5;
//     double l = 0;
//     double r = target;

//     double dif = 1e-6;

//     while(r-l>dif){
//         double mid = (l+r)/2;

//         if(mid*mid<=target){
//             l = mid;
//         }else{
//             r = mid;
//         }
//     }      
//     cout<<setprecision(10)<<l<<endl;
// }


// Policy based data structure
// pbds
// #include<bits/stdc++.h>
// using namespace std;

// // extra header files
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

// typedef tree< long long, null_type, less_equal<long long>,
// rb_tree_tag,tree_order_statistics_node_update > ordered_set;

// pbds has 2 fucntions

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

// less<long long> dile set (choto theke boro)
// greater<long long> dile set (boro theke choto)
// less_equal<long long> dile multiset (choto theke boro)
// greater_equal<long long> dile multiset (boro theke choto)

// typedef long long int ll ;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     // shob set er moto syntax
//     ordered_set ps ;
//     ps.insert(3);
//     ps.insert(1);
//     ps.insert(2);
//     ps.insert(3);


//     // cout<<ps.size()<<endl;
//     // for(auto it : ps){
//     //     cout<<it<<" ";
//     // }

//     cout<<ps.order_of_key(3)<<endl;
    // cout<<*ps.find_by_order(1)<<endl;


// }

///                                     number theory

// class 1 - harmonic series

// number of divisors 
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int lim = 10;
//     int cnt[100000];

//     for (int i = 1; i <=lim; i++)
//     {// i = 1
//         for (int j = i; j <=lim; j += i)// j = 1,2,3.....10
//         {
//             cnt[j]++;//cnt[1] = 1,2,....10
//         }
        
//     }

//     for (int i = 1; i <=lim; i++)
//     {
//         cout<<i<<" has total = "<<cnt[i]<<" divisors\n";
//     }
    
// }

// the divisors 

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// vector<int> ara[mx];// array of vector (2 d array)
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int lim = 10;
//     for (int i = 1; i <= lim; i++)
//     {
//        for (int j = i; j <= lim ; j+=i )
//        {
//             ara[j].push_back(i);
//        }
//     }
    
//     for (int i = 1; i <=lim; i++)
//     {
//         cout<<"For "<<i<<" = ";
//         for (int j = 0; j < ara[i].size(); j++)
//         {

//             cout<<ara[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }

// }

// sum of all divisor of a number 

// Recursion basics for graph theory and dp
//                  Striver recursion video basic

// Video 1 to 5

// Question 1 [ 1to n ]
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;
// ll ara[mx];
// void rec(int i, int n)
// {
//     if (i>n)
//     {
//         return;
//     }

//     cout << "showrav" << endl;
//     i++;
//     rec(i,n);
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     rec(1,5);
// }

// Question 2 [ n to 1 ]
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;
// ll ara[mx];

// void rec(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     i++;
//     rec(i, n);
//     i--;// backtracking
//     cout << i << " ";
// }

// void rec(int i, int n)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     cout << i << " ";
//     i--;
//     rec(i,n);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     rec(5, 5);
// }

// question 4 [ 1 to N] using backtracking
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// ll ara[mx];

// void rec(int i,int n){
//     if(i < 1){
//         return;
//     }
//     rec(i-1,n);
//     cout<<i<<" ";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n = 5;
//     rec(n,n);
// }

// question 5 [ n to 1 ] using backtracking
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// ll ara[mx];

// void rec(int i,int n){
//     if(i > n){
//         return;
//     }
//     rec(i+1,n);
//     cout<<i<<" ";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n = 5;
//     rec(1,n);
// }

// sum of first n number
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;
// ll ara[mx];
// void rec(int n, int sum) // parameter wise
// {
//     if (n < 1)
//     {
//         cout << "Sum = " << sum << endl;
//         return;
//     }
//     rec(n - 1, sum + n);
// }
// int sum(int n){
//     if ( n == 0){
//         return 0;
//     }
//     return n+sum(n-1);
// }

// int fact(int n){
//     if(n==0){
//         return 1;
//     }

//     return n*fact(n-1);

// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     // rec(5, 0);
//     // cout<<sum(5)<<endl;
//     cout<<fact(3)<<endl;

// }

//          Video 4

// Reverse an array using recursion
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// void revSingle(int i, int ara[], int n)// using single pointer
// {
//     if (i >= n / 2)
//     {
//         return;
//     }
//     swap(ara[i], ara[n - i - 1]);
//     revSingle(i + 1, ara, n);
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     int ara[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ara[i];
//     }
//     revSingle(0, ara, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << ara[i] << " ";
//     }
//     cout << endl;
// }

// Check if a given string is palindrome or not
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// bool palindrome(int i, string &str)
// {
//     if (i == str.size() / 2)
//     {
//         return true;
//     }

//     if (str[i] != str[str.size() - i - 1])
//     {
//         return false;
//     }
//     return palindrome(i + 1, str);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string str = "madam";
//     if(palindrome(0,str)){
//         cout<<"It is Palindrome\n";
//     }else{
//          cout<<"It is not Palindrome\n";
//     }
// }

// video 5 -
// Multiple Recursion Calls | Problems |

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int fibo(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     int last = fibo(n - 1);
//     int slast = fibo(n - 2);
//     return last + slast;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cout << fibo(3) << endl;
// }


// Lexicographically smallest 

// to make any string lexicographycally smallest
// always try to replace the left most characters with the 
// lowest characters like -> a,b,c etc.

// that is the basics of making any string lexicographycally smallest
// from another string