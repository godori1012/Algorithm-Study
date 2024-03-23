#include <bits/stdc++.h>

using namespace std;

int solution(string input){
    
    stack<char> st;
    int sum=0;
    
    for(int i=0; i<input.size(); i++){
        if(input[i]=='('){   // 열린 괄호
            st.push('(');
        } else{             // 닫힌 괄호
            st.pop();
            if(input[i-1]=='('){ // 이전괄호=> 열린 괄호 (레이저)
                sum+=st.size();
            } else{             // 이전괄호 => 닫힌 괄호
                sum++;
            }
            
        }
    }
    return sum;
}

int main()
{
    string input;
    cin >> input;
    
    cout<<solution(input);

    return 0;
}

