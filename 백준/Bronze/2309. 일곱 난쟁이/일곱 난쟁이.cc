#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> tall(9, 0);
    int sum=0;
    for(int i=0; i<9; i++){
        cin >> tall[i];
        sum+=tall[i];
    }
    sort(tall.begin(), tall.end());
    int targetsSum = sum-100;
    bool found = false;
    for(int i=0; i<9 && !found; i++){
        for(int j=i+1; j<9; j++){
            if(tall[i]+tall[j] == targetsSum){
                tall.erase(tall.begin() + i);
                tall.erase(tall.begin() + j-1);
                found = true;
                break;
            }
        }
    }
    
    for(int i=0; i<7; i++){
        cout << tall[i] << "\n";
    }
    
    
    return 0;
}