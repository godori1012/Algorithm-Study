#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for(int i=0; i<10; i++){
        auto s = find(numbers.begin(), numbers.end(), i);
        if(s==numbers.end()){
            answer+=i;
        }
    }
    return answer;
}