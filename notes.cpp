



// ***                          ALLWAYS USE GLOBAL ARRAYS               ***///



///                     longest increasing subsequence                     ////
// #include <bits/stdc++.h>
// using namespace std;
// int longest_increasing_subsequence(vector<int>& arr)
// {
// 	vector<int> ans;
// 	int n = arr.size();
// 	for (int i = 0; i < n; i++) {
// 		auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
// 		if (it == ans.end()) {
// 			ans.push_back(arr[i]);
// 		}
// 		else {
// 			*it = arr[i];
// 		}
// 	}
// 	return ans.size();
// }
// watch -> https://www.youtube.com/watch?v=on2hvxBXJH4 for explaination
// int main()
// {
// 	vector<int> a = { 10, 22, 9, 33, 21, 50, 41, 60 };
// 	int ans = longest_increasing_subsequence(a);
// 	cout << ans;
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// // utility comparator function to pass to the sort() module

// //use of custom comparator 
// bool SortByVal(const pair<string,int>&a , const pair<string,int>&b)
// {
//     return (a.second<b.second);
// }

// int main()
// {
//     map<string, int> mymap ;
//     mymap.insert(make_pair("coconut", 10));
//     mymap.insert(make_pair("peach", 30));
//     mymap.insert(make_pair("mango", 8));

//     // usually the map is sorted by keys
//     // for(auto it : mymap)
//     // {
//     //     cout<<it.first<<" "<<it.second<<endl;
//     // }


//     // sort the map by the values;
//     vector< pair<string,int> >ara;

//     ara.push_back(make_pair("coconut", 10));
//     ara.push_back(make_pair("peach", 30));
//     ara.push_back(make_pair("mango", 8));


    // sort(ara.begin(),ara.end(),SortByVal);
//     for(auto it : ara)
//     {
//         cout<<it.first<<" "<<it.second<<endl;
//     }
// }


/// manual lower bound upper bound;

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int ara[10] = {2,4,6,8,10,12, 15,17,18,20};

//     int l = 0;
//     int r = 10;

//     // lower bound 
//     cout<<"Enter K for Finding Lower Bound of K\n";
//     int k ;
//     cin>>k;
//     while(r>l)
//     {
//        int mid = (r+l)/2;
//        if( k <=ara[mid] ){
//          r = mid ;
//        }else{
//          l = mid + 1;
//        }
//     }

//     cout<<"Index = "<<l<<" item = "<<ara[l]<<endl;

//     cout<<"Enter K for Finding UPPER Bound of K\n";
//     cin>>k;
//     // upper bound 
//     l = 0;
//     r = 10;

//     while(r>l)
//     {
//         int mid = (l+r)/2;
//         if( k >= ara[mid]){
//             l = mid + 1;
//         }else{
//             r = mid;
//         }
//     }

//     cout<<"Index = "<<l<<" item = "<<ara[l]<<endl;
// }

 
// BINARY SEARCH    ll mid = l + (r - l) / 2;
// FIND THE [ maximum index ] of an array element [ not greater than] the given one


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int ara[5] = {3,3,5,8,9};

//     int l = 0;
//     int r = 5;
//     int X;
//     cout<<"ENTER X to find the maximum index of a item that is not greater than it\n";
//     cin>>X;
//     while(r>l)
//     {
//         int mid = (l+r)/2;
//         if( ara[mid]<= X  ){
// // ara[mid]<= X karon amake given element er theke choto item er maximum index ber korte bolse.
// //given element is X so ara[mid] should be less than X
//             l = mid+1;
//         }else{
//             r = mid;
//         }
//     }
//     cout<<"INDEX = "<<l<<" ITEM = "<<ara[l]<<endl;

   

// }


//                                  number theory essentials

// GCD EUCLID

//ll gcd(ll a, ll b){ while (b){ a %= b; swap(a, b);} return a;}

// bool isPrime(int n) {
// 	if (n < 2) return false;
// 	if (n < 4) return true;
// 	if (n % 2 == 0) return false;
// 	for (int i = 3; i * i <= n; i += 2)
// 		if (n % i == 0) return false;
// 	return true;
// }
 
