#include <iostream>
using namespace std;

class Node
{

    public:
    
        Node *next_node;
        int value;


};

void insert_node(Node *root_node, int value){

    int flag = 1;

    while (flag){

        if (root_node->next_node == NULL){
            Node *new_node = new Node;
            root_node->next_node = new_node;
            new_node->value = value;
            new_node->next_node = NULL;
            cout <<"Here \n";
            flag = 0;
        }else{
            root_node = root_node->next_node;
        }
    }

    
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


int main(){

    Node *root_node = new Node();

    int data;

    cin >> data;

    root_node->value = data;

    root_node->next_node = NULL;

    int flag = 1;

    while(flag){

        int temp;

        cout << " 1.  Insert Data . 2. Print and Exit \n";

        cin >>temp;

        if (temp == 1){

                cout << "Enter Value";
                cin >> temp;
                insert_node(root_node, temp);
        }else{
            flag = 0;
            print_node(root_node);
        }


    }







}