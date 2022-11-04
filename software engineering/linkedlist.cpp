#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};
Node* head=NULL;

void insertItem(int new_item) {
    Node* new_node = new Node();
    new_node->data=new_item;
    new_node->next=head;
    head=new_node;
}

void printList() {
    while(head!=NULL) {
        cout<<head->data<<' ';
        head=head->next;
    }
}

int main() {

    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        insertItem(x);
    }
    printList();

    return 0;
}
