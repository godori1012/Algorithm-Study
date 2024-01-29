#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long x;
    for(long long i=1; i<=(n-1); i++){
        if(n%i == 1){
            x=i;
            break;
        } 
    }
    
    return x;
}