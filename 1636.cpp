#include <iostream>
using namespace std;
int main(void){
	int t, m , n, left, Ai, Bi;
	cin >> t;
	while(t--){
		cin >> m >> n;
		left = m;
		for(int i=0; i < n; i++){
			cin >> Ai >> Bi;
			left -= Ai * Bi;
		}
		if(left < 0){
			cout << "Not enough" << endl;
		}else{
			cout << left << endl;
		}
	}
	return 0;
}