#include <iostream>
#include <string>
using namespace std;
int main(void){
	int t, m;
	string str, tStr;
	cin >> t;
	for(int i=1; i <= t; i++){
		cin >> m >> str;
		cout << i << " ";
		for(int j=0; j < str.length(); j++){
			if(j + 1 == m){
				continue;
			}
			cout << str[j];
		}
		cout << endl;
	}
}