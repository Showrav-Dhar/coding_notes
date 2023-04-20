/*                                selection sort */

// #include<bits/stdc++.h>
// using namespace std;

// void selction_Sort(int *ara,int n)
// {
//     int mini = 0;
//     for (int i = 0; i <=n-2; i++)
//     {
//         mini = i;//assuming the first item is the minimum,and storing the index of the first item
//         for (int j = i; j <=n-1; j++)
//         {
//             if(ara[j] < ara[mini]){
//                 mini = j;//storing the index of the next minimum item
//             }
//         }
//         swap(ara[i],ara[mini]);
//     }
    
// }

/*                                  Insertion sort                  */

// void insertion_SORT(int *ara,int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int j = i;
//         while(j>0 and ara[j]<ara[j-1]){
//             //j = 0 hobe na,cause j = 0 hole j-1 = - 1 hoye jabe
//             swap(ara[j],ara[j-1]);
//             j--;
//             //keep swapping until there is any element less than ara[j];
//         }
//     }
    
// }




// int main()
// {
//     int n = 6;
//     int ara[6] = {13,46,24,52,20,9};

//     // selction_Sort(ara,n);
//     // insertion_SORT(ara,n);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<ara[i]<<" ";
//     }
// }


// // bit shifting

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    

//     // left shift of a number means multipling it by 2;
//     cout<<"LEFT SHIFT\n";
//     for (int i = 1; i <=5; i++)
//     {
//         int a = 10<<i;
//         cout<<a<<" ";
//     }

//     // Right shift of a number means dividing it by 2;
//     cout<<"\nRight Shift\n";
//     for (int i = 1; i <=5; i++)
//     {
//         int a = 320>>i;
//         cout<<a<<" ";
//     }
    
    
// }


//              QUICK SORT             //

// #include<bits/stdc++.h>
// using namespace std;

// int PARTITION(int *ara,int low,int high)
// {
//     int pivot = ara[low];
//     int i = low;
//     int j = high;

//     while(i<j)
//     {
//         while(ara[i] <= pivot and i<= high-1)
//         {
//             i++;// searching greater than pivot 
//         }

//         while(ara[j] > pivot and j >= low-1)
//         {
//             j--;// searching lesser than pivot 
//         }

//         if(i<j){
//             swap(ara[i],ara[j]);
//         }
//     }

//     swap(ara[low],ara[j]);// if j crosses i then swap ara[j] with pivot
//     return j;
// }


// void QUICKsort(int *ara,int low,int high)
// {
//     if(low<high){
//         int partition_index = PARTITION(ara,low,high);

//         QUICKsort(ara,low,partition_index-1);
//         QUICKsort(ara,partition_index+1,high);
//     }
// }
// int main()
// {
//     cout<<"ENTER SIZE\n";
//     int n;
//     cin>>n;
//     int ara[n];
//     cout<<"ENTER ELEMENTS\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ara[i];
//     }

//     int low = 0;
//     int high = n-1;

//     cout<<"APPLIED QUICKSORT\n";
//     QUICKsort(ara,low,high);

//     cout<<"SORTED ARRAY\n";
//     for (int i = 0; i < n ; i++)
//     {
//         cout<<ara[i]<<" ";
//     }

// }

// //      MERGE SORT with arrays


// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int ara[N];

// void MERGE(int low,int mid,int high)
// {
//     int Lid = low;
//     int Rid = mid+1;
//     int Tid = 0;
//     int temp[N];

//     while(Lid <= mid and Rid <= high)
//     {
//         if(ara[Lid] <= ara[Rid])
//         {
//             temp[Tid] = ara[Lid];
//             Lid++; Tid++;
//         }else{
//             temp[Tid] = ara[Rid];
//             Rid++; Tid++;
//         }
//     }

//     while (Lid<=mid)// imporatant point
//     {
//        temp[Tid] = ara[Lid];
//        Lid++;
//        Tid++;
//     }
//     while (Rid<=high)//important point 
//     {
//        temp[Tid] = ara[Rid];
//        Rid++;
//        Tid++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         ara[i] = temp[i-low];
//         // why i-low = > https://youtu.be/ogjf7ORKfd8?t=2359
//     }

// }


// void MERGEsort(int low,int high)
// {
//     if(low == high){
//         return ;
//     }

//     int mid = (low+high)/2;
//     MERGEsort(low,mid);
//     MERGEsort(mid+1,high);

//     MERGE(low,mid,high);

// }

