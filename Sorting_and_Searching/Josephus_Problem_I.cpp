#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

    public:
        Node(): val(0),next(nullptr) {}
        Node(int x): val(x),next(nullptr) {}
        Node(int x,Node *next): val(x),next(next) {}
};
int main(){
    int n;
    cin>>n;
    Node* head=new Node(1);
    Node* ptr=head;
    for(int i=2;i<=n;i++){
        Node *temp=new Node(i);
        ptr->next=temp;
        ptr=ptr->next;
    }
    ptr->next=head;
    
    Node* curr=head;

    while(curr->next!=curr){
        cout<<curr->next->val<<" ";
        curr->next=curr->next->next;
        curr=curr->next;
    }
    cout<<curr->val;
    free(head);

    
}