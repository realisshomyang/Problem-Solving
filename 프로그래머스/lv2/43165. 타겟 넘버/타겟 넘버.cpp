#include <string>
#include <vector>

using namespace std;
void dfs(vector<int> &numbers , int &answer, int target, int depth, int sum){
    if(depth == numbers.size()-1){
        if(target == sum + numbers[depth]){
            answer++;
        }
        if(target == sum - numbers[depth]){
            answer++;
        }
        return;
    }
    else{
        dfs(numbers,answer,target,depth+1,sum+numbers[depth]);
        dfs(numbers,answer,target,depth+1, sum - numbers[depth]);
    }
}


int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers,answer,target,0,0);
    return answer;
    
}