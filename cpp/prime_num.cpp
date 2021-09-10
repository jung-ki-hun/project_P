// https://programmers.co.kr/learn/courses/30/lessons/12977
// 소수만들기
#include <vector>
#include <iostream>
using namespace std;

int find(int number){
    for(int i =2;i<1000;i++)
    {
        if(number % i == 0 && number != i)
        {
            return 0;
        }            
    }
     return 1;    
}

int solution(vector<int> nums) {
    int answer = 0;
    int sum =0;
    
    for(int i =0;i < nums.size();i++)
    {
        for(int j = i+1;j<nums.size();j++)
        {
            for(int k = j+1;k<nums.size();k++)
            {
                sum = nums[i]+nums[j]+nums[k];
                answer += find(sum);
            }
        }
    }
    
    return answer;
}