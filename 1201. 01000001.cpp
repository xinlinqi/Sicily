//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//void strrev(string& str){
//	char temp;
//	for(int i=0; i < str.length() / 2; i++){
//		temp = str[i];
//		str[i] = str[str.length() - i - 1];
//		str[str.length() - i - 1] = temp;
//	}
//}
//
//void add(string a, string b){
//	char ret[81];
//	memset(ret, 0, sizeof(ret));
//	strrev(a);
//	strrev(b);
//	int carry = 0, i;
//	int minl = (a.length() < b.length())?a.length():b.length();
//	for(i=0; i < minl; i++){
//		ret[i] = (a[i]-'0' + b[i]-'0' + carry) % 2 + '0';
//		carry = (a[i]-'0' + b[i]-'0' + carry) / 2;
//	}
//	for(; i < a.length(); i++){
//		ret[i] = (a[i]-'0' + carry) % 2 + '0';
//		carry = (a[i] - '0' + carry) / 2;
//	}
//	for(; i < b.length(); i++){
//		ret[i] = (b[i]-'0' + carry) % 2 + '0';
//		carry = (b[i] - '0' + carry) / 2;
//	}
//	if(carry == 1){
//		ret[i++] = carry + '0';
//	}
//	while(ret[i-1] == '0'){
//		i--;
//	}
//	for(int j=i-1; j > 0; j--){
//		cout << ret[j];
//	}
//	cout << ret[0] << endl;
//}
//
//int main(void){
//	int n;
//	cin >> n;
//	string stra, strb;
//	for(int i=1; i <= n; i++){
//		cin >> stra >> strb;
//		cout << i << " ";
//		add(stra, strb);
//	}
//	return 0;
//}