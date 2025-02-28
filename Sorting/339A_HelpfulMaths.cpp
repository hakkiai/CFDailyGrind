#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> numbers;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] != '+'){
            numbers.push_back(s[i] - '0');
        }
    }

    sort(numbers.begin(), numbers.end());
    for(int i=0; i<numbers.size(); i++){
        cout << numbers[i];
        if(i != numbers.size()-1){
            cout << "+";
        }
    }
    cout << endl;
    return 0;   
    
}