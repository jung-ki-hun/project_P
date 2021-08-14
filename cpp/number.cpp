//짝수와 홀수
// https://programmers.co.kr/learn/courses/30/lessons/12937
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    num%2 == 0 ? answer ="Even":answer="Odd";
   
    return answer;
}