#include <iostream>

using namespace std;

int main() {
	int t;
	for (int i = 0; i < 10; i++) {
		int a, M_value, con_arr[201]={0};
		cin >> t;
		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++) {
				cin >> a;
				con_arr[j] += a;
				con_arr[100 + k] += a;
				if (j == k) con_arr[200] += a;
			}
		}
		M_value=con_arr[0];
		for (int j = 1; j < 201; j++) {
			if (M_value < con_arr[j]) M_value = con_arr[j];
		}
		cout << "#" << t << " " << M_value <<endl;
	}
}
