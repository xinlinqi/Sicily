#include <iostream>
using namespace std;

int countDigits(int n, int digit){
	int iFactor = 1, iCurrent,iLower, iHigher, iCount = 0;

	while(iFactor <= digit){

		iHigher = digit / (iFactor * 10);
		iLower = digit - (digit / iFactor) * iFactor;
		iCurrent = (digit - iHigher * iFactor * 10 - iLower) / iFactor ;
		if(iCurrent < n ){
			iCount += iHigher * iFactor;
		}
		if(iCurrent == n){
			if(n == 0){
				iCount += (iHigher-1) * iFactor + iLower + 1;
			}else{
				iCount += iHigher * iFactor + iLower + 1;
			}
		}
		if(iCurrent > n){
			if(n == 0){
				iCount += (iHigher) * iFactor;
			}else{
				iCount += (iHigher + 1) * iFactor;
			}
		}
		iFactor *= 10;
	}
	return iCount;
}

int main(void){
	int result[10], t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < 9; i++){
			cout << countDigits(i, n) << " ";
		}
		cout << countDigits(9, n) << endl;
	}
	return 0;
}