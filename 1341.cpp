#include <iostream>
#include <set>
using namespace std;
int main(void){
	int n, temp;
	int arr[110];
	set<int> s;
	while(cin >> n && n > 0){
		for(int i=0; i < n; i++){
			cin >> temp;
			s.insert(temp);
		}
		cout << s.size() << endl;
		for(set<int>::iterator it = s.begin(); it != s.end(); it++){
			set<int>::iterator temp = it;
			cout << *it;
			if (++temp != s.end()){
				cout << " ";
			}
		}
		cout << endl;
		s.clear();
	}
	return 0;
}