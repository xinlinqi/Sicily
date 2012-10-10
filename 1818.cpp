#include <iostream>
#include <map>
#include <string>
using namespace std;

void getLevel(int score){
	char level[11] = {'E', 'E', 'E', 'E', 'E', 'E', 'D', 'C', 'B', 'A', 'A'};
	if(score > 100 || score < 0){
		cout << "Score is error!" << endl;
	}else{
		cout << level[score/10] << endl;
	}
}

int main(void){
	map <string, int> st;
	int t, n, m, score;
	string name;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0; i < n; i++){
			cin >> name >> score;
			st[name] = score;
		}
		for(int i=0; i < m; i++){
			cin >> name;
			getLevel(st[name]);
		}
	}
	return 0;
}