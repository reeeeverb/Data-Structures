#include <iostream>
#include "linked-list.cpp"

int main()
{
    //char data[] = "string";
    //node* hoe = create_node(NULL,data);
    node* root = create_list(5);
    cout << (*root)[0] << "\n";
    cout << (*root)[1] << "\n";
    cout << (*root)[2] << "\n";
    cout << (*root)[3] << "\n";
    cout << (*root)[4] << "\n";
}

