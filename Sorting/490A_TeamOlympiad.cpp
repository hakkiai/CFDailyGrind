#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n], b[n], c[n];
    int a_count = 0, b_count = 0, c_count = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1){
            a[a_count] = i + 1;
            a_count++;
        } else if(x == 2){
            b[b_count] = i + 1;
            b_count++;
        } else {
            c[c_count] = i + 1;
            c_count++;
        }
    }
    int teams = min(a_count, min(b_count, c_count));
    cout << teams << endl;
    for(int i = 0; i < teams; i++){
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
    return 0;
}