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
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;
// ll ara[mx];
// vector<pair<int, int>> adj[mx];
// //                              //  weighted Graph
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, m;
//     cin >> n >> m; // node 4 ta , edge 3 ta
//     // graph -
//     // 4 3 // n,m,w
//     // 1 2 10
//     // 2 3 2
//     // 2 4 3
    

//     // multi graph example 
//     // 4 3 // n,m,w
//     // 1 2 10
//     // 1 2 13
//     // 1 2 14
//     // 2 3 2
//     // 2 4 3
//     for (int i = 1; i <= m; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }

//     // use for each loop to access adjacency list
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "adj list of node " << i << " : ";
//         for (auto it : adj[i])
//         {
//             cout << "Node " << it.first << " and cost : " << it.second << " , ";
//         }
//         cout << endl;
//     }
// }


// DFS

// Find Connected number of Components in a undirected graph 
// Question - https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// ll ara[mx];
// vector<int>adj[mx];
// bool vis[mx];

// void dfs(int node){
    
//     vis[node] = true;
//     for(auto child : adj[node]){
//         if(vis[child]==false){
//             dfs(child);
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n,e;
//     cin>>n>>e;
//     for (int i = 0; i < e; i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }

//     int ct = 0;
//     for (int i = 1; i <= n; i++)// node count 1 theke hochhe
//     {
//         if(vis[i] == true){
//             continue;
//         }
//         dfs(i);
//         ct++;
//     }
//     cout<<ct<<endl;
    
    
    
// }

//    STORING ALL THE CONNECTED COMPONANTS
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mx = 1e7 + 123;

vector<vector<int>> cc; // all connected componants
vector<int> current_cc; // current connected componants
// to store the graph of currently running dfs

vector<int> adj[mx];
bool vis[mx];

void dfs(int node)
{
    // after entering the vertex we are adding it to the current_cc vector,
    vis[node] = true;
    current_cc.push_back(node);
    for (auto child : adj[node])
    {
        if (vis[child] == false)
        {
            dfs(child);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int ct = 0;
    // to store the connected componants

    for (int i = 1; i <= n; i++) // node count 1 theke hochhe
    {
        if (vis[i] == true)
        {
            continue;
        }
        current_cc.clear();// cleared the previously visited componant
        dfs(i);
        cc.push_back(current_cc);// stored the currently visited componant
        ct++;
    }

    cout<<"Number of connected componants = " << cc.size() << endl;
    int num = 1;
    for (auto componant : cc)
    {   
        cout<<"Connected Componant "<<num<<" : ";
        for (auto it : componant)
        {
            cout << it << " ";
        }
        num++;
        cout << endl;
    }

    // time complexity = O(v+e);
}