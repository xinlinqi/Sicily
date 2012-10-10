#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main(void){
	int numOfCpl;
	int *couple;
	int c1, c2;
	stack<int> cplStack;
	while(cin >> numOfCpl && numOfCpl){
		couple = new int[numOfCpl * 2 + 1];
		memset(couple, 0, numOfCpl * 2 + 1);
		for(int i=0; i < numOfCpl; i++){
			cin >> c1 >> c2;
			couple[c1] = c2;
			couple[c2] = c1;
		}

		for(int i=1; i < numOfCpl * 2 + 1; i++){
			if (!cplStack.empty() && cplStack.top() == i){
				cplStack.pop();
			}else{
				cplStack.push(couple[i]);
			}
		}

		if (cplStack.empty()){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
		while(!cplStack.empty()){
			cplStack.pop();
		}
	}
	return 0;
}