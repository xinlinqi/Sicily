#include <iostream>
using namespace std;

int main(void){
	int m, n, x, y;
	while(cin >> m >> n && !(m == 0 && n == 0)){
		if(n % 2 == 0 && (n - 2 * m) % 2 == 0 && m && n){
			x = 2 * m - n / 2;
			y = (n - 2*m) / 2;
			if(x >= 0 && y >= 0)
				cout << x << " " << y << endl;
			else
				cout << "No answer" << endl;
		}else{
			cout << "No answer" << endl;
		}
	}
	return 0;
}