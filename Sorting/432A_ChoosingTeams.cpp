#include<iostream>
using namespace std;

int main(){
int n, k;
cin >> n >> k;
int arr[n];
for(int i=0; i<n;i++){
    cin >> arr[i];
}
int count = 0;
for(int i=0; i<n;i++){
    arr[i] += k;
}

for(int i=0; i<n;i++){
    if(arr[i] <= 5){
        count++;
    }
}

cout << count/3 << endl;
}

/*
INPUT:
6 -> Number of students (n)
4 -> Number of times the existing team members can participate(k)
0 1 2 3 4 5 -> Number of times each of the team members have participated(arr[n])

Condition:
1) No team member should participate not more than <=5 times.

OUTPUT:
0 -> Number of ways to form a team.

 */
