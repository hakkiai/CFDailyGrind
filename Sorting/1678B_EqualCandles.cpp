#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n;i++){
            cin >> a[i];
        }

        int min = *min_element(a.begin(), a.end());

       long long sum = 0;
        for(int i=0; i<n; i++){
            sum += (a[i] - min);
        }

        cout << sum << endl;
    }
}