#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

   string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string s = s1 + s2;
    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());

    if(s == s3){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}