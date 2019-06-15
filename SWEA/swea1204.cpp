#include <iostream>

using namespace std;

int T, n,i, j, a,b,arr[101];
int m = 0;
int main() {
	cin >> T;
	for (i=0; i < T; i++) {
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
	system("pause");
}
