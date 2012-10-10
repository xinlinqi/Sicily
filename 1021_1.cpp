#include <iostream>
#include <map>
using namespace std;
//Time Limit Exceeded(1)
int main(){
	int numOfCouples;
	int c1, c2;
	map<int, int> couple;
	int cIndex = 0;
	int i = 0;
	while (cin >> numOfCouples && numOfCouples){
		for(int i=0; i < numOfCouples; i++){
			cin >> c1 >> c2;
			if ((c1 - c2 != 1) && (c1 - c2 != -1)){
				couple[c1] = cIndex;
				couple[c2] = cIndex;
				cIndex ++;
			}
		}
		for(map<int, int>::iterator it=couple.begin(); it != couple.end();){
			map<int, int>::iterator tempIt = it;
			map<int, int>::iterator curIt = tempIt;
			map<int, int>::iterator nextIt;
			if (++tempIt != couple.end()){
				nextIt = tempIt;
			}else{
				nextIt = couple.begin();
			}
			if(nextIt->second == curIt->second){
				couple.erase(nextIt);
				couple.erase(curIt);
				it = couple.begin();
			}else{
				it++;
			}
		}
		if(couple.empty()){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}