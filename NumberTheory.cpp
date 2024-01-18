///                                     NUMBER THEORY


// class 1 -                            harmonic series

// use of harmonic series

// 1. to precompute number of diviosrs of a number
// 2. to know all the divisors and multiples of a number
// 3. to get the sum of all divisor of a number 
// 4. to get the sum of all multiple of a number

// // practice question - 
// Task-1: https://cses.fi/problemset/task/1713
// Solution:https://github.com/MuhammadShahriar/Module-3-Codes/blob/main/Class-1/Vjudge%20Contest%20Task-1.cpp

// Task-2: https://atcoder.jp/contests/abc172/tasks/abc172_d
// Solution:https://github.com/MuhammadShahriar/Module-3-Codes/blob/main/Class-1/Vjudge%20Contest%20Task-2.cpp


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

// all divisors of a number

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// vector<int> allDivs[mx];// array of vector (2 d array)
// vector<int> allMultiples[mx];// array of vector (2 d array)
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int lim = 10;
        // FOR ALL DIVISORS OF A NUMBER
//     for (int i = 1; i <= lim; i++)
//     {
//        for (int j = i; j <= lim ; j+=i )
//        {
//             allDivs[j].push_back(i);
//        }
//     }

    // FOR ALL MULTIPLES  OF A NUMBER
    // for (int i = 1; i <= lim; i++)
    //     {
    //     for (int j = i; j <= lim ; j+=i )
    //     {
    //             allMultiples[i].push_back(j);
    //     }
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
// sum of all multiple of a number

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// int SumOfDiv[mx];
// int SumOfMultiple[mx];
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int lim = 100;
    
//     for (int i = 1; i <= lim; i++)
//     {
//        for (int j = i; j <= lim ; j+=i )
//        {
//            SumOfMultiple[i] = SumOfMultiple[i] + j;
//            SumOfDiv[j] = SumOfDiv[j] + i;
//        }
//     }
    
//     for (int i = 1; i <= lim; i++)
//     {
//     //    cout<<"sum of all multiple of "<<i<<" is = "<<SumOfMultiple[i]<<endl;
//     //    cout<<"sum of all divisors of "<<i<<" is = "<<SumOfDiv[i]<<endl;
//     }
    
// }