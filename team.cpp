#include<iostream>
using namespace std;

int main(){
int n, count = 0;
cin >> n;
int t, m , k;
for(int i=0;i<n;i++){
cin >> t >> m >> k;
if(t + m + k >= 2){
count++;
}
}
cout << count << endl;
return 0;
}