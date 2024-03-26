#include <iostream>
#include "linked-list.cpp"

int main()
{
    char old_value[] = "hello";
    char new_value[] = "bye";
    node* root = create_list(5,old_value);
    node* root2 = create_list(5,new_value);
    (*root)+=(root2);
    cout << (*root)[9]->value << "\n";
}

