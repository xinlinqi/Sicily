#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void){
	int n;
	string name[21], ip[21];
	int rIndex;
	while(cin >> n && n){
		map<string, string> result;
		rIndex = 0;
		for(int i = 0; i < n; i++){
			cin >> name[i] >> ip[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(!ip[i].compare(ip[j])){
					result[name[i]] = name[j];
				}
			}
		}
		for(map<string, string>::iterator it = result.begin(); it != result.end(); it++){
			cout << it->second << " is the MaJia of " << it->first << endl;
		}
		cout << endl;
	}
	return 0;
}