/***
 * k번째수
 * 
 * https://programmers.co.kr/learn/courses/30/lessons/42748?language=javascript
 */
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    int start =0,end=0,k=0;
    for(int i= 0  ;i<commands.size();i++){
        start = commands[i][0]-1;
        end = commands[i][1];
        k = commands[i][2]-1;
        temp.clear();
        for(int j = start;j<end;j++){
            temp.push_back(array[j]);
        }
        sort(temp.begin(),temp.end());//임시 저장 후 정렬
        answer.push_back(temp.at(k));
        
    }      
    return answer;
}