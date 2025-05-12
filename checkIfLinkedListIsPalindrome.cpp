#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(){
        next=nullptr;
    }
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};

bool checkIfPalindrome(Node*head){
    if(head==nullptr || head->next==nullptr){
        return true;
    }
    Node* temp=head;
    stack<int>st;
    while(temp){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp){
        if(st.top()!=temp->data){
            return false;
        }
        st.pop();
        temp=temp->next;
    }
    return true;
}
int main(){

}