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
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;

// vector<vector<int>> cc; // all connected componants
// vector<int> current_cc; // current connected componants
// // to store the graph of currently running dfs

// vector<int> adj[mx];
// bool vis[mx];

// void dfs(int node)
// {
//     // after entering the vertex we are adding it to the current_cc vector,
//     vis[node] = true;
//     current_cc.push_back(node);
//     for (auto child : adj[node])
//     {
//         if (vis[child] == false)
//         {
//             dfs(child);
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, e;
//     cin >> n >> e;
//     for (int i = 0; i < e; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }

//     int ct = 0;
//     // to store the connected componants

//     for (int i = 1; i <= n; i++) // node count 1 theke hochhe
//     {
//         if (vis[i] == true)
//         {
//             continue;
//         }
//         current_cc.clear();// cleared the previously visited componant
//         dfs(i);
//         cc.push_back(current_cc);// stored the currently visited componant
//         ct++;
//     }

//     cout<<"Number of connected componants = " << cc.size() << endl;
//     int num = 1;
//     for (auto componant : cc)
//     {   
//         cout<<"Connected Componant "<<num<<" : ";
//         for (auto it : componant)
//         {
//             cout << it << " ";
//         }
//         num++;
//         cout << endl;
//     }

//     // time complexity = O(v+e);
// }

//          LUV VIDEO 

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;

// // Find cycle in a undirected graph using dfs

// vector<int> adj[mx];
// bool vis[mx];
//             // 2           1
//             // 3           2
//             // 5           3
// bool dfs(int node, int parent)
// {
//     vis[node] = true;
//     bool isLoopExists = false;

//     for (auto child : adj[node])
//     {
//         if (vis[child] == true and child == parent)
//         { // backtrack er shomoi check kortesi
//             // current child er parent ke visited bhebe jeno cycle detect na kore.
//             continue;
//         }
//         if (vis[child])// jehetu child ekbar visit korsi so cycle exist kore
//         {
//             return true;
//         }

//         isLoopExists = isLoopExists or dfs(child, node); // current child er parent = node
//     }
//     return isLoopExists;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, e;
//     cin >> n >> e;
//     for (int i = 0; i < e; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }

//     // graph -
//     // 8 6
//     // 1 2
//     // 1 5
//     // 2 3
//     // 2 4
//     // 3 5
//     // 6 7
//     bool LoopExists = false;

//     for (int i = 1; i <= n; i++)
//     {
//         if (vis[i] == true)
//         {
//             continue;
//         }
//         if (dfs(i, 0))// dfs(i,0) 0 disi cause 0 kono vertices nai question e.
//         {
//             LoopExists = true;
//             break;
//         }
//     }

//     if (LoopExists)
//     {
//         cout << "Cycle Exists in graph\n";
//     }
//     else
//     {
//         cout << "Cycle Does Not Exists in graph\n";
//     }
// }

// void GraphCleaning()// needed when there is multiple test case
// {
//     for (int i = 0; i < mx; i++)
//     {
//         adj[i].clear();
//         isNode[i] = 0;
//         vis[i] = 0;
//     }
// }

// // Graph in matrix - 
//                             // number of island - 

// // https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
// // https://leetcode.com/problems/number-of-islands/description/ 
// https://lightoj.com/problem/guilty-prince
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;
// ll ara[mx];

// void dfs(int i, int j, int row, int col, vector<vector<char>>& grid) {
//     // checking the matrix boundary and if cell == 1
//     if (i >= 0 and i < row and j >= 0 and j < col and grid[i][j] == '1') {
//         if (grid[i][j] == '1') {
//             // did this so that, we don't have to maintain a visited matrix
//             grid[i][j] = '0';
//         }

//         // if movement is up,down,left,right only
//         dfs(i + 1, j, row, col, grid); //  up
//         dfs(i - 1, j, row, col, grid); //  down
//         dfs(i, j + 1, row, col, grid); //  right
//         dfs(i, j - 1, row, col, grid); //  left
//         // if movement is up,down,left,right and diagonal
//         dfs(i - 1, j - 1, row, col, grid); // upper left corner
//         dfs(i + 1, j + 1, row, col, grid); // lower right corner
//         dfs(i + 1, j - 1, row, col, grid); // lower left corner
//         dfs(i - 1, j + 1, row, col, grid); // upper right corner
        
