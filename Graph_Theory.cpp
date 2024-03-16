// // adjacent list representation
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// ll ara[mx];
// vector<int>adj[mx];
//                         // Not weighted Graph
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n,m;
//     cin>>n>>m;// node 4 ta , edge 3 ta
//     // graph -
//     // 4 3 // n,m
//     // 1 2
//     // 2 3
//     // 2 4
//     for (int i = 1; i <= m; i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);// directed hole ei line ta hobena
//     }

//     // use for each loop to access adjacency list
//     for (int i = 1; i <=n; i++)
//     {
//         cout<<"adj list of node "<<i<<" : ";
//         for (auto it : adj[i]){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }

// }

// adjacent list representation
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mx = 1e7 + 123;
ll ara[mx];
vector<pair<int, int>> adj[mx];
//                              //  weighted Graph
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m; // node 4 ta , edge 3 ta
    // graph -
    // 4 3 // n,m,w
    // 1 2 10
    // 2 3 2
    // 2 4 3
    

    // multi graph example 
    // 4 3 // n,m,w
    // 1 2 10
    // 1 2 13
    // 1 2 14
    // 2 3 2
    // 2 4 3
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // use for each loop to access adjacency list
    for (int i = 1; i <= n; i++)
    {
        cout << "adj list of node " << i << " : ";
        for (auto it : adj[i])
        {
            cout << "Node " << it.first << " and cost : " << it.second << " , ";
        }
        cout << endl;
    }
}