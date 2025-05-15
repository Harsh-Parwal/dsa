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
// int lenOfLoop(Node* head){
//     Node* temp=head;
//     map<Node*,int>mpp;
//     int i=0;
//     while(temp!=nullptr){
//         if(mpp.find(temp)!=mpp.end()){
//             return i-mpp[temp];
//         }
//         i++;
//         mpp[temp]=i;
//         temp=temp->next;
//     }
//     return 0;
// }
int lenOfLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            int count=1;
            Node* temp=slow->next;
            while(temp!=slow){
                count++;
                temp=temp->next;
            }
            return count;
        }
    }
    return 0;
}
int main(){

}