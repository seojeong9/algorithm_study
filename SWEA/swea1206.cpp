//첫줄 가로길이
//처음2,끝2는 0
//양옆 2칸확보되면 카운트
//양옆 2개와의 차이값, 총 4개가 양수이면 그중 최소값을 센다.

#include <iostream>

using namespace std;



int main() {
	int l, arr[1000],c;
	for (int i=1; i <= 10; i++) {
		cin >> l;
		arr[1000] = { 0 };
		c = 0;
		for (int j = 0; j < l;j++) {
			cin >> arr[j];
		}
		for (int k = 2; k < l - 2; k++) {
			int m[4] = { 0 };
		
			m[0] = arr[k] - arr[k - 2];
			m[1] = arr[k] - arr[k - 1];
			m[2] = arr[k] - arr[k + 1];
			m[3] = arr[k] - arr[k + 2];
			int m_gap = m[0];
			for (int r = 1; r <4; r++) {
				if (m_gap > m[r]) m_gap = m[r];
			}
			if (m_gap > 0) c += m_gap;
		}
		cout << "#" << i << " " << c << endl;
	}
}
