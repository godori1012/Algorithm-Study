#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, count = 0;
    cin >> n;
    
    map<string, int> in_car;
    string car, out_car;
    vector<int> seq;
    
    for(int i=0; i<n; i++){
        cin >> car;
        in_car[car] = i;
    }
    for(int i=0; i<n; i++){
        cin >> out_car;
        seq.push_back(in_car[out_car]);
    }
    

    for(int i=0; i<seq.size(); i++){

        for(int j=(i+1); j<seq.size(); j++){
            if(j>(seq.size())){
                break;
            } else{
                if(seq[i] > seq[j]){
                    count++;
                    break;
                }
            }
            
        }
    }
    
    cout << count;
    
    return 0;
}