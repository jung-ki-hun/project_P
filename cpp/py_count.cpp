//https://programmers.co.kr/learn/courses/30/lessons/12916
//문자열 내 p와 y의 개수
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int conut[2] = {0,0};
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    string l_s = s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'p'||s[i] == 'P')
        {
            conut[0]++;
        }
        if(s[i]== 'y'||s[i]=='Y')
        {
            conut[1]++;
        }
    }
    
    if(conut[0] == conut[1])
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}