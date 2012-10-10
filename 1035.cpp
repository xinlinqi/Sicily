#include <iostream>
#include <set>
#include <string>
using namespace std;

string complement(string strand){
	string retStr;
	for(int i=0; i < strand.length(); i++){
		if(strand[i] == 'A') retStr += 'T';
		if(strand[i] == 'T') retStr += 'A';
		if(strand[i] == 'G') retStr += 'C';
		if(strand[i] == 'C') retStr += 'G';
	}
	return retStr;
}

int main(void){
	int t;
	int n;
	string temp, comp;
	int result;
	multiset<string> strSet;
	cin >> t;
	
	while(t--){
		result = 0;
		cin >> n;
		for(int i=0; i < n; i++){
			cin >> temp;
			comp = complement(temp);
			if(strSet.find(comp) != strSet.end()){
				result++;
				strSet.erase(strSet.find(comp));
			}else{
				strSet.insert(temp);
			}
		}
		cout << result << endl;
		strSet.clear();
	}
	return 0;
}