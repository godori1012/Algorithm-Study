#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    int height=board.size();
    int cnt= moves.size();
    stack<int> basket;
    
    for(int i=0; i<cnt; i++){
        for(int j=0; j<height; j++){
            int pos=moves[i]-1;
            if(board[j][pos]==0){
                continue;
            }
            
            int doll=board[j][pos];
            board[j][pos]=0;
            
            if(!basket.empty() && doll==basket.top()){
                basket.pop();
                answer+=2;
            } else{
                basket.push(doll);
            }
            break;
        }
    }
    
    return answer;
}