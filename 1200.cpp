#include <iostream>
#include <set>
using namespace std;
int main(void){
	int n;
	int temp;
	multiset<int> arr;
	while(cin >> n && n){
		for(int i=0; i < n; i++){
			cin >> temp;
			if(arr.find(temp) != arr.end()){
				arr.erase(arr.find(temp));
			}else{
				arr.insert(temp);
			}
		}
		cout << *arr.begin() << endl;
		arr.clear();
	}
	return 0;
}