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
// bool detectLoop(Node* head){
//     map<Node*,int>mpp;
//     Node* temp=head;
//     while(temp!=nullptr){
//         if(mpp.find(temp)!=mpp.end()){
//             return true;        // loop detected
//         }
//         mpp[temp]=1;
//         temp=temp->next;
//     }
//     return false;
// }

// using slow and fast pointer like used in finding middle of a linked list;
bool detectLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;        // loop detected
        }
    }
    return false;
}
int main(){


}