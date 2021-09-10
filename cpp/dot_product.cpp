//https://programmers.co.kr/learn/courses/30/lessons/70128
//내적
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    int sum = 0;
    for(int i = 0; i<a.size();i++)
    {
        sum = a[i]*b[i];
        cout << sum<< ' ';
        answer += sum;
    }   
    return answer;
}