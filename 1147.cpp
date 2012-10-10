#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct student{
	string name;
	int prize;
	int order;
}stu[120];

int compare(const void* a, const void* b){
	student sa = *(student*)a;
	student sb = *(student*)b;
	if (sa.prize == sb.prize){
		return sb.order - sa.order;
	}
	return sa.prize - sb.prize;
}


int main(void){
	int n, f, c, e;
	char x, y;
	string name;
	cin >> n;
	int prize, tPrize = 0;
	for(int i=0; i < n; i++){
		prize = 0;
		cin >> name >> f >> c >> x >> y >> e;
		if(f > 80 && e >= 1){
			prize += 8000;
		}
		if(f > 85 && c > 80){
			prize += 4000;
		}
		if(f > 90){
			prize += 2000;
		}
		if(f > 85 && y == 'Y'){
			prize += 1000;
		}
		if(c > 80 && x == 'Y'){
			prize += 850;
		}
		stu[i].name = name;
		stu[i].prize = prize;
		stu[i].order = i;
		tPrize += prize;
	}
	qsort(stu, n, sizeof(student), compare);
	cout << stu[n-1].name << endl << stu[n-1].prize << endl << tPrize << endl;
	return 0;
}