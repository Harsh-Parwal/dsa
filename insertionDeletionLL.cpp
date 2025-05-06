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
void traverseLL(Node* head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* insertAtHeadLL(Node* head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    return head;
}
Node* insertAtEndLL(Node* head,int val){
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* t=new Node(val);
    temp->next=t;
    return head;
}

Node* removeHeadLL(Node* head){
    if(head==nullptr){
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* removeTailLL(Node*head){
    if(head==nullptr || head->next==nullptr){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    temp->next=nullptr;
    return head;
}
Node* removeKElement(Node* head,int k){
    if(head==nullptr){
        return head;
    }    
    if(k==1){
        head=removeHeadLL(head);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    int count=1;
    while(temp!=nullptr){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete (temp);
            break;
        }   
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    Node* head=new Node(5);
    head=insertAtHeadLL(head,11);
    cout<<head->data<<endl;
    head=removeHeadLL(head);
    cout<<head->data<<endl;
    head=insertAtEndLL(head,100);
    head=insertAtEndLL(head,101);
    head=insertAtEndLL(head,102);
    head=insertAtEndLL(head,103);
    head=insertAtEndLL(head,104);

    traverseLL(head);
    head=removeTailLL(head);
    traverseLL(head);
    head=removeKElement(head,4);
    traverseLL(head);
}