//         }
//     }

//     int numIslands(vector<vector<char>>& grid) {
//         int row = grid.size();
//         int col = grid[0].size();
//         int ct = 0;
//         for (int i = 0; i < row; i++) {
//             for (int j = 0; j < col; j++) {
//                 if (grid[i][j] == '1') {
//                     dfs(i, j, row, col, grid);
//                     ct++;
//                 }
//             }
//         }

//         return ct;
//     }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, m;
//     cin >> n >> m;
//     vector<vector<char>> grid;
//     vector<char> ara;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             char c;
//             cin >> c;
//             ara.push_back(c);
//         }
//         grid.push_back(ara);
//         ara.clear();
//     }
//     cout << numIslands(grid) << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << grid[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// DFS in tree
// Height and Depth of a TREE

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e5 + 123;
// vector<int> tree[mx];
// int depth[mx], height[mx];

// void dfs(int vertex, int parent)
// {
//     // take action on vertex after entering the vertex
//     // while going down
//     for (int child : tree[vertex])
//     {
//         // take action on child before entering the child
//         // while going down
//         if (child == parent){ continue; }
//         depth[child] = depth[vertex] + 1;// while going down
//         dfs(child, vertex);
//         height[vertex] = max(height[vertex], height[child] + 1);// going up
//         // take action on child after exiting the child
//         // while going up
//     }
//     // take action on vertex before exiting the vertex
//     // while going up
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     // for n number of node
//     // there is n-1 edges
//     for (int i = 0; i < n - 1; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         tree[x].push_back(y);
//         tree[y].push_back(x);
//     }

//     dfs(1, 0);

//     cout<<"Depth "<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<depth[i]<<" ";
//     }
//     cout<<"\nHeight "<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<height[i]<<" ";
//     }
    
// }

// // practice problem dfs on a tree - https://codeforces.com/problemset/problem/580/C
// // solve - 
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e5 + 123;

// vector<int> tree[mx];
// int cat[mx];
// int ans = 0;
// int m = 0;
// // numc = number of consequetive cats
// // maxc = max consequtive
// void dfs(int vertex, int parent, int numc, int maxc)
// {

//     if (cat[vertex] == 1)// if current vertex has cat
//     {
//         numc++;// number of consequetive cats will increase
//     }
//     else
//     {
//         numc = 0;// if current vertex does not have cat.
//     }
//     maxc = max(numc, maxc);
//     // now we know for each node the max number of consequtive
//     // cats in the path from 1 to that node.
//     int numchildren = 0; // to check if current node is leaf node
//     for (auto child : tree[vertex])
//     {

//         if (child != parent)
//         {
//             dfs(child, vertex, numc, maxc);
//             numchildren++;
//         }
//     }

//     if (numchildren == 0 and maxc <= m)
//     { // leaf node has zero children 
//         // if maxc is less then m then ans++
//         // because it means we have reached leaf and leaf has restaurent
//         // and till leaf node maxc <=m
//         ans++;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> cat[i];
//     }

//     for (int i = 1; i <= n - 1; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         tree[x].push_back(y);
//         tree[y].push_back(x);
//     }

//     dfs(1, 0, 0, 0);

//     cout << ans << endl;
// }

// // BFS

// basic problem of BFS - 
// hackerrank - monk and garden 
// gfg - bfs of graph
// cses - message route https://cses.fi/problemset/task/1667
// CSES - Labyrinth https://cses.fi/problemset/task/1193
// cses graph playlist - https://www.youtube.com/playlist?list=PL5DyztRVgtRVP_AjON04FZODKJ7-Vj1eN

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
//                level[child] = level[node]+1; 
//             }
//         }
//     }
//     cout<<endl;

// }

// int main()
// {
//     // int n,m;
//     // cin>>n>>m;
//     int n;
//     cin>>n;

