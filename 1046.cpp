#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct result{
	int start;
	int end;
	float sum;
	friend bool operator < (result r1, result r2){
		float a1 = r1.sum/(r1.end-r1.start + 1);
		float a2 = r2.sum/(r2.end-r2.start + 1);
		int l1 = r1.end - r1.start + 1;
		int l2 = r2.end - r2.start + 1;
		if(abs(a1-a2) < 0.0000001){
			if (l1 == l2){
				return (r1.end > r2.end) ?true:false;
			}
			return (l1 < l2)?true:false;
		}
		return (a1 < a2)?true:false;
	}
};



int main(void){
	int n;
	int numOfQrt, numOfBP, minNum;
	int plane[350];
	int resIndex;
	float sum;
	cin >> n;
	priority_queue<result> pq;
	for(int index = 1; index <= n; index++){
		resIndex = 0;
		result res;
		cin >> numOfQrt >> numOfBP >> minNum;
		for(int i=1; i <= numOfQrt; i++){
			cin >> plane[i];
		}
		for(int i=1; i <= numOfQrt - minNum + 1; i++){
			sum = 0;
			for(int k=0; k < minNum-1; k++){
				sum += plane[i+k];
			}
			for(int j=i+minNum-1; j <= numOfQrt; j++){
				sum += plane[j];
				res.start = i;
				res.end = j;
				res.sum = sum;
				pq.push(res);
			}
		}
		cout << "Result for run " << index << ":"<<endl;
		for(int i=0; i < numOfBP && !pq.empty(); i++){
			cout << pq.top().start << "-" << pq.top().end << endl;
			pq.pop();
		}
		while(!pq.empty()){
			pq.pop();
		}
	}
	return 0;
}