#include <iostream>
using namespace std;

struct Score{
	int sid;
	int chinese;
	int total;
}score[5];

int main(void){
	int n, c, m, e, k = 0, s, size, t=0;
	while(cin >> n && n){
		if(t > 0){
			cout << endl;
		}
		for(int i=0; i < n; i++){
			cin >> c >> m >> e;
			s = c + m + e;
			int j = 0;
			while(score[j].total > s && j < 5 || (score[j].total == s && score[j].chinese >= c && j < 5)){
				j++;
			}
			if(j == 5) continue;

			if (i < 4){
				score[i+1].total = score[i].total;
				score[i+1].chinese = score[i].chinese;
				k = i;
				size = i + 1;
			}else{
				k = 4;
				size = 5;
			}
			for(; k > j; k--){
				score[k].total = score[k-1].total;
				score[k].sid = score[k-1].sid;
				score[k].chinese = score[k-1].chinese;
			}
			score[k].total = s;
			score[k].sid = i + 1;
			score[k].chinese = c;
		}
		for(int i=0; i < size; i++){
			cout << score[i].sid << " " << score[i].total << endl;
			score[i].chinese = 0;
			score[i].sid = 0;
			score[i].total = 0;
		}
		t++;
	}
	return 0;
}