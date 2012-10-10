#include <iostream>
#include <string>
using namespace std;

int revstr(string& str){
	char temp;
	for(int i=0; i <= str.length() / 2; i++){
		temp = str[i];
		str[i] = str[str.length() - 1-i];
		str[str.length() - 1-i] = temp;
	}
	int ret = 0;
	for(int i=0; i < str.length() - 1; i++){
		ret += str[i] - '0';
		ret *= 10;
	}
	ret += str[str.length()-1] - '0';
	return ret;
}

int main(void){
	int t;
	cin >> t;
	string a, b;
	while(t--){
		cin >> a >> b;
		cout << revstr(a) + revstr(b);
		cout << endl;
	}
}