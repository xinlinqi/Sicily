#include <iostream>
#include <stdlib.h>
using namespace std;

struct Employee{
	int id;
	long salary;
	long height;
	long bossId;
	long subCount;
}em[30010];

int compare(const void* a, const void* b){
	Employee ea = *(Employee*)a;
	Employee eb = *(Employee*)b;
	return ea.salary - eb.salary;
}

//int compare2(const void* a, const void* b){
//	Employee ea = *(Employee*)a;
//	Employee eb = *(Employee*)b;
//	return ea.id - eb.id;
//}

/*void initEmployees(int size){
	int subCount;
	for(int i=0; i < size; i++){
		subCount = 0;
		for(int j=0; j < i; j++){
			if(em[j].salary < em[i].salary){
				subCount++;
			}
		}
		em[i].subCount = subCount;
		for(int j=i+1; j < size; j++){
			if(em[j].salary > em[i].salary){
				em[i].bossId = em[j].id;
				break;
			}
		}
	}
}*/

//Employee queryEmployees(int id, int start, int end){
//	int mid = (start + end) / 2;
//	if(em[mid].id == id){
//		return em[mid];
//	}
//	if(id < em[mid].id){
//		return queryEmployees(id, start, mid - 1);
//	}else{
//		return queryEmployees(id, mid+1, end);
//	}
//}

void initEmployeeData(int empId, int size){
	int subCount = 0, bossId = 0;
	int i;
	for(i=0; i < size; i++){
		if(em[i].id == empId){
			break;
		}
	}
	for(int j=0; j < i; j++){
		if(em[j].height <= em[i].height){
			subCount++;
		}else{
			subCount = 0;
		}
	}
	for(int j=i+1; j < size; j++){
		if(em[j].height >= em[i].height){
			bossId = em[j].id;
			break;
		}
	}
	cout << bossId << " " << subCount << endl;
}


int main(void){
	int n, m, q, tempId;
	cin >> n;
	while(n--){
		cin >> m >> q;
		for(int i=0; i < m; i++){
			cin >> em[i].id >> em[i].salary >> em[i].height;
		}
		qsort(em, m, sizeof(Employee), compare);
		for(int i=0; i < q; i++){
			cin >> tempId;
			initEmployeeData(tempId, m);
		}
	}
	return 0;
}