// ll nextPrime(ll x) {
// 	while (true) {
// 		if (isPrime(x)){
//             return x;
//         }
// 		x++;
// 	}
// }


// // Storing All The Prime In One Array 
// vector<int>ALLprime; // declare this ALLprime array as global array
// const int N = 1e6 + 6;
// void SieveOfEratosthenes()
// {
//     // Create a boolean array "prime[0..n]" and initialize
//     // all entries it as true. A value in prime[i] will
//     // finally be false if i is Not a prime, else true.
//     bool prime[N + 1];
    
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= N; p++) {
//         // If prime[p] is not changed, then it is a prime
//         if (prime[p] == true) {
//             // Update all multiples of p greater than or
//             // equal to the square of it numbers which are
//             // multiple of p and are less than p^2 are
//             // already been marked.
//             for (int i = p * p; i <= N; i += p)
//                 prime[i] = false;
//         }
//     }
 
//     // storing all prime numbers in the global array ALLprime
//     for (int p = 2; p <= N; p++)
//         if (prime[p]){
//             ALLprime.push_back(p);
//         }
// }

//finding square root of a number
    // int sq = 0;
    // for (int i = 1; i <=a ; i++)
    // {
    //     if(i*i >=a){
    //         if(i*i == a){
    //             sq = i;
    //         }else{
    //             sq = i-1;
    //         }
    //         break;
    //     }
    // }
//all divisor of n

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     
//     int a;
//     cin>>a;
//    int ct = 0;
//    for (int i = 1; i <= sqrt(a); i++)
//    {
//         int c = a/i;
//         if(a%i == 0 and i!=c){  
//             ct+=2;
//         }else if(a%i==0  and i==c){
//             ct+=1;
//         }
//    }
//    cout<<ct<<endl;
// }
 
//                      NOT NUMBER THEORY below this border


// sort an array of strings lexicographycally

// #include<bits/stdc++.h>
// using namespace std;

// //custom comparator 
// bool cmp(string a,string b)
// {
//     if(a.compare(0,b.size(),b)==0 || b.compare(0,a.size(),a) == 0)
//     {
//         return a.size() > b.size();
//     }else{
//         return a<b;
//     }
// }
// int main()
// {
//     vector<string> v; 
//     v.push_back("batman");
//     v.push_back("bat");
//     v.push_back("apple");
   
//     sort(v.begin(),v.end(),cmp);
//     for(auto it : v){
//         cout<<it<<endl;
//     }
// }


// //infinite iteration over a condition 
// // logic same for vector or map 
//  map<char,int> :: iterator dp ;
//     for(auto it : freq)
//     {
//         while(it.second >= 2 and k!=0)
//         {
//             it.second -= 2;
//             ans++;
//             k--;
//         }    
//     }


// STL UNIQUE FUNCTION 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>ara;
//     ara.push_back(1);
//     ara.push_back(1);
//     ara.push_back(2);
//     ara.push_back(3);
//     ara.push_back(2);
//     ara.push_back(5);
//     ara.push_back(5);
//     ara.push_back(7);

//     auto new_end = unique(ara.begin(),ara.end());

//     ara.resize(distance(ara.begin(),new_end));

//     for(auto it : ara){
//         cout<<it<<" ";
//     }
// }

// // kadanes Algorithm for Maximum subarray sum
// // practice problem -> https://codeforces.com/contest/327/problem/A
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ara[n];
//     // -2,-3,4 ,-1,-2,1, 5,-3 ans = 7
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ara[i];
//     }

//     int sum = 0,maxim = -1;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=ara[i];
//         maxim = max(sum,maxim);
//         if(sum< 0){
//             sum=0;
//         }
//     }
//     cout<<"MAXIMUM SUB ARRAY SUM "<<maxim<<endl;
    
// }

//                                      GRAPH datastructure


// for non-weighted graph

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int n,m;
    // cin>>n>>m;
    //undirected graph
    // // --->>>  adjacency matrix represntation  <<<---
    // int adj[n+1][n+1];
    // int u,v;
    // for (int i = 0; i < m; i++)
    // {
    //     cin>>u>>v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;//reversed intersection
    // }


    // adjacency list represntation
    // int n,m;
    // cin>>n>>m; // n = number of nodes , m = number of edges

    // undirected graph; //
    // vector<int> adj[n+1];
    // int u,v;
    // for (int i = 0; i < m; i++)
    // {
    //     cin>>u>>v;
    //     adj[u].push_back(v);// bidirectional tai a er shate b connected thakle
    //     adj[v].push_back(u);// b er shate a connected thakbe 
    // }



    // for Directed graph
    // adjacency list 
    // int n,m;
    // cin>>n>>m;

    // vector<int> adj[n+1];
    
    // int u,v;
    // for (int i = 0; i < m; i++)
    // {
    //     cin>>u>>v;
    //     adj[u].push_back(v);// only a ---> b ( jetar edge deoa ase shetai hobe shudu )
    // }

    // int n,m;
    // cin>>n>>m;
    // directed graph
    // --->>>  adjacency matrix represntation  <<<---
    // int adj[n+1][n+1];
    // int u,v;
    // for (int i = 0; i < m; i++)
    // {
    //     cin>>u>>v;
    //     adj[u][v] = 1;
    // }


// }

//           -->>>>           BFS           <<<<--             ///



// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int main()
// {

//   vector <int> ara1 (N); /* normal vector , which size in N */
//   vector <int> ara2 [N]; /* array of vector, in the array there is N empty vectors */

//   ara2 is used for storing adjacency list of graph.

// }

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+10;
// vector<int> g[N];
// int vis[N] ;
// int level[N];


// void BFS(int source)
// {
//     queue<int>q;
//     q.push(source);
//     vis[source] = 1;

//     while(!q.empty())
//     {
//         int node = q.front();
//         q.pop();

//         cout<<node<<" ";// je order e traverse hochhe

//         for(int child : g[node])
//         {
//             if(!vis[child]){
//                 q.push(child);
//                 vis[child] = 1;// q te insert korar por e visited mark kore dilam
//             //    level[child] = level[node]+1; 
//             }
//         }
//     }
//     cout<<endl;

// }

// int main()
// {
//     int n,m;
//     cin>>n>>m;

//     for (int i = 0; i < n; i++)// luv n-1 disilo 
//     {
//         int x,y;
//         cin>>x>>y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }

 // int source;
    // cin>>source;

//     BFS(source);

//     // for (int i = 1; i <=n ; i++)
//     // {
//     //     cout<<i<<" : "<<level[i]<<endl;
//     // }
    
    
// }
/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N] ;

