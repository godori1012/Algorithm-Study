#include <iostream>

using namespace std;

void FindEndNum(int n){
    int series=0, endNum=666;
    bool check=false;
    string str;
    while(true){
        str = to_string(endNum);
        for(int i=0; i<str.length()-2; i++){
            if(str[i]=='6'&& str[i+1]=='6'&& str[i+2]=='6'){
                series++;
                if(series==n){
                    cout << endNum;
                    check=true;
                }
                break;
            }
            
        }
        endNum++;
        if(check){
            break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    FindEndNum(n);

    return 0;
}