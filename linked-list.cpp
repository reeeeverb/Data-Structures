#include <iostream>
#include <cassert>
#include <string.h>
using namespace std;

struct node{
    char* value;
    node* next_node = NULL;
    node* tail;
    bool root = false;
    int size;

    node* operator[](int index){
        assert(root && index >= 0  && index < size);
        node* current = this;
        for (int i = 0; i < index; i++){
            current = current->next_node;
        }
        return current;
    }

    node* operator+=(node* new_list){
        assert(new_list->root && root);
        this->tail->next_node = new_list;
        this->size += new_list->size;
        this->tail = new_list->tail;
        new_list -> root = false;
        new_list -> size = 0;
        return this;
    }
};

node* create_node(node* prev, char* value, int size)
{
    node* data = (node*) malloc(sizeof(node)); 
    data->value =  (char*) malloc(strlen(value)+1);
    data->next_node = (node*) malloc(sizeof(node*));
    data->root = true;
    data->size = size;
    strcpy(data->value,value);
    if (prev != NULL)
        prev->next_node = data;
    return data;
}

node* create_node(node* prev, char* value)
{
    node* data = (node*) malloc(sizeof(node)); 
    data->value =  (char*) malloc(strlen(value)+1);
    data->next_node = NULL;
    strcpy(data->value,value);
    if (prev != NULL)
        prev->next_node = data;
    else{
        data->root=true;
        data->size=1;
        data->tail=data;
    }
    return data;
}

node* create_list(int size, char* default_value)
{
    char data[] = "None";
    node* root = create_node(NULL,default_value,size);
    node* prev = root;
    for (int i = 1; i < size; i++){
        node* current = create_node(prev,default_value);
        prev = current;
        root->tail = current;
    }
    return root;
}


/*
int main()
{
    node* root = create_list(5);
    char new_value[] = "hello";
    (*root)[1]->value = new_value;
    cout << (*root)[0]->value << "\n";
    cout << (*root)[1]->value << "\n";
}
*/
