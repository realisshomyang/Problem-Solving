#include<vector>
#include<iostream>
#include<queue>
bool visited[101][101];
using namespace std;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int solution(vector<vector<int>> maps)
{
    int answer = 0;
    pair<pair<int,int>,int> s = make_pair(make_pair(0,0),1);
    queue<pair<pair<int,int>,int>> q;
    q.push(s);
    while(!q.empty()){
        pair<pair<int,int>,int> cur = q.front();
        q.pop();
        int nx, ny = 0;
        for(int i = 0; i<4; i++){
            nx = cur.first.first + dx[i];
            ny = cur.first.second + dy[i];
            if(nx <0 || ny <0 || nx >= maps.size() || ny >= maps[0].size()){
                continue;
            }
            else if(visited[nx][ny]){
                continue;
            }
            else if(maps[nx][ny] == 0){
                continue;
            }
            else if(maps[nx][ny] == 1){
                visited[nx][ny] = true;
                if(nx == maps.size()-1 && ny == maps[0].size()-1){
                    answer = cur.second+1;
                    break;
                }
                q.push(make_pair(make_pair(nx,ny),cur.second+1));
            }
        }
    }
    if(visited[maps.size()-1][maps[0].size()-1]){
        return answer;
    }
    else{
        return -1;
    }
}