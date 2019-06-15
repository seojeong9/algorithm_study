#include <iostream>

using namespace std;

int T, n,i, j, a,b;
int main() {
	cin >> T;
	for (i=0; i < T; i++) {
        int arr[101]={0};    
        int m = 0;
		cin >> n;
		for (j = 0; j <1000; j++) {
			cin >> a;
			arr[a]++;
		}
		for (j = 0; j < 101; j++) {
			if (m <= arr[j]) { m = arr[j];  b = j; }
		}
		cout << "#" << n << " " << b << endl;
	}
}
