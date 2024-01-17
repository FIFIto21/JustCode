#include <iostream> 

class node{
    public:
        int data;
        node *next;
};

void printLinkedList(node *nd)
{
    int i = 1;
    while (nd != NULL){
        std::cout<<"Node "<< i <<" = "<<nd-> data<<"\n";
        nd = nd-> next;
        i++;
    }
}

void reverseLinkedList(node *nd)
{
    node *p, *c, *n; // p = previus, c = current, n = next
    p = NULL; // make the previus pointing to NULL
    c = nd; // set the current to the head node

    while (c != NULL){
        n = c-> next; // next is equal to current -> next
        c-> next = p; // make the current -> next pointing to previus
        p = c; // previus is equal to the current
        c = n; // current is equal to the next node
    } // repit the process untill the current node is equal to NULL
    nd = p; // set head pointing to previus

    printLinkedList(nd);
}

int main()
{
    std::cout<<std::endl;

    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();

    head-> data = 1;
    head-> next = second;

    second-> data = 2;
    second-> next = third;

    third-> data = 3;
    third-> next = fourth;

    fourth-> data = 4;
    fourth-> next = fifth;

    fifth-> data = 5;
    fifth-> next = NULL;

    printLinkedList(head);

    std::cout<<std::endl;

    reverseLinkedList(head);

    return 0;
}