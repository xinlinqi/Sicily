// Problem#: 2501
// Submission#: 1505175
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
using namespace std;

const int digit = 9901;

int pow2(int n, int k){
    if(k == 1){
        return n % digit;
    }
    if(k % 2 == 0){
        int temp = pow2(n, k/2);
        return (temp * temp) % digit;
    }else{
        int temp = pow2(n, (k - 1)/2);
		temp = (temp * temp) % digit;
        return (temp * n) % digit;
    }
}

int addition(int n, int k){
    if(n == 0 || k == 0){
        return 0;
    }
    if(k == 1){
        return n % digit;
    }
    if(k % 2 == 0){
        return ((pow2(n, k / 2) + 1) * addition(n, k/2)) % digit;
    }else{
        int temp = pow2(n, (k + 1) / 2);
        return ((temp + 1) * addition(n, (k-1)/2) + temp) % digit ;
    }
}

int main(void){
    int n, k;
    cin >> n >> k;
    cout << addition(n, k) << endl;
    return 0;
}