//     for (int i = 0; i < n-1; i++)// n - 1 , cause we are running bfs in a tree 
//     {
//         int x,y;
//         cin>>x>>y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }

//     cout<<"\nORDER OF TRAVERSAL\n";
//     // int source;
//     // cin>>source;

//     // BFS(source);
//     BFS(1);
    

//     for (int i = 1; i <=n ; i++)
//     {
//         cout<<i<<" : "<<level[i]<<endl;
//     }
    
    
// }


// BFS on a Grid

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int dis[1001][1001];
// int n, m;
// int vis[1001][1001];//
// // see code n code video.
// bool isValid(int x, int y)
// {

//     if (x < 1 || x > n || y < 1 || y > m)
//     {
//         return false;
//     }

//     if (vis[x][y] == 1)
//     {
//         return false;
//     }

//     return true;
// }

// int dx[] = {-1, 0, 1, 0};
// int dy[] = {0, 1, 0, -1};

// void bfs(int srcX, int srcY)
// {
//     queue<pair<int, int>> q;
//     q.push({srcX, srcY});
//     vis[srcX][srcY] = 1;
//     dis[srcX][srcY] = 0;

//     while (!q.empty())
//     {
//         int curX = q.front().first;
//         int curY = q.front().second;

//         q.pop();

//         for (int i = 0; i < 4; i++)
//         {
//             if (isValid(curX + dx[i], curY + dy[i]))
//             {
//                 int newX = curX + dx[i];
//                 int newY = curY + dy[i];

//                 q.push({newX, newY});
//                 vis[newX][newY] = 1;
//                 dis[newX][newY] = dis[curX][curY] + 1;
//             }
//         }
//     }

