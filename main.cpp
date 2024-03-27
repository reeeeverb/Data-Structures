#include <iostream>
#include "array.cpp"

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

