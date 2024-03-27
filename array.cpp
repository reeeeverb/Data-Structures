#include <iostream>
#include <cassert>
#include <string.h>
using namespace std;

namespace arr{
    struct arr{
        int length;
        int* start;

        int operator[](unsigned int index){
            assert(index < length);
            int offset = index*sizeof(int);
            return (int)*(start+offset);
        }
        
        int* at(unsigned int index){
            assert(index < length);
            int offset = index*sizeof(int);
            return (int*)(start+offset);
        }

        void set(unsigned int index, int value){
            assert(index < length);
            int offset = index*sizeof(int);
            int* new_index = (int*)start+offset;
            *new_index = value;
        }
    };

    arr* create_array(int len)
    {
       arr* thing = (arr*) malloc(sizeof(arr));
       thing->start = (int*) malloc(sizeof(int)*len);
       thing->length= len;
       return thing;
    }
}
