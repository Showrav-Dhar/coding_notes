
//                          ALL PATTERNS

// #include<stdio.h>
// int main()
// {
//     int i,j,num;
//     num = 5;
//     for ( i = 1; i <=num; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

// #include<stdio.h>
// int main()
// {
//     int i,j,num;
//     num = 5;

//     for ( i = 1; i <= num; i++)
//     {
//        for ( j = 1; j <=i; j++)
//        {
//            printf("%d ",i);
//        }
//        printf("\n");
//     }
//     return 0;
// }
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

// #include<stdio.h>
// int main()
// {
//     int i,j,num;
//     num = 5;

//     for ( i = 1; i <= num; i++)
//     {
//        for ( j = 1; j <=i; j++)
//        {
//            if(i%2!=0)
//            printf("%d ",1);
//            else
//            printf("%d ",0);
//        }
//        printf("\n");
//     }
//     return 0;
// }
// 1 
// 0 0 
// 1 1 1 
// 0 0 0 0 
// 1 1 1 1 1 

// #include<stdio.h>
// int main()
// {
//     int i,j,num;
//     num = 5;

//     for ( i = 1; i <= num; i++)
//     {
//        for ( j = 1; j <=i; j++)
//        {
//            if(j%2!=0 )
//            printf("%d ",1);
//            else
//            printf("%d ",0);
//        }
//        printf("\n");
//     }
//     return 0;
// }
// 1 
// 1 0 
// 1 0 1 
// 1 0 1 0 
// 1 0 1 0 1


// #include<stdio.h>
// int main()
// {
//     int i,j,num = 5;

//     int k = 1;

//     for ( i = 1 ; i <= num; i++)
//     {
//         for ( j = 1; j <= i ; j++)
//         {
//             printf("%d ",k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 


// #include<stdio.h>
// int main()
// {
//     int i,j,num = 5;
//     for ( i = 1 ; i <= num; i++)
//     {
//         for ( j = 1; j <= i ; j++)
//         {
//             printf("%d ",i);
           
//         }
//         printf("\n");
//     }
//     for ( i = num-1 ; i >=1; i--)
//     {
//         for ( j = 1; j <= i ; j++)
//         {
//             printf("%d ",i);
           
//         }
//         printf("\n");
//     }

//     return 0;

// }

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1 



// #include<stdio.h>
// int main()
// {
//     int i,j,num = 5;

//     for ( i = num ; i >=1; i--)
//     {   
//         int k = 1;
//         for ( j = 1; j <= i ; j++)
//         {
            
//             printf("%d ",k);
//             k++;
//         }
//         printf("\n");
//     }

//     return 0;

// }
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 


// #include<stdio.h>
// int main()
// {
//     int i,j,num = 5;

//     for ( i = 1; i <= num ; i++)
//     {
//         for ( j = 0; j <=num-i; j++)
//         {
//             printf("  ");
//         }

//         for ( j = 1; j <=i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
        
//     }
//     return 0;
// }
//           1 
//         1 2 
//       1 2 3 
//     1 2 3 4 
//   1 2 3 4 5 

// #include<stdio.h>
// int main()
// {
//     int i,j,num = 5;

//     for ( i = 1; i <= num ; i++)
//     {
//         for ( j = 1; j <= num-i ; j++)
//         {
//             printf("  ");
//         }

//         for ( j = 1; j <= (2*i) - 1  ; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * *


// #include<stdio.h>
// int main()
// {
//     int i,j,num = 5;

//     for ( i = 1; i <= num ; i++)
//     {
//         for ( j = 1; j <= num-i ; j++)
//         {
//             printf("  ");
//         }

//         for ( j = 1; j <= (2*i) - 1  ; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     for ( i = num-1; i >= 1 ; i--)
//     {
//         for ( j = 1; j <= num-i ; j++)
//         {
//             printf("  ");
//         }

//         for ( j = 1; j <= (2*i) - 1  ; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

