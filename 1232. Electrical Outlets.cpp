#include <iostream>
using namespace std;
int main(void){
	int t, n, sum, temp;
	cin >> t;
	while(t--){
		cin >> n;
		sum = 0;
		for(int i=0; i < n; i++){
			cin >> temp;
			sum += temp;
		}
		cout << sum + 1 - n << endl;
	}
	return 0;
}