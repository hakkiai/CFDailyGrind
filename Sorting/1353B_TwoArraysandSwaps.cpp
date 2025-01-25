#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int k, n;
    while(t--){
        cin >> n >> k;

        int a[n], b[n];
        for(int i=0; i<n;i++){
            cin >> a[i];
            cin >> b[i];
        }

        sort(a, a+n);
        sort(b, b+n, greater<int>()); // greater<int> for reverse sort
        int i=0, j=0, swaps = 0;

        while(k-- && i<n && j<n){
            if(a[i] < b[j]){
                a[i] = b[j];
                i++;
                j++;
                swaps++;
            } else {
                break;
            }
        }

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        
        cout << sum << endl;

        return 0;
    }
}