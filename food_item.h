#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H


class food_item
{
protected:

    int choice,userAnswer;
    int units=10;
    double price;
    double temp;
    double user_money;

public:
    public:
        void get_money();
        void receite_money();
        void swich_items();

};

#endif // FOOD_ITEM_H
