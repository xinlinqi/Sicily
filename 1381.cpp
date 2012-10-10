#include <iostream>
#include <string>
using namespace std;

void strrev(string& str){
	char temp;
	for(int i=0; i < str.length() / 2; i++){
		temp = str[i];
		str[i] = str[str.length()-1-i];
		str[str.length()-1-i] = temp;
	}
}

string sum(string a, string b){
	int maxs = (a.length() > b.length())?a.length():b.length();
	int mins = (a.length() < b.length())?a.length():b.length();
	int index, temp = 0, carry = 0;
	string ret;
	strrev(a);
	strrev(b);
	for(index=0; index < mins; index++){
		temp = a[index]-'0' + b[index] - '0' + carry;
		carry = temp / 10;
		ret.insert(ret.length(), 1, temp % 10+'0');
	}
	if(a.length() > b.length()){
		for(; index < a.length(); index++){
			temp = a[index]-'0' + carry;
			carry = temp / 10;
			ret.insert(ret.length(), 1, temp % 10+'0');
		}
	}
	if(a.length() < b.length()){
		for(; index < b.length(); index++){
			temp = b[index]-'0' + carry;
			carry = temp / 10;
			ret.insert(ret.length(), 1, temp % 10+'0');
		}
	}
	if(carry != 0){
		ret.insert(ret.length(), 1, carry+'0');
	}
	strrev(ret);
	return ret;
}
int main(void){
	int t, b;
	string a, temp;
	cin >> t;
	while(t--){
		temp = "0";
		cin >> a >> b;
		for(int i=0; i < b; i++){
			temp = sum(a, temp);
		}
		cout << temp << endl;
	}
	
}