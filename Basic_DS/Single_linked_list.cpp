#include <iostream>

using namespace std;

class linkedlist {

public:

    int data;
    linkedlist* next_node;

};


void update(int value, linkedlist* rootnode){

    linkedlist* new_node = new linkedlist;

    new_node = rootnode;

    if(new_node -> data == NULL){
        rootnode->data = value;
    }else{

        while(new_node->next_node != NULL) {
            new_node = new_node->next_node;
        }

        linkedlist* create_node = new linkedlist;
        new_node->next_node = create_node;
        create_node->data = value;
        create_node->next_node = NULL;
    }


}

void view(linkedlist* current_node){

    while(current_node->next_node != NULL){
        cout << " " << current_node->data;
        current_node = current_node->next_node;
    }

    cout << " " << current_node->data;


}

void insert(int value, linkedlist* current_node, int position){

    for(int i = 0; i <= position ; i++){
        if(i == position){
            linkedlist* new_node = new linkedlist;
            new_node->data = current_node -> data;
            new_node ->next_node = current_node -> next_node;
            current_node->data = value;
            current_node->next_node = new_node;
        }else{
            current_node = current_node -> next_node;
        }
    }
}

int main(){

    linkedlist* rootnode = new linkedlist;

    rootnode->data = NULL;
    rootnode->next_node = NULL;

    while(1){

    cout << "Welcome to Linked List Tutorial: \n What do you want to do? \n 1. Update 2. Insert 3. View 4. Break \n";

    int selection;

    cin >> selection;

    if ( selection == 1){

        cout << "Enter the value: \n";
        int value;
        cin >> value;
        update(value, rootnode);
        
    }if ( selection == 2){

        cout << "Enter Pos and Value \n";
        int pos;
        int value;

        cin >> pos >> value;

        insert(value, rootnode, pos);
    }if (selection == 3 ){
        cout <<"\n";
        view(rootnode);
    }else{
        break;
    }


    }

}