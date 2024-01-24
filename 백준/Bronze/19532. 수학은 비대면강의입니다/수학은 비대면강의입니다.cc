#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b, c, d, e, f;
    cin >> a >> b>>c>>d>>e>>f;
    
    int x, y;
    bool bl = true;
    
    for(int i=-999; i<1000; i++){
        if(!bl){
            break;
        }
        for(int j=-999; j<1000; j++){
            x=i;
            y=j;
            if(a*i+b*y==c && d*x+e*y==f){
                bl=false;
                break;
            }
        }
    }
    
    cout << x << " " << y;

    return 0;
}