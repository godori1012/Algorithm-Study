#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    
    int total=12000*n;
    int service=n/10;
    if(k-service>=0){
        total+=(k-service)*2000;
    }
    
    return total;
}