// int main()
// {
//     cout<<"Enter size\n";
//     int n;
//     cin>>n;
//     // int ara[n+10];
//     cout<<"Enter array items\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ara[i];
//     }

//     int low = 0;
//     int high = n-1;

//     MERGEsort(low,high);

//     for (int i = 0; i < n; i++)
//     {
//        cout<<ara[i]<<" ";
//     }
    
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
//     int n;
//     cin>>;

//     for (int i = 0; i < n; i++)// luv n-1 disilo 
//     {
//         int x,y;
//         cin>>x>>y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }

//     BFS(6);

//     // for (int i = 1; i <=n ; i++)
//     // {
//     //     cout<<i<<" : "<<level[i]<<endl;
//     // }
    
    
// }




                                
                                //          greedy method   //

//              Fractional knapsack                //

// #include<bits/stdc++.h>
// using namespace std;

// bool cmp (pair<int,int> a, pair<int,int> b)
// {
//     double r1 = a.first/a.second;
//     double r2 = b.first/b.second;

//     return r1>r2;
// }


// double fractional_knapsack( vector< pair< int,int > > items,int capacity)
// {
//     int total_items = items.size();
//     double total_profits = 0;

//     sort(items.begin(),items.end(),cmp);

//     for (int i = 0; i < total_items; i++)
//     {
//         if(capacity==0){
//             break;
//         }

//         if(items[i].second<=capacity)
//         {
//             capacity -= items[i].second;//weight of item
//             total_profits += items[i].first;//profit of item
//         }else{

//             double frac_profit = items[i].first * ( (double)capacity/ items[i].second );// item profit * (remaining capacity/item weight)
//             capacity-=capacity;
//             total_profits += frac_profit;
//         }
        
//     }
    
//     return total_profits;
// }

// int main()
// {
//     cout<<"Enter number of items\n";
//     int n;
//     cin>>n;

//     vector< pair< int,int > > items(n);
//     cout<<"Enter profits and weights of the items\n";
//     int weights,profits;
//     for (int i = 0; i < n; i++)
//     {
//     //    cout<<"profits weights"<<endl;
//        cin>>profits>>weights;
//        items[i] = make_pair(profits,weights);
       
//     }
    
//     int capacity;
//     cout<<"Enter capacity of the knapsack\n";
//     cin>>capacity;

//     double max_profit = fractional_knapsack(items,capacity);
//     cout<<"Maximum profit = "<<max_profit<<endl;
//    // okay git is working
   
// }


//                                     // Dijkstra algorithm 


// important concept

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main()
{

  vector <int> ara1 (N); /* normal vector , which size in N */
  vector <int> ara2 [N]; /* array of vector, in the array there is N empty vectors */

//   ara2 is used for storing adjacency list of graph.

}


// // easy implementation
// #include<bits/stdc++.h>
// using namespace std;
// const int INFINITE = 99999;
// const int MAX = 10;
// int graph[100][100];

// void dijkstra(int n,int start)
// {
    
//     int cost[100][100];
//     int distance[100];
//     int visited [100];

//     int count , minidistance , nextnode;

   
//      // cost matrix 
//     for (int i = 1; i <=n; i++)
//     {
//        for (int j = 1; j <=n; j++)
//        {
//          if(graph[i][j] == 0){
// // check kortesi ekta node er shate onno arekta node er connection ase kina.
// //conncetion thakle oi value ta boshbe na thakle 0
//             cost[i][j] = INFINITE;
//          }else{
//             cost[i][j] = graph[i][j];
//          }
//        }
//     }



//     for (int i = 1; i <=n; i++)
//     {
//         distance[i] = cost[start][i];
//         visited[i] = 0;
//     }

//     distance[start] = 0;// start node er distance 0 kore dilam
//     visited[start] = 1;// starting node visited tai 1 diye mark kore dilam
//     count = 1;// node er count raktesi

//     while(count<=n)
//     {
//         minidistance = INFINITE;//minimum distance shurute infinty

//         for (int i = 1; i <=n; i++)// protibar jei node e asi oi node er shate connected node gular shortest distance ta store kortesi
//         {
//            if(distance[i]<minidistance and visited[i] != 1){//visited[i] == 0 lekha jabe
//             minidistance = distance[i];
//             nextnode = i;
//            }
//         }

//         visited[nextnode] = 1;

