#include <iostream>
#include <set>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    string name, inout;
    set<string> remain;
    while(n--){
        cin >> name >> inout;
        if(inout == "enter"){
            remain.insert(name);
        } else{
            remain.erase(name);
        }
    }
    
    for(auto iter=remain.rbegin(); iter != remain.rend(); iter++){
        cout << *iter << "\n";
    }
    
    return 0;
}