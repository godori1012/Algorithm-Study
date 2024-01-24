#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, sum =0, result;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        sum += i;
        string str = to_string(i);
        for(int i=0; i<str.length(); i++){
            int num = str[i]-'0';
            sum+=num;
        }
        if(sum == n){
            result = i;
            break;
        } else{
            result = 0;
        }
        sum =0;
    }
    
    cout << result;

    return 0;
}
