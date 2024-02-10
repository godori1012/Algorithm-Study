#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    
    sort(d.begin(), d.end());
    int num=0;
    for(int i=0; i<d.size(); i++){
        if(d[i]>budget){
            break;
        }
        budget-=d[i];
        num++;
        if(budget-d[i+1]<0){
            break;
        }
    }
    return num;
}