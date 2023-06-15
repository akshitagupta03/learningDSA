#include <bits/stdc++.h>
using namespace std;

double solution(double x, long long n){
    if(n==0){
        return 1;
    }
    if(n < 0) {
        return 1.0 / solution(x, -1 * n);
    }

    if(n%2 == 1){
        return x * solution(x * x, (n-1)/2);
    }
    else{
        return solution(x * x, n/2);
    }
}

double myPow(double x, int n) {
    return solution(x, (long long) n);
}

int main()
{

        
    return 0;
}