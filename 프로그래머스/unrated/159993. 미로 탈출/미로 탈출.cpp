#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
bool visited[101][101];

int solution(vector<string> maps) {
    int answer = 0;
    pair<int,int> S;
    pair<int,int> LS;
    bool visitL = false;
    bool visitE = false;
    queue<pair<pair<int,int>,int>> q;
    for(int i = 0; i<maps.size(); i++){
        for(int j = 0; j<maps[i].size(); j++){
            if(maps[i][j] == 'S'){
                S = make_pair(i,j);
            }
            if(maps[i][j] == 'L'){
                LS = make_pair(i,j);
            }
        }
    }
    q.push(make_pair(S,0));
    while(!q.empty() && !visitL){
        pair<pair<int, int>,int> cur = q.front();
        q.pop();
        int nx, ny;
        for(int i = 0; i<4; i++){
            nx = cur.first.first + dx[i];
            ny = cur.first.second + dy[i];
            if(nx < 0 || ny < 0 || nx >=maps.size() || ny >= maps[0].size()){
                continue;
            }
            else if(maps[nx][ny] == 'X'){
                continue;
            }
            else if(visited[nx][ny] == true){
                continue;
            }
            else if(maps[nx][ny] == 'O' || maps[nx][ny] == 'E'){
                visited[nx][ny] = true;
                q.push(make_pair(make_pair(nx,ny),cur.second+1));
            }
            else if(maps[nx][ny] == 'L'){
                visitL = true;
                answer = answer + 1 + cur.second;
                break;
            }
        }
    }
    if(!visitL){
        return -1;
    }
    
    for(int i = 0; i<maps.size(); i++){
        for(int j = 0; j<maps[i].size(); j++){
            visited[i][j] = false;
        }
    }
    
    queue<pair<pair<int,int>,int>> q1;
    q1.push(make_pair(LS,0));
    int tmp = 99999999;
    while(!q1.empty()){
        pair<pair<int, int>,int> cur = q1.front();
        q1.pop();
        int nx, ny;
        for(int i = 0; i<4; i++){
            nx = cur.first.first + dx[i];
            ny = cur.first.second + dy[i];
            if(nx < 0 || ny < 0 || nx >=maps.size() || ny >= maps[0].size()){
                continue;
            }
            else if(maps[nx][ny] == 'X'){
                continue;
            }
            else if(visited[nx][ny] == true){
                continue;
            }
            else if(maps[nx][ny] == 'O' || maps[nx][ny] == 'S'){
                visited[nx][ny] = true;
                q1.push(make_pair(make_pair(nx,ny),cur.second+1));
            }
            else if(maps[nx][ny] == 'E'){
                visitE = true;
                tmp = min(tmp, cur.second);
                break;
            }
        }
    }
    if(!visitE){
        return -1;
    }

    return answer + tmp +1 ;
}