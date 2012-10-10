#include <iostream>
#include <map>
using namespace std;
int main(void){
	map <int, int> m;
	int n, temp;
	while(cin >> n){
		for(int i=0; i < n; i++){
			cin >> temp;
			if(m.find(temp) != m.end()){
				m[temp] = m[temp]++;
			}else{
				m[temp] = 1;
			}
		}
		for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
			if(it->second % 2 != 0){
				cout << it->first << endl;
				break;
			}
		}
		m.clear();
	}
	return 0;
}