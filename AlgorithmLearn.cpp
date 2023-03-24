//                                      selection sort

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

//                                      Insertion sort

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

// code ta bhul see strivers video 

// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5;


// void MERGE(int *ara,int low,int mid,int high)
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

//     while (Lid<=mid)
//     {
//        temp[Tid] = ara[Lid];
//        Lid++;
//        Tid++;
//     }
//     while (Rid<=mid)
//     {
//        temp[Tid] = ara[Rid];
//        Rid++;
//        Tid++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         ara[i] = temp[i-low];
//     }

// }
// //

// void MERGEsort(int *ara,int low,int high)
// {
//     if(low>=high){ return ;}

//     int mid = (low+high)/2;
//     MERGEsort(ara,low,mid);
//     MERGEsort(ara,mid+1,high);

//     MERGE(ara,low,mid,high);

// }

// int main()
// {
//     cout<<"Enter size\n";
//     int n;
//     cin>>n;
//     int ara[n];
//     cout<<"Enter array items\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ara[i];
//     }

//     int low = 0;
//     int high = n-1;

//     MERGEsort(ara,low,high);

//     for (int i = 0; i < n; i++)
//     {
//        cout<<ara[i]<<" ";
//     }

    
// }


                                
                                //          greedy method

//              Fractional knapsack                //

#include<bits/stdc++.h>
using namespace std;

bool cmp (pair<int,int> a, pair<int,int> b)
{
    double r1 = a.first/a.second;
    double r2 = b.first/b.second;

    return r1>r2;
}


int fractional_knapsack( vector< pair< int,int > > items,int capacity)
{
    int total_items = items.size();
    int total_profits = 0;

    sort(items.begin(),items.end(),cmp);

    for (int i = 0; i < total_items; i++)
    {
        if(capacity==0){
            break;
        }

        if(items[i].second<=capacity)
        {
            capacity -= items[i].second;//weight of item
            total_profits += items[i].first;//profit of item
        }else{

            double frac_profit = items[i].first * ( (double)capacity/ items[i].second );// item profit * (remaining capacity/item weight)
            total_profits += frac_profit;
        }
    }
    
    return total_profits;
}

int main()
{
    cout<<"Enter number of items\n";
    int n;
    cin>>n;

    vector< pair< int,int > > items(n);
    cout<<"Enter profits and weights of the items\n";
    int weights,profits;
    for (int i = 0; i < n; i++)
    {
       cout<<"profits weights"<<endl;
       cin>>profits>>weights;
       items[i] = make_pair(profits,weights);
       
    }

    int capacity;
    cout<<"Enter capacity of the knapsack\n";
    cin>>capacity;

    int max_profit = fractional_knapsack(items,capacity);
    cout<<"Maximum profit = "<<max_profit<<endl;
}