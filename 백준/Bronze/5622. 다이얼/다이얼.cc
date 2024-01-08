#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;
    int tm=0;
    
    for(int i=0; i<s.size(); i++){
        switch(s[i]){
            case 'A': case'B': case 'C': tm+=2; break;
            case 'D': case'E': case 'F': tm+=3; break;
            case 'G': case'H': case 'I': tm+=4; break;
            case 'J': case'K': case 'L': tm+=5; break;
            case 'M': case'N': case 'O': tm+=6; break;
            case 'P': case'Q': case 'R': case 'S': tm+=7; break;
            case 'T': case'U': case 'V': tm+=8; break;
            case 'W': case'X': case 'Y': case 'Z': tm+=9; break;
            default: tm+=10;
        }
    }
    
    tm += s.size();
    cout << tm;

    return 0;
}
