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
// Node* findStartingOfLoop(Node* head){
//     Node* temp=head;
//     map<Node*,int>mpp;
//     int i=0;
//     while(temp!=nullptr){
//         if(mpp.find(temp)!=mpp.end()){
//             return temp;
//         }
//         i++;
//         mpp[temp]=i;
//         temp=temp->next;
//     }
//     return nullptr;
// }
Node* findStartingOfLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while (fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            slow=head;
            while(fast!=slow){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}

int main(){

}