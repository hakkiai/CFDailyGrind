#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
        }
    }
    int arr[26] = {0};
    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    

    return 0;
}