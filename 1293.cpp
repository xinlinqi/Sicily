#include <iostream>
using namespace std;

int linkLength(int n){
	int ret = 1;
	if (n == 1){
		return ret;
	}
	if(n % 2){
		n = 3 * n + 1;
	}else{
		n = n / 2;
	}
	return ret + linkLength(n);
}

int main(void){
	int i, j;
	int res[10010];
	cin >> i >> j;

	int max = 0;
	for(int k = i; k <= j; k++){
		if (max < linkLength(k)){
			max = linkLength(k);
		}
	}
	cout << max << endl;
	return 0;

}