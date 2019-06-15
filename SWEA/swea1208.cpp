//https://j2wooooo.tistory.com/110 참고하였음.

#include <iostream>
using namespace std;

int main(){
    int n,arr[100],gap;
    for(int i=1;i<=10;i++){
        arr[100]={0};
        cin >> n;  // 덤프횟수 입력
        for(int j=0;j<100;j++)  cin >> arr[j];
        int maxpoint =0, minpoint=0;
        for(int k=0;k<=n;k++){
            for(int j=0;j<100;j++){
                if(arr[j] > arr[maxpoint]) maxpoint=j;
                if(arr[j] < arr[minpoint]) minpoint=j;
            }
            if((arr[maxpoint]-arr[minpoint])==0 || (arr[maxpoint]-arr[minpoint])==1) break;
            if(k==n) break;
            arr[maxpoint]--;
            arr[minpoint]++;
        }
        gap=arr[maxpoint]-arr[minpoint];
        cout << "#" << i << " " << gap << endl;
    }
}
