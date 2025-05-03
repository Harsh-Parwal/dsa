#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};

Node* convertToLL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void traverseLL(Node* head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int lenOfLL(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}

bool searchElementLL(Node*head,int target){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    vector<int>arr={12,5,8,7};
    Node* head=convertToLL(arr);
    traverseLL(head);
    cout<<lenOfLL(head)<<endl;
    int target=7;
    if(searchElementLL(head,target)){
        cout<<"Found";
    }
    else{
        cout<<"Not found!";
    }
    return 0;
}