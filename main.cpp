#include <iostream>
#include "food_item.h"
#include "showing.h"

using namespace std;

int main()
{
    food_item ob1;
    showing show;

show.show_items();
    ob1.swich_items();
    ob1.get_money();
    ob1.receite_money();


    return 0;
}