//         // node er edge relaxation
//         for (int i = 1; i <=n; i++)
//         {
//             if( visited[i] != 1){
//                 if(minidistance + cost[nextnode][i] < distance[i]){
//                     distance[i] = minidistance + cost[nextnode][i];
//                 }
//             }
//         }
        
//         count++;
//     }


//     for (int i = 1; i <=n; i++)
//     {
//         if(i!=start){
//             cout<<"Distance from source to "<<i<<" : "<<distance[i]<<endl;
//         }
//     }
    
// }


// int main()
// {
//     int n;
//     cout<<"Enter number of nodes\n";
//     cin>>n;

//     cout<<"Enter Adjacency matrix of the graph"<<endl;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=n; j++)
//         {
//             cin>>graph[i][j];
//             // cout<<i<<j<<" ";
//         }
//         // cout<<endl;
//     }

//     int start ;
//     cout<<"Enter Start Node\n";
//     cin>>start;

//     dijkstra(n,start);

    
// }

//optimized implementation

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
const int INF = 1e9+10;

vector< pair<int,int> > g[N]; /* <node,ditance> */ /* adjacency list representation of graph */
/* g is a array and the datatype of the array is vector of pair */

void dijkstra(int n,int source)
{
    vector<int> vis(N,0);
    vector<int> dist(N,INF);

    set< pair<int,int> > st;//<distance,node> 

    st.insert(make_pair(0,source));
    dist[source] = 0;

    while(st.size() > 0)
    {
        auto node = *st.begin();// selecting the smallest <distance,node> pair

        int v = node.second;//
        int v_weight = node.first;
        st.erase(st.begin());
        
        if(vis[v] == 1) continue;

        vis[v] = 1;
        for(auto child : g[v])/*going to all the childs of V */
        {       
            int child_v = child.first;
            int weight = child.second; 
            /* performing edge relaxation of the child nodes connected to v */
            if(dist[v]+weight < dist[child_v]){
                dist[child_v] = dist[v] + weight;
                st.insert( make_pair(dist[child_v],child_v) );/* inserting the <distance,node> pair of the childs of V */
            }
        }
    }


    for (int i = 1; i <=n; i++)
    {
        if(i!=source){
            cout<<"Distance from source to "<<i<<" : "<<dist[i]<<endl;
        }
    }
    
}

int main()
{

    int nodes,edges;
    cout<<"Enter number of nodes and number of edges \n";
    cin>>nodes>>edges;

    cout<<"Enter the edges\n";
    for (int i = 0; i < edges; i++)
    {
        int x,y,weight;
        cin>>x>>y>>weight;
        g[x].push_back(make_pair(y,weight)); /* <node,ditance> */
    }
    
    cout<<"Enter source node\n";
    int source ;
    cin>>source;
    
    dijkstra(nodes,source);


}


// 1. using SET because we need the smalles <distance,node> pair everytime.
// in SET the pairs will be always in sorted order so we will get the smallest pair at the beginning  of the SET every time.

// 2. while taking input , 
//         g[x].push_back(make_pair(y,weight)); // for directed graph only this line
//         g[y].push_back(make_pair(x,weight)); //for un-directed graph both of the lines

// 3.
// sample input / output 
// 6 8
// 1 2 2
// 1 3 4
// 2 4 7
// 3 5 3
// 2 3 1
// 4 6 1
// 5 4 2
// 5 6 5

// source = 1

// output - > 
// distance from source to 2 : 2
// distance from source to 3 : 3
// distance from source to 4 : 8
// distance from source to 5 : 6
// distance from source to 6 : 9

// 4. tutotial -> https://www.youtube.com/watch?v=F3PNsWE6_hM&t=5s


// 0/1 knapsack
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5;

int wt[1000],val[1000];
ll dp[1000][10000];

ll func (int indx,int wt_left)
{  
    if(wt_left == 0) return 0 ;
    if( indx < 0 )  return 0 ;
    if(dp[indx][wt_left] != -1 ) return dp[indx][wt_left];

    //don't choose item at index
    ll ans = func(indx-1,wt_left);
    //choose item at index 
    if(wt_left - wt[indx] >= 0){
        ans = max( ans, func (indx-1,wt_left - wt[indx])  + val[indx] );
    }

    return dp[indx][wt_left] = ans;

}

int main()
{

    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    for (int i = 0; i < n; i++)
    {
        cin>>wt[i]>>val[i];
    }

    cout<<func(n-1,w)<<endl;
    //question - https://atcoder.jp/contests/dp/tasks/dp_d    [ knapsack-1 ]
}