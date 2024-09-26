#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canEat(int start, int end, string& pos){
	for(int i=start; i<=end; i++){
	    if(i>=0 && i<pos.length()&& pos[i]=='H'){
	        pos[i]='E';
	        return true;
	    }
	}
	return false;
}

int solution(int num, int k, string pos){
	int ans=0;
	
	for(int i=0; i<pos.length(); i++){
		if(pos[i]!='P'){
			continue;
		}
		if(canEat(i-k,i-1,pos)){
			ans++;
		} else if (canEat(i+1, i+k, pos)){
			ans++;
		}
	}
	
	return ans;
}

int main(){
	int num, k;
	cin >> num >> k;
	
	string pos;
	cin >> pos;
	
	cout << solution(num, k, pos);
	
	return 0;
}