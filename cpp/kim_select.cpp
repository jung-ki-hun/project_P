// 서울에서 김서방 찾기
// https://programmers.co.kr/learn/courses/30/lessons/12919
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = ""; 
    int local=0;
    
    while(true)
    {
        
        if(seoul[local]=="Kim")
        {
            break;
        }
        
        local++;
            
    }
    answer = "김서방은 ";
    answer += to_string(local);
    answer+="에 있다";
    return answer;
}