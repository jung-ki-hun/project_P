//로또의 최고 순위와 최저 순위
//https://programmers.co.kr/learn/courses/30/lessons/77484

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int win[2] ={0,0};    
    for(int i =0;i<6;i++)
    {
        for(int j =0;j<6;j++){
        if(lottos[i] == win_nums[j]||lottos[i] == 0)
        {
            win[0] ++;
            break;
        }
       
        } 
        if(lottos[i] == 0)
        {
            win[1] ++;//로스된거
        }
    }
    int tem1 = win[0];
    switch(tem1)
    {
        case 0:
            answer.push_back(6);
            break;
        case 1:
            answer.push_back(6);
            break;
        case 2:
              answer.push_back(5);
            break;
        case 3:
              answer.push_back(4);
            break;
        case 4:
              answer.push_back(3);
            break;
        case 5:
              answer.push_back(2);
            break;
        case 6:              
              answer.push_back(1);
            break;
            
    }
    int tem = win[0]-win[1];
    cout<<tem;
        switch(tem)
    {
        case 0:
            answer.push_back(6);
            break;
        case 1:
            answer.push_back(6);
            break;
        case 2:
              answer.push_back(5);
            break;
        case 3:
              answer.push_back(4);
            break;
        case 4:
              answer.push_back(3);
            break;
        case 5:
              answer.push_back(2);
            break;
        case 6:              
              answer.push_back(1);
            break;
            
    }
    return answer;
}