#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, input, x;
    cin >> n;
    
    stack<int> st;
    
    for(int i=0; i<n; i++){
        cin >> input;
        if(input==1){
            cin >> x;
            st.push(x);
        } else if(input==2){
            if(st.empty()){
                cout << -1 << "\n";
            } else{
                cout << st.top() << "\n";
                st.pop();
            }
        } else if(input==3){
            cout << st.size() << "\n";
        } else if(input==4){
            if(st.empty()){
                cout << 1 << "\n";
            } else{
                cout << 0 << "\n";
            }
        } else{
            if(st.empty()){
                cout << -1 << "\n";
            } else{
                cout << st.top() << "\n";
            }
        }
    }
    return 0;
}

