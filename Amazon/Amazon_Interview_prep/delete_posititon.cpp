#include <iostream>

using namespace std;


class Node{

    public:

        int value;
        Node *next_node;


};

void insert_node( Node *root_node , int value ){

    while( root_node->next_node != NULL ){

        root_node = root_node->next_node;
    }


    Node *new_node = new Node;

    new_node->next_node = NULL;
    root_node->next_node = new_node;
    new_node->value = value;


}


void print_node ( Node *root_node ){

    while (root_node->next_node != NULL)
    {
        /* code */

        cout << root_node->value<< ",";
        root_node = root_node->next_node;
    }

    cout << root_node->value;
    


}


void delete_node(Node *root_node, int position){

    int current_pos= 1;

    Node *previous_node = new Node;

    while ( current_pos != position ){
        previous_node = root_node;
        root_node = root_node->next_node;
        current_pos = current_pos + 1;
    }

    root_node = root_node->next_node;
    previous_node->next_node = root_node;

    print_node(root_node);


}

int main(){


    Node *root_node = new Node;

    int temp;

    cin >> temp;

    root_node->value = temp;
    root_node->next_node = NULL;

    int flag = 1;

    while ( flag ){

       // int temp;
        cout << "1. Insert Node. 2. Delete Node \n";
        cin >> temp;

        if( temp == 1 ){

            int value;
            cin >> value;
            insert_node(root_node, value);
        }else{
            cout << "Insert Position: ";
            int position;
            cin >> position;

            delete_node (root_node, position);
            flag = 0;
        }
    
    }





}