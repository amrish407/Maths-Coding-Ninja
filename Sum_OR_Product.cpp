#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	int sum=0;
	long prod=1;
	const int mod=1000000007;
	// Write your code here.
	if(q==1){
		for(int i=1;i<=n;i++){
			sum = sum+i;
		}
		return sum;
	}
	else if(q==2){
		for(int j=1;j<=n;j++){
			prod = (prod*j)%mod;
		}
		return prod;
	}
}