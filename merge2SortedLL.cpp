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
Node* merge2SortedLL(Node* head1,Node* head2){
    if(head1==nullptr){
        return head2;
    }
    if(head2==nullptr){
        return head1;
    }

    Node* l3=new Node(0);
    Node* tail=l3;
    while(head1!=nullptr && head2!=nullptr){
        if(head1->data>=head2->data){
            tail->next=new Node(head2->data);
            head2=head2->next;
        }
        else{
            tail->next=new Node(head1->data);
            head1=head1->next;
        }
        tail=tail->next;
    }
    while(head1!=nullptr){
        tail->next=new Node(head1->data);
        head1=head1->next;
        tail=tail->next;
    }
    while(head2!=nullptr){
        tail->next=new Node(head2->data);
        head2=head2->next;
        tail=tail->next;
    }
    Node* head=l3->next;
    delete l3;
    return head;
}
int main(){

}