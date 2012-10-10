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

int str2int(string str){
	int ret = 0;
	for(int i=0; i < str.length(); i++){
		ret += str[i]-'0';
	}
	return ret;
}

int main(void){
	int m, d;
	string res[110];
	while(cin >> m >> d && !(m == 0 && d == 0)){
		res[0] = "1";
		res[1] = "1";
		for(int i=1; i <= d; i++){
			if(i <= m){
				res[i] = sum(res[i-1], "1");
			}else{
				res[i] = sum(res[i-1], res[i-m]);
			}
		}
		cout << res[d] << endl;
	}
	return 0;

}