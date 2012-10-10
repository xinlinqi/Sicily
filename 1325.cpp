#include <iostream>
using namespace std;

int digitSum(int i){
	int ret = i;
	while(i > 0){
		ret += i % 10;
		i = i / 10;
	}
	return ret;
}


int main(void){
	int n;
	int temp;
	cin >> n;
	for(int i=0; i < n; i++){
		cin >> temp;
		int j = temp - 100;
		for(; j < temp; j++){
			if(digitSum(j) == temp){
				cout << j << endl;
				break;
			}
		}
		if(j == temp){
			cout << 0 << endl;
		}
	}
	return 0;
}