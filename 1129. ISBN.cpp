#include <iostream>
#include <string>
using namespace std;
int main(void){
	string str;
	int weight, sum;
	while(cin >> str){
		weight = 10;
		sum = 0;
		for(int i=0; i < str.length(); i++){
			if(str[i] == '-'){
				continue;
			}
			sum += (str[i]-'0') * weight;
			weight--;
		}
		cout << str;
		if(sum % 11 == 1){
			cout << "-X" << endl;
		}else if(sum % 11 == 0){
			cout << "-0" << endl;
		}else{
			cout << "-" <<11 - sum % 11 << endl;
		}
	}
	return 0;
}