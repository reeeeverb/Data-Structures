#include <iostream>
#include <cassert>
#include <string.h>
using namespace std;

namespace arr{
    struct Arr{
        int length;
        int* start;

        Arr(int length_)
        {
            length = length_;
            start = (int*) calloc(length,sizeof(int));
        }

        int operator[](unsigned int index){
            assert(index < length);
            int offset = index;
            return (int)*(start+offset);
        }
        
        int* at(unsigned int index){
            assert(index < length);
            int offset = index;
            return (int*)(start+offset);
        }

        void set(unsigned int index, int value){
            assert(index < length);
            int offset = index;
            int* new_index = (int*)start+offset;
            *new_index = value;
        }

        void print(){
            for(int i = 0; i < length; i++){
                int offset = i;
                int* new_index = (int*)start+offset;
                printf("%d\n",*new_index);
            }
        }
    };
}
