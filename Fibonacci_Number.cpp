#include <bits/stdc++.h> 

int fibonacciNumber(int n){
    // Write your code here.
    int prev1 = 1;
    int prev2 = 1;
    long current = 1;
    const int m = 1000000007;
    int i = 3;
    
    if(n<3)
    return 1;
    else{
    while(i<=n){
        prev2 = current%m;
        current = prev1 + prev2;
        prev1 = prev2;
        i++;
    }
    return current%m;
    }
}



//Another way
/*
#include <bits/stdc++.h> 

int fibonacciNumber(int n){
    
    const int m = 1000000007;
    
    int F[n];
    F[1] = 1;
    F[2] = 1;
    
    if(n<3)
    return 1;
    else{
        for(int i=3;i<=n;i++){
            F[i] = (F[i-1] + F[i-2 ])%m ; 
        }
    return F[n];
    }
}
*/