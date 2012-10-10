#include <iostream>
#include <queue>
using namespace std;
int main(void){
	queue<int> deck;
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i <= n; i++){
			deck.push(i);
		}
		for(int i=0; i < n; i++){
			if(deck.size() >= 2){
				cout << deck.front() << " ";
				deck.pop();
				deck.push(deck.front());
				deck.pop();
			}else{
				if(!deck.empty()){
					cout << deck.front() << " ";
					deck.pop();
				}
				cout << endl;
			
			}
		}
	}
	return 0;
}