void DFS(int vertex)
{
    // take action on vertex after entering the vertex 
    cout<<vertex<<endl;
    vis[vertex] = true;
    for(int child : g[vertex]){
        // cout<<" parent "<< vertex <<", child "<<child <<endl;
        if(vis[child])  continue;
        //take action on child before entering the child node
        DFS(child);
        //take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
     
}

int main()
{
    int n,m;
    cout<<"Enter number of node and edges\n";
    cin>>n>>m;

    cout<<"enter edges\n";
    for (int i = 0; i < m; i++)
    {
       int v1,v2;
       cin>>v1>>v2;
       g[v1].push_back(v2);
       g[v2].push_back(v1);

    }

    int source;
    cout<<"Enter source\n";
    cin>>source;

    cout<<"After running DFS\n";
    DFS(source);
    

}
*/
/*
6 9

1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6

1


*/

// all possible subarray of an array

// void subArray(int arr[], int n)
// {
//     // Pick starting point
//     for (int i=0; i <n; i++)
//     {
//         // Pick ending point
//         for (int j=i; j<n; j++)
//         {
//             // Print subarray between current starting
//             // and ending points
//             for (int k=i; k<=j; k++)
//                 cout << arr[k] << " ";
  
//             cout << endl;
//         }
//     }
// }


// Random 

// to find lenght of consecqutive same charachters in a string 

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int main()
// { 

//   string str = "00111100011";

//   int c0 = 0;
//   int c1 = 0;

//   for (int i = 0; i < str.length(); i++)
//   {
//     if(str[i]=='0'){

//       while(str[i]=='0' and i<str.length()){
//         i++;
//         c0++;
//       }
//       cout<<"0 er lengths = "<<c0<<endl;

//     }
//     c0 = 0;
    
//   }

//   for (int i = 0; i < str.length(); i++)
//   {
//     if(str[i]=='1'){

//       while(str[i]=='1' and i<str.length()){
//         i++;
//         c1++;
//       }
//       cout<<"1 er lengths = "<<c1<<endl;
//     }
//     c1= 0;
//   }
  
  
 
// }


// bool perfect_square(ll val)
// {  
//     double s=sqrt(val);
//     ll i=sqrt(val);
//     if(s==i){
//         return 1;
//     }else{
//         return 0;
//     }
// }


// from cf template of Asad_Bin

/*

ll gcd(ll a, ll b){ while (b){ a %= b; swap(a, b);} return a;}
ll lcm(ll a, ll b){ return (a/gcd(a, b)*b);}
ll ncr(ll a, ll b){ ll x = max(a-b, b), ans=1; for(ll K=a, L=1; K>=x+1; K--, L++){ ans = ans * K; ans /= L;} return ans;}
ll bigmod(ll a,ll b,ll mod){ if(b==0){ return 1;} ll tm=bigmod(a,b/2,mod); tm=(tm*tm)%mod; if(b%2==1) tm=(tm*a)%mod; return tm;}
ll egcd(ll a,ll b,ll &x,ll &y){ if(a==0){ x=0; y=1; return b;} ll x1,y1; ll d=egcd(b%a,a,x1,y1); x=y1-(b/a)*x1; y=x1; return d;}
ll modpow(ll a,ll p,ll mod) {ll ans=1;while(p){if(p%2)ans=(ans*a)%mod;a=(a*a)%mod;p/=2;} return ans;}
ll inverse_mod(ll n,ll mod) {return modpow(n,mod-2,mod);}

*/

/*

finding lexicographycally bigger string then the given string by permutation
built in fucntion

    string str;
	cin>>str;

	bool val = next_permutation(str.begin(),str.end());

	if(val == 1){
		cout<<str<<endl;
	}else{
		cout<<"no answer\n";
	}
*/


// sort vector of pair on the basis of first and second item both

/*
bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    // If the first item is not equal, sort based on the first item
    if (a.first != b.first) {
        return a.first < b.first;
    }
    // If the first item is equal, sort based on the second item
    return a.second > b.second;
}
*/

// #include <iostream>
// #include <vector>
// #include <algorithm>

// bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
//     // If the first item is not equal, sort based on the first item
//     if (a.first != b.first) {
//         return a.first < b.first;
//     }
//     // If the first item is equal, sort based on the second item
//     return a.second > b.second;
// }

// int main() {
//     // Example vector of pairs
//     std::vector<std::pair<int, int>> pairs = {{2, 8}, {2, 14}, {2, 16}, {1, 6}};

//     // Sort the vector using the custom comparator
//     std::sort(pairs.rbegin(), pairs.rend(), customComparator);

//     // Print the sorted vector
//     for (const auto& pair : pairs) {
//         std::cout << "{" << pair.first << ", " << pair.second << "}" << std::endl;
//     }

//     return 0;
// }


// balanced bracket sequence check 

// string is_balanced(string s){
//     string str = s;
//     stack<char>st;
//     int f = 1;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if(str[i] == '(' or str[i] == '{' or str[i] == '['){
//             st.push(str[i]);
//         }else{
//             if(st.size() == 0 ){
//                 f = 0;
//                 break;
//             }else{

//                 char c = st.top();

//                 if(c=='(' and str[i] == ')'){
//                     st.pop();
//                 }else if(c=='[' and str[i] == ']'){
//                     st.pop();
//                 }else if(c=='{' and str[i] == '}'){
//                     st.pop();
//                 }else{
//                     f = 0;
//                     break;
//                 }

//             }
//         }
//     }

//     if(st.size() == 0 and f == 1){
//         // cout<<"YES\n";
//         return "YES";
//     }else{
//         // cout<<"NO\n";
//         return "NO";
//     }
    
// }