#include <iostream>

using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;
    
    char num;
    for(int i=0; i<n; i++){
        cin >> num;
        sum += (num-'0');
    }
    
    cout << sum;

    return 0;
}