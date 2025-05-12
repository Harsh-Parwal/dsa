#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data){
        this->data=data;
        next=nullptr;
        back=nullptr;
    }

    Node(int data,Node* next,Node* back){
        this->data=data;
        this->next=next;
        this->back=back;
    }
};
Node* reverseDll(Node* head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node* current=head;
    Node* temp=nullptr;

    while(current!=nullptr){
        temp=current->back;
        current->back=current->next;
        current->next=temp;

        current=current->back;
    }
    if(temp!=nullptr){
        head=temp->back;
    }
    return head;
}
int main(){

}