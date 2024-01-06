#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    string aa = to_string(a), bb = to_string(b);
    string sA, sB;
    
    for(int i=2; i>=0; i--){
        sA += aa[i];
        sB += bb[i];
    }
    
    if(stoi(sA) > stoi(sB)){
        cout << sA;
    } else{
        cout << sB;
    }
    return 0;
}