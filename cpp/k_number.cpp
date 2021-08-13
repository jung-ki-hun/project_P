/***
 * k번째수
 * 
 * https://programmers.co.kr/learn/courses/30/lessons/42748?language=javascript
 */
#include <string>
#include <vector>

using namespace std;
vector<int> arr(vector<int> arr , vector<vector<int>> Com) {
    vector<int> temp;
    int start,end;
    for(int i= 0  ;i<=Com.size();i++){
        start = Com[i][0];
        end = Com[i][2];
        for(int j = start;j<end;j++){
            temp.push_back(arr[j]);
        }
    }
    return temp;
}
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    answer = arr(array,commands);

    return answer;
}