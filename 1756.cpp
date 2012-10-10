#include <iostream>
#include <string>
#include <map>
#include <math.h>
using namespace std;
map<char, int> charMap;

bool isPrime(int n){
	if(n <= 2){
		return n == 2;
	}
	for(int i=2; i <= sqrt((double)n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}


int main(void){
	string str;
	while(cin >> str){
		int maxn=1, minn=100;
		for(int i=0; i < str.length(); i++){
			if (charMap.find(str[i]) != charMap.end()){
				charMap[str[i]] = charMap[str[i]]++;
			}else{
				charMap[str[i]] = 1;
			}
		}

		for(map<char, int>::iterator it = charMap.begin(); it != charMap.end(); it++){
			if(maxn < it->second){
				maxn = it->second;
			}
			if(minn > it->second){
				minn = it->second;
			}
		}

		if(isPrime(maxn - minn)){
			cout << "Lucky Word" << endl << maxn - minn << endl;
		}else{
			cout << "No Answer" << endl << 0 << endl;
		}
		charMap.clear();
	}
	return 0;
}