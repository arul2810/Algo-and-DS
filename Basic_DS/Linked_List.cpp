#include <iostream>

using namespace std;

class linked_list{

public:

int value;

linked_list* next_node;
linked_list* prev_node;


};

void update( int value, linked_list *root_node ){

    linked_list *new_node = new linked_list;
   new_node->value = value;

    linked_list *current_node = root_node;

    int flag = 0 ;

    if ( root_node->value == NULL ){
        root_node->value = value;
    }else{

    while ( !flag ){

        if(current_node->next_node == NULL ){
            flag = 1;
            current_node->next_node = new_node;
           // current_node.value = value;
            new_node->next_node = NULL;
            new_node->prev_node = current_node;
        }else{
            current_node = current_node->next_node;
        }

    }}

}

void delete_node ( int value , linked_list* root_node) {

    linked_list* current_node = root_node;

    int flag = 0 ;

    while ( !flag ){

        if ( current_node->value == value ){
            current_node->prev_node->next_node = current_node->next_node;
            flag = 1;
        }else{
            current_node = current_node->next_node;
        }
    }

}

void view(linked_list * root_node){

    linked_list* current_node = root_node;

    int flag = 0;

    while (!flag){

        if ( current_node->next_node == NULL ){
            flag = 1;
            cout << current_node->value << " ";
        }else{
            cout << current_node->value << " ";
            current_node = current_node->next_node;
        }
    }

}

int main(){

    linked_list* root_node = new linked_list;
    root_node->prev_node = NULL;
    root_node->next_node = NULL;
    root_node->value = NULL;

    while(1){

    cout << "What you want to do ? \n 1. Add 2. Delete 3. View \n";

    int choice;

    cin >> choice;


    if ( choice == 1){
        int temp;
        cout << "Enter value: ";
        cin >> temp;
        update(temp, root_node);

    }else if ( choice == 2 ){
        int temp;
        cout << "Enter Value to delete:" ;
        cin >> temp;
        delete_node(temp, root_node);
    }else{
        view(root_node);
    }
    }


}