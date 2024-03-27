#include <iostream>
#include "linked-list.cpp"

int main()
{
    char old_value[] = "hello";
    char new_value[] = "bye";
    char value[] = "cokc";

    ll::node* root = ll::create_list(5,old_value);
    ll::node* root2 = ll::create_list(5,new_value);

    ll::node* new_node = ll::create_node(NULL,value);
    (*root)+=(root2);

    root->insert(3,new_node);

    cout << (*root)[3]->value << "\n" << new_node->value;
}

