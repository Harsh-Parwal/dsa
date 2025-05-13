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
int middleElement(Node* head){
    if(head==nullptr){
        return 0;
    }
    if( head->next==nullptr){
        return head->data;
    }

    Node* temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    temp=head;
    int midIdx=cnt/2;
    for(int i=0;i<midIdx;i++){
        temp=temp->next;
    }
    return temp->data;
}
int main(){

}