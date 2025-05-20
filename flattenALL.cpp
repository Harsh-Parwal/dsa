#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* child;
    public:
    Node(){
        next=nullptr;
        child=nullptr;
    }
    Node(int data){
        this->data=data;
        next=nullptr;
        child=nullptr;
    }
};
Node* merge2LL(Node* head1,Node* head2){
    Node* t1=head1;
    Node* t2=head2;
    Node* l3=new Node(-1);
    Node* mover=l3;
    while(t1!=nullptr && t2!=nullptr){
        if(t1->data<=t2->data){
            mover->child=t1;
            mover=t1;
            t1=t1->child;
        }
        else{
            mover->child=t2;
            mover=t2;
            t2=t2->child;
        }
        mover->next=nullptr;
    }
    if(t1!=nullptr){
        mover->child=t1;
    }
    else if(t2!=nullptr){
        mover->child=t2;
    }
    return l3->child;
}
Node* flattenLL(Node* head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node* mergeHead=flattenLL(head->next);
    return merge2LL(head,mergeHead);
}
int main(){

}