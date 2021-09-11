#include <iostream>

using namespace std;

class linkedlist{
    public:

    int data;
    linkedlist* next_node;

};

void update( int value, linkedlist* rootnode){


    linkedlist* current_node;

    current_node = rootnode;

    if(current_node->data == NULL){
        current_node->data = value;
        current_node->next_node = rootnode;
    }else{
        
        linkedlist *node_address = rootnode;
        while (current_node -> next_node != node_address){
            current_node = current_node->next_node;
        }

        linkedlist* new_node = new linkedlist;

        new_node->data = value;
        new_node->next_node = current_node->next_node;
        current_node->next_node = new_node;
    }
}

void view(linkedlist* rootnode){

    linkedlist *node_address = rootnode;

    while (rootnode->next_node != node_address){
        cout << " " << rootnode->data;
        rootnode = rootnode->next_node;
    }
}

int main(){

    linkedlist* rootnode = new linkedlist;

    rootnode->data = NULL;
    rootnode->next_node = rootnode;

    while(1){

        cout << "What do you want to do ? 1. Update 2. View \n";

        int selection;

        cin >> selection;

        if (selection ==1 ){

            cout << "Enter the value: ";
            int value;
            cin >> value;
            update ( value, rootnode); 
        } else{

            view(rootnode);
        }
    }
}