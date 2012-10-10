#include <iostream>
#include <string>
using namespace std;

void reverseStr(string& str, int start, int end){
	char temp;
	for(int i = start, j = end; i < j; i++, j--){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}


int main(void){
	int n;
	string str;
	int row = 0;
	while(cin >> n && n){
		cin >> str;
		row = str.length() / n;
		for(int j=0; j < row; j++){
			if(j % 2){
				reverseStr(str, j * n , j * n + n - 1);
			}
		}
		for(int i=0; i < n; i++){
			for(int j=0; j < row; j++){
				cout << str[j*n + i];
			}
		}
		cout << endl;
	}
	return 0;
}