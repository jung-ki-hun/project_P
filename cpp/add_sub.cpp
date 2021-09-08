//https://programmers.co.kr/learn/courses/30/lessons/76501?language=cpp
// 음양더하기
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int temp=0;
    for(int i =0;i<absolutes.size();i++)
    {
        if(signs[i])
        {
               answer += absolutes[i];
        }
        else
        {
             temp = absolutes[i] * -1;
            answer += temp;
        }
    }
    return answer;
}