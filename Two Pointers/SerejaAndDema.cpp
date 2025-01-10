#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sereja = 0, dima = 0;
    int i = 0, j = n - 1;
    
    
    for (int turn = 0; i <= j; turn++) {
        int chosenCard = max(a[i], a[j]);  

        if (turn % 2 == 0) {
            sereja += chosenCard;  
        } else {
            dima += chosenCard;  
        }

        if (chosenCard == a[i]) {
            i++;  
        } else {
            j--;  
        }
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
