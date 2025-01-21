#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/determine-the-winner-of-a-bowling-game/
int isWinner(vector<int>& player1, vector<int>& player2) {
        int n = player1.size();
        int score1 = 0, score2 = 0;
        for (int i = 0; i < n; i++) {
            if (i > 0 && (player1[i-1] == 10 || i-2>=0 && player1[i-2] == 10)) {
                score1 += 2 * player1[i];
            } else {
                score1 += player1[i];
            }
        }

        for(int i=0;i<n;i++){
            if(i>0 && (player2[i-1]==10 || i-2>=0 && player2[i-2]==10)){
                score2+=2*player2[i];
            }
            else{
                score2+=player2[i];
            }
        }

        if (score1 > score2) {
            return 1;
        } else if (score2 > score1) {
            return 2;
        }
        return 0; 
    }
int main(){

}