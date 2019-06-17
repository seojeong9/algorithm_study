#include <iostream>

using namespace std;


int main() {
	int t;
	for (int i = 0; i < 10; i++) {
		cin >> t;
		int arr[100][100];
		int fy;
		for (int j = 0; j < 100; j++) {
			for (int k = 0; k < 100; k++) {
				cin >> arr[j][k];
				if (arr[j][k] == 2) fy = k;
			}
		}
		for (int j = 98; j >= 1; j--) {
			if (arr[j][fy-1] == 1) {
                while (arr[j][fy-1]) fy--;
            }
     
			else if(arr[j][fy+1] == 1) {
				while (arr[j][fy+1]) fy++; 
            }
		}
		cout << "#" << t << " " << fy << endl;
	}
}
