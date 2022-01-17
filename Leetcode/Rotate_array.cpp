/*

Code by Arul Prakash Samathuvamani | hire@arulprakash.dev

Leetcode Problem - Rotate Array | Diffuculty - Medium

*/


// Including all the library files
#include<iostream>
#include<algorithm>

using namespace std;

//creating a linked list


class linked_list{
    public:

    linked_list *next_node;
    int value;

};

linked_list insert_node ( linked_list *current_node , int value){

    // create a new node

    linked_list *new_node = new linked_list;

    current_node->next_node = new_node;

    new_node->value = value;

    new_node->next_node = NULL;

    return *new_node;

    
}

linked_list rotate_node ( linked_list *root_node , int value, linked_list *last_node ){
    
    linked_list *current_node = new linked_list;
    current_node = root_node;

    for ( int i = 0 ; i < value ; i ++) {

        current_node = current_node->next_node;
        
    }

    last_node->next_node = root_node;

    return *current_node;

}

void print_node ( linked_list *root_node, int array_size ){

    linked_list *current_node = new linked_list;

    current_node = root_node ;

    for ( int  i = 0 ; i < array_size ; i ++ ){
        cout << " Am here " ;
        cout << current_node->value << " ";
        current_node = current_node->next_node;
    }
}


int main(){

    linked_list *root_node = new linked_list;

    root_node->next_node= NULL;
    root_node->value = NULL;

    int array_size;

    cin >> array_size;

    int temp;

    cin >> temp;

    linked_list *current_node = new linked_list;

    root_node->next_node = current_node;
    root_node->value = temp;

    for ( int i = 0 ; i < array_size-1 ; i++){

        cin >> temp;

        *current_node = insert_node ( current_node, temp );

    }

    int rotation_index;

    cin >> rotation_index;

    int rotate = array_size - rotation_index;

    *root_node = rotate_node ( root_node , rotate, current_node);

    print_node (root_node, array_size);
    
    return 0;
}