#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class linklist{
    private:
    node *head;
    node *tail;
    public:
    linklist(){
        head = NULL;
        tail = NULL;
    }
    void insertNode(int n){
        node * ptr = new node;
        ptr -> data = n;
        ptr -> next = NULL;
        if (head == NULL){
            head = ptr;
        }
        else{
            node *nodeptr;
            nodeptr = head;
            while (nodeptr -> next  != tail){
                nodeptr = nodeptr -> next;
            }
            nodeptr -> next = ptr;
        }
    }
    void display(){
        if(head == NULL){
            cout<<"Linklist is empty"<<endl;
        }
        else{
            node * i = head;
            while(i!= tail){
                cout<< i -> data<<"\t";
                i = i->next;
            }
        }
    }
    void sum_nodes(){
        if(head == NULL){
            cout<<"\nLinklist is empty"<<endl;
        }
        else{
            int sum= 0;
            node * i = head;
            while(i!= tail){
                sum = sum + i->data;
                i = i->next;
            }
            cout<<"\nTotal sum 0f the linklist is"<<" "<<sum<<endl;
        }
    }


};
int main(){
    linklist l1;
    l1.insertNode(1);
    l1.insertNode(2);
    l1.insertNode(3);
    l1.insertNode(4);
    l1.display();
    l1.sum_nodes();
    return 0;}
