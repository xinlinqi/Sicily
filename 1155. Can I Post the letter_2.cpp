#include <iostream>
#include <cstring>
using namespace std;

int canVisit[200];
bool hasPath;

int main(void){
	int n, m, a, b;
	while(cin >> n && n){
		cin >> m;
		hasPath = true;
		memset(canVisit, 0, sizeof(canVisit));
		for(int i=0; i < m; i++){
			cin >> a >> b;
			for(int i = a; i <= b; i++){
				canVisit[i] = 1;
			}
		}
		for(int i=0; i < n; i++){
			if (!canVisit[i]){
				hasPath = false;
				break;
			}
		}
		if(hasPath){
			cout << "I can post the letter" << endl;
		}else{
			cout << "I can't post the letter" << endl;
		}
	}
	return 0;
}