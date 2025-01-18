// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
#include<bits/stdc++.h>
using namespace std;
void combinations(string digits,string output,int idx, vector<string> &ans,string map[]){
        if(idx>=digits.size()){
            ans.push_back(output);
            return;
        }
        int number=digits[idx]-'0';
        string value=map[number];
        for(int i=0;i<value.size();i++){
            output.push_back(value[i]);
            combinations(digits,output,idx+1,ans,map);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        if(digits.length()<1){
            return ans;
        }
        string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combinations(digits,output,0,ans,map);
        return ans;
    }
int main(){


}