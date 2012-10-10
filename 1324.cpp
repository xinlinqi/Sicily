#include <iostream>
#include <string>
using namespace std;

int countScore(string res){
	char prev, cur;
	int ret = 0, factor = 0;
	cur = res[0];
	prev = res[0];
	for(int i=0; i < res.length(); i++){
		if (prev == 'O' && res[i] == 'O'){
			factor ++;
			ret += factor;
			prev = res[i];
		}else{
			factor = 0;
			prev = 'O';
		}
	}
	return ret;
}

int main(void){
	int n;
	string temp;
	cin >> n;
	for(int i=0; i < n; i++){
		cin >> temp;
		cout << countScore(temp) << endl;
	}
	return 0;
}