//     cout << "Distance Array\n";
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cout << dis[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int startX,startY;
    
//     cin>>n>>m;
//     cin>>startX>>startY;
//     // didn't take any matrix as an input.
//     bfs(startX,startY);

// }

// Labyrinth https://cses.fi/problemset/task/1193
// BFS on GRID
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// const int len = 1001;
// char ar[len][len]; // to store given matrix
// char br[len][len]; // to store traversal direction
// bool vis[len][len];

// int n, m;
// vector<char> path;

// bool isValid(int x, int y)
// {

//     if (x < 1 or x > n or y < 1 or y > m)
//     {
//         return false;
//     }
//     if (ar[x][y] == '#' or vis[x][y] == true)
//     {
//         return false;
//     }
//     return true;
// }

// bool bfs(int x, int y)
// { // x , y = coordinated of A
//     queue<pair<int, int>> q;
//     q.push({x, y});
//     vis[x][y] = true;

//     while (!q.empty())
//     {
//         int a = q.front().first;  // row
//         int b = q.front().second; // column
//         q.pop();

//         if (ar[a][b] == 'B')
//         {
//             // now creating the path from B to A
//             while (1)
//             {
//                 // every direction will be rerversed
//                 path.push_back(br[a][b]);

//                 if (path.back() == 'L')
//                 {
//                     b++;
//                 }
//                 if (path.back() == 'R')
//                 {
//                     b--;
//                 }
//                 if (path.back() == 'U')
//                 {
//                     a++;
//                 }
//                 if (path.back() == 'D')
//                 {
//                     a--;
//                 }

//                 if (a == x and b == y)
//                 {
//                     break;
//                 }
//             }
//             return true;
//         }

//         // left
//         if (isValid(a, b - 1))
//         {
//             br[a][b - 1] = 'L';
//             q.push({a, b - 1});
//             vis[a][b - 1] = true;
//         }
//         // right
//         if (isValid(a, b + 1))
//         {
//             br[a][b + 1] = 'R';
//             q.push({a, b + 1});
//             vis[a][b + 1] = true;
//         }
//         // down
//         if (isValid(a + 1, b))
//         {
//             br[a + 1][b] = 'D';
//             q.push({a + 1, b});
//             vis[a + 1][b] = true;
//         }

//         // up
//         if (isValid(a - 1, b))
//         {
//             br[a - 1][b] = 'U';
//             q.push({a - 1, b});
//             vis[a - 1][b] = true;
//         }
//     }

//     return false;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;
//     int x, y;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cin >> ar[i][j];
//             if (ar[i][j] == 'A')
//             {
//                 x = i;
//                 y = j;
//             }
//         }
//     }

//     if (bfs(x, y))
//     {
//         cout << "YES\n";
//         cout << path.size() << "\n";
//         while (path.size() > 0)
//         {
//             cout << path.back();
//             path.pop_back();
//         }
//     }
//     else
//     {
//         cout << "NO\n";
//     }
// }

// BFS ON GRID - https://www.spoj.com/problems/NAKANJ/
// luv video 
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int vis[8][8];
// int level[8][8];

// int getX(string s)
// {
//     return s[0] - 'a'; // "b1" means 1,1 coordinate
// }
// int getY(string s)
// {
//     return s[1] - '1'; // "b1" means 1,1 coordinate
// }

// bool isValid(int x, int y)
// {

//     return x >= 0 and y >= 0 and x < 8 and y < 8;
// }

// vector<pair<int, int>> movements // horse movement vector
// {
//     {-1, 2}, {1, 2},
//     {-1, -2}, {1, -2},
//     {2, -1}, {2, 1},
//     {-2, -1}, {-2, 1}
// };

// int bfs(string source, string dest)
// {
//     int sourceX = getX(source);
//     int sourceY = getY(source);

//     int destX = getX(dest);
//     int destY = getY(dest);

//     queue<pair<int, int>> q;
//     q.push({sourceX, sourceY});
//     vis[sourceX][sourceY] = 1;
   

//     while (!q.empty())
//     {
//         pair<int, int> v = q.front();
//         int x = v.first, y = v.second;

//         q.pop();
//         for (auto move : movements) // bfs for every 8 position
//         {
//             int childX = move.first + x;
//             int childY = move.second + y;

//             if (isValid(childX, childY) == false)
//             {
//                 continue;
//             }
//             if (vis[childX][childY] == false)
//             {
//                 q.push({childX, childY});
//                 vis[childX][childY] = true;
//                 level[childX][childY] += level[x][y] + 1;
//             }
//         }
//     }

//     return level[destX][destY];
// }

// void reset()
// {

//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 0; j < 8; j++)
//         {
//             level[i][j] = 0;
//             vis[i][j] = 0;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         reset();
//         string s1, s2;
//         cin >> s1 >> s2;
//         cout << bfs(s1, s2)<<endl;
//     }
// }

// // graph using map<string,vector<string>>adj;
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int mx = 1e7 + 123;
// ll ara[mx];
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin>>n;
//     map<string, vector<string>> graph;
//     for (int i = 0; i < n; i++)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;
//         graph[s1].push_back(s2);
//         graph[s2].push_back(s1);
//     }

//     for(auto it : graph){
//         cout<<it.first<<" -> ";
//         for(auto child : it.second){
//             cout<<child<<" ";
//         }
//         cout<<endl;
//     }
// }

// https://vjudge.net/problem/uva-762
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// map<string, vector<string>> graph;
// map<string, int> level;
// map<string, string> parent;

// void bfs(string source)
// {
//     level.clear();

//     queue<string> q;
//     q.push(source);
//     level[source] = 1;

//     while (!q.empty())
//     {

//         string current = q.front();
//         q.pop();

//         for (auto child : graph[current])
//         {
//             if (level[child] == 0)
//             {
//                 level[child] = level[current] + 1;
//                 parent[child] = current;
//                 q.push(child);
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     bool yes = 0; // delete
//     while (cin >> n)
//     {
//         if (yes)
//             cout << endl;
//         yes = 1;

//         graph.clear();
//         parent.clear();

//         for (int i = 0; i < n; i++)
//         {
//             string s1, s2;
//             cin >> s1;
//             cin >> s2;
//             graph[s1].push_back(s2);
//             graph[s2].push_back(s1);
//         }

//         string source, destination;
//         cin >> source;
//         cin >> destination;

//         bfs(source);

//         if (level[destination] == 0)
//         {
//             cout << "No route\n";
//             continue;
//         }

//         vector<pair<string, string>> ans;

//         while (!parent[destination].empty())
//         {
//             ans.push_back({parent[destination], destination});
//             destination = parent[destination];
//         }
//         reverse(ans.begin(), ans.end());
//         for (auto it : ans)
//         {
//             cout << it.first << " " << it.second << endl;
//         }
//         cout << endl;
//     }
// }


//  Bi-partite Graph Check;


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// const int mx = 212;

// vector<int> adj[mx];
// int colour[mx];

// bool isBipartite(int source)
// {

//     memset(colour, -1, mx);
//     colour[source] = 1;
//     queue<int> q;
//     q.push(source);

//     while (!q.empty())
//     {
//         int current = q.front();
//         q.pop();

//         for (auto neighbuour : adj[current])
//         {
//             if (colour[neighbuour] == -1) // means neighbour is not coloured yet
//             {
//                 if (colour[current] == 1) 
//                 {    // if current colour is 1 then neighbour colour should be 2
//                     colour[neighbuour] = 2;
//                 }
//                 else
//                 {
//                     colour[neighbuour] = 1;
//                 }

//                 q.push(neighbuour);// most important

//             }
//             else if (colour[neighbuour] == colour[current])
//             { // if neighbour is same as parent then it is not bipartite
//                 return 0; // means not bi-partite
//             }
//         }


//     }
//     return 1; // means bi-partite;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     while (cin >> n)
//     {

//         if (n == 0)
//         {
//             break;
//         }

//         for (int i = 0; i <= n; i++)
//         {
//             adj[i].clear();
//         }
        
//         int edges;
//         cin >> edges;

//         for (int i = 0; i < edges; i++)
//         {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }

//         if (isBipartite(0))
//         {
//             cout << "BICOLORABLE.\n";
//         }
//         else
//         {
//             cout << "NOT BICOLORABLE.\n";
//         }
//     }
// }

// grid movement - 
// vector<pair<int, int>> movement{
//     {0, 1}, {0, -1}, {1, 0}, {-1, 0}
// };

//                              dijkstra 2024

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// const int N = 1e4;
// const int INF = 1e7 + 123;

// vector<pair<int, int>> graph[N]; // {node,weight}

// vector<int> dijkstra(int source)
// {

//     vector<int> visited(N, 0);
//     vector<int> distance(N, INF);

//     set<pair<int, int>> st; // works like priority queue {weight,node}

//     st.insert({0, source});
//     distance[source] = 0;

//     while (!st.empty())
//     {
//         pair<int, int> node = *st.begin();

//         int current_node = node.second;
//         int current_weight = node.first;

//         st.erase(st.begin()); // pop back the first item

//         if (visited[current_node] == 1)
//         {
//             continue;
//         }

//         visited[current_node] = 1;

//          marked visited outside for loop, 
//          because a node can be visited multiple time in dijkstra,which does not happen in BFS

//         for (auto child : graph[current_node])
//         { // {node,weight}
//             int child_node = child.first;
//             int child_weight = child.second;

//             if (distance[current_node] + child_weight < distance[child_node])
//             {
//                 distance[child_node] = distance[current_node] + child_weight;
//                 st.insert({distance[child_node],child_node});
//             }
//         }
//     }
//     return distance;// distance vector
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cout << "Enter Nodes and edges\n";
//     int node, edges;
//     cin >> node >> edges;

//     cout << "Enter source " << endl;
//     int source;
//     cin >> source;

//     cout << "Enter graph with directed edges and weights\n";

//     for (int i = 0; i < edges; i++)
//     {
//         int x, y, w;
//         cin >> x >> y >> w;

//         graph[x].push_back({y, w});
//     }

//     vector<int> ans = dijkstra(source);

//     for (int i = 1; i <= node; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// // // Leetcode - dijkstra
// // 743. Network Delay Time
// // 787. Cheapest Flights Within K Stops
// // 778. Swim in Rising Water
// // 815. Bus Routes
// // 1091. Shortest Path in Binary Matrix
// // 1631. Path With Minimum Effort
// // 2812. Find the Safest Path in a Grid
// // 2642. Design Graph With Shortest Path Calculator
