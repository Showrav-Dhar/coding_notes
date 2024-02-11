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

//             cout<<ara[i][j]<<" ";// allDivs[i][j]
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

//                  Sieve - prime generation
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll ;
// const int mx = 1e7+123;
// ll ara[mx];
// bitset<mx>isPrime;
// vector<int>primes;

// void primeGen(ll n){
    
//     // taking all the odds
//     // because only 2 is the even prime number
//     for (int i = 3; i <= n; i+=2)
//     {
//         isPrime[i] = 1;
//     }
    
//     for (int i = 3; i <= sqrt(n); i+=2)
//     {
//         if(isPrime[i]){
//             for (int j = i*i ; j <= n; j+=i)
//             {// only marking the multiples of previous prime numbers
//                 isPrime[j] = 0;
//             }
            
//         }
//     }
    
//     primes.push_back(2);
//     for (int i = 3; i <= n; i++)
//     {
//         if(isPrime[i]){
//             primes.push_back(i);
//         }
//     }
    
    
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     // see in the global space -
//     // always use bitset<mx>isPrime; to store the isPrime array
//     ll mx = 50;
//     primeGen(mx);
//     for(auto it : primes){
//         cout<<it<<" ";
//     }

//     // c = a*b 
//     // one of a and b will be less than sqrt(c) and one will be greater than sqrt(c)
//     // 48 = 6*8 , sqrt(48) = 6.692 so 6 < 6.692
//     // that is why in the outer loop i<=sqrt(n);

    
// }

//              Prime Factorization 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mx = 1e7 + 123;
ll ara[mx];
bitset<mx> isPrime;
vector<int> primes;
void primeGen(ll n)
{
    for (int i = 3; i <= n; i += 2)
    {
        isPrime[i] = 1;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    primes.push_back(2);
    isPrime[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

vector<int> PrimeFactorization(int n)
{
    vector<int> factors;

    for (auto it : primes)
    {
        if (n % it == 0)
        {
            if (1ll * it * it > n)
            {
                break;
            // in factors of N there will be only 1 value which will be greater than sqrt(n)
            // and that value always comes at the end
            }
            while (n % it == 0)
            {// if n%it then , dividing n with it until that is possible
                factors.push_back(it);
                n = n / it;
            }
        }
    }

    if (n > 1)// the last remaning n will always be prime
    {// because-> in factors of N there will be only 1 value which will be greater than sqrt(n)
        factors.push_back(n);
    }
    return factors;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int lim = 1e7;
    primeGen(lim);
    int n = 40131;
    vector<int> ara = PrimeFactorization(n);
    cout << "Prime Factors of " << n << " -> ";
    for (auto it : ara)
    {
        cout << it << " ";
    }
    cout << endl;
}