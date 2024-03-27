#include <iostream>
#include <cassert>
#include <string.h>
using namespace std;

namespace bt{
    struct node{
       char* value;
       node* parent;
       node* left_c;
       node* right_c;

       node(char* value_){
           value = value_;
           parent = NULL;
           right_c = NULL;
           left_c = NULL;
       }
       void add_left_c(node* child)
       {
           child->parent = this;
           left_c = child;
       }
       void add_right_c(node* child)
       {
           child->parent = this;
           right_c = child;
       }
       void del(){
            delete this;
       }

       void print(){
           printf("\nLEFT: %s, ROOT: %s, RIGHT: %s\n",left_c->value,value,right_c->value);
       }
    };
}
