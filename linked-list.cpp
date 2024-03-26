#include <iostream>
#include <cassert>
#include <string.h>
using namespace std;

struct node{
    char* value;
    node* next_node; 
    bool root = false;
    int size;

    char* operator[](int index){
        assert(root && index >= 0  && index < size);
        node* current = this;
        for (int i = 0; i < index; i++){
            current = current->next_node;
        }
        return current->value;
    }
};

node* create_node(node* prev, char* value, int size)
{
    node* data = (node*) malloc(sizeof(node)); 
    data->value =  (char*) malloc(strlen(value)+1);
    data->next_node = NULL;
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
    return data;
}

node* create_list(int size)
{
    char data[] = "Noneee";
    node* root = create_node(NULL,data,size);
    node* prev = root;
    for (int i = 1; i < size; i++){
        data[i] = 'P';
        node* current = create_node(prev,data);
        prev = current;
    }
    return root;
}
