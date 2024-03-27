#include <iostream>
#include "array.cpp"

int main()
{
    arr::arr* thing = arr::create_array(5);
    thing->set(1,40); 
    int value = (*thing)[1];
    cout << (*thing)[1];
}

