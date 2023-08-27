#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    
    queue<int> q;
    string cmd;
    
    cin >> N;
    
    while(N--) {
        cin >> cmd;
        if(cmd == "push") {
            cin >> K;
            q.push(K);
        }
        else if(cmd == "pop") {
            if(q.empty()){
                cout << "-1" << "\n";
            }
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(cmd == "size"){
            cout << q.size() << "\n";
        }
        else if(cmd == "empty") {
            if(q.empty()){
                cout << 1 << "\n";
            }
            else{
                cout << "0" << "\n";
            }
        }
        else if(cmd == "front") {
            if(q.empty()) {
                cout << "-1" << "\n";
            }
            else{
                cout << q.front() << "\n";
            }
        }
        else if(cmd == "back") {
            if(q.empty()) {
                cout << "-1" << "\n";
            }
            else{
                cout << q.back() << "\n";
            }
        }
        
        
    }
    return 0;
}

