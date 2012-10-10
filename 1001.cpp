#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int dpArr[10000];

int main(void){
	string str;
	while(cin >> str && str[0] != '0'){
		memset(dpArr, 0, sizeof(dpArr));
		dpArr[0] = 1;
		dpArr[1] = 1;
		for(int i=2; i <= str.length(); i++){
			if((str[i-1-1] - '0') * 10 + str[i-1] - '0' <= 26){
				if(str[i-1] == '0'){
					dpArr[i] = dpArr[i-2]; 
				}else{
					if(str[i-1-1] == '0'){
						dpArr[i] = dpArr[i-1];
					}else{
						dpArr[i] = dpArr[i-1] + dpArr[i-2];
					}
				}
			}else{
				if(str[i-1] == '0'){
					dpArr[str.length()] = 0;
					break;
				}else{
					dpArr[i] = dpArr[i-1];
				}
			}
		}
		cout << dpArr[str.length()] << endl;
	}
	return 0;
}