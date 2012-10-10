#include <iostream>
using namespace std;

int main(void){
	int n, k, sum[10000], temp=0;
	cin >> n >> k;
	sum[0] = 0;
	for(int i=1; i <= 9900; i++){
		temp = (temp+1) * n;
		temp %= 9901;
		sum[i] = temp;
	}

	int circle = k / 9900;
	int end = k % 9900;
	cout << circle * sum[9900] + sum[end] << endl;
	return 0;
}