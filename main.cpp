#include <iostream>
#include "binary-tree.cpp"

int main()
{
    char input[] = "world";
    char left_in[] = "hello";
    char right_in[] = "cokc";

    bt::node thing(input);
    bt::node left(left_in);
    bt::node right(right_in);
    
    thing.add_right_c(&right);
    thing.add_left_c(&left);


    thing.print();
}

