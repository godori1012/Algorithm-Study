#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, card1, m, card2;
    map<int, int> cards1;
    
    cin >> n;
    while(n--){
        cin >> card1;
        cards1[card1]++;
        
    }
    cin >> m;
    while(m--){
        cin >> card2;
        int num = cards1[card2];
        cout << num << " ";
    }

    return 0;
}

