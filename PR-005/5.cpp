// Contest Code:CCSTART2 Problem Code:REVSTRPT
// You're given a number N. Print the first N lines of the below-given pattern.

//     *
//    **
//   ***
//  ****
// *****
// Input:
// First-line will contain the number N.
// Output:
// Print the first N lines of the given pattern.

// Constraints
// 1≤N≤200

// Sample Input 1:
// 4
// Sample Output 1:
//    *
//   **
//  ***
// ****
// Sample Input 2:
// 2
// Sample Output 2:
//  *
// **
// EXPLANATION:
// In the first example, we'll print the first 4 lines of the given pattern.
// In the second example, we'll print the first 2 lines of the given pattern



// #include <bits/stdc++.h>
// using namespace std;

// void revStrPt(int n){
    
//     for(int p=1;p<=n;p++){
        
//         for(int j=n-1;j>0;j--){
//             cout << " ";
        
//         }
//         for(int i=1;i<=p;i++){
//             cout<< "*" ;
//         }
        
//         cout<<endl;
        
//     }
    
// }
// int main() {
//     int n;
//     cin >> n ;
//     revStrPt(n);
    
// 	return 0;
// }