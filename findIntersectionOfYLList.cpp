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
int findLen(Node* temp){
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
Node* findIntersection(Node* head1,Node* head2){
    if(head1==nullptr || head2==nullptr){
        return nullptr;
    }
    int n1=findLen(head1);
    int n2=findLen(head2);
    Node* temp1=head1;
    Node* temp2=head2;
    if(n1>n2){
        while(n1>n2){
            temp1=temp1->next;
            n1--;
        }
    }
    else if(n2>n1){
        while(n2>n1){
            temp2=temp2->next;
            n2--;
        }
    }
    while(temp1!=nullptr && temp2!=nullptr){
        if(temp1==temp2){
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return nullptr;
}
int main(){

}