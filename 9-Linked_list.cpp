// linked list is a linear datastructure where elements(nodes) are stored in non contigous memory location
// each node contains data and a pointer(link) to the next node
// singly LL,doubly LL, circular LL

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
int main() {
    // creatinng nodes in heap memory
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    
    // assigning data
    head->data=10;
    second->data=20;
    third->data=30;
    
    head->next=second;
    second->next=third;
    third->next=NULL;
    Node*temp=head;
    cout<<"Linkedlist: ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}


// to get input from user

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
int main() {
    // creatinng nodes in heap memory
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    
    // assigning data
    cout<<"Enter data at first node: "<<endl;
    cin>>head->data;
    cout<<"Enter data at second node: "<<endl;
    cin>>second->data;
    cout<<"Enter data at third node: "<<endl;
    cin>>third->data;
    
    head->next=second;
    second->next=third;
    third->next=NULL;
    Node*temp=head;
    cout<<"Linkedlist: ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

// to get both size and input from user

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
int main() {
    int n;
    cout<<"Enter the number of nodes to insert into the linkedlist";
    cin>>n;
    if(n<=0){
        cout<<"Linked list can not be created with size "<<n<<endl;
        return 0;
    }
    Node* head=NULL;
    Node* temp=NULL;
    for(int i=1;i<=n;i++){
            Node* newNode=new Node();
            cout<<"Enter the data for the node"<<i<<": ";
            cin>>newNode->data;
            newNode->next=NULL;
            if(head==NULL){
                head=newNode;
                temp=head;
            }
            else{
                temp->next=newNode;
                temp=newNode;
                
            }
            
        }
        cout<<"LinkedList: ";
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"Null "<<endl;
}
