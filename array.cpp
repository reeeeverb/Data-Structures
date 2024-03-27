#include <iostream>
#include <cassert>
#include <string.h>
using namespace std;

namespace arr{
    struct Arr{
        int length;
        int* start;

        arr(int length_)
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

/*
int main()
{
    arr::Arr thing(6);
    thing.set(0,10); 
    thing.set(1,20); 
    thing.set(2,30); 
    thing.set(3,40); 
    thing.set(4,50); 
    thing.set(5,60); 
    thing.print();
}
*/
