#include "food_item.h"
#include <iostream>
using namespace std;



    void food_item::get_money()  // get the money from user
    {
        cout << "Enter Your Money : ";
        cin >> user_money;

    }


    void food_item::receite_money() // using temp to show user_money at the end
    {
        user_money-=price;
        double temp=user_money;

recall:   // recall to check if no money is left in the machine
        if(temp < 0)
        {
            cout << "Invalid Input "<< endl; // if user enter invalid input
        }

        else if (temp > 0)
        {

            if(temp >= 10)
            {
                temp-=10;
                cout << "10 L.E"<< endl;

            }

            if(temp >= 5)
            {
                temp-=5;
                cout << "5 L.E"<< endl;

            }
            if(temp >= 1)
            {
                temp-=1;
                cout << "1 L.E" << endl;            // to return to the client his money in 10 le , 5 le, 1 le,0.5 le

            }

            if(temp>0.5)
            {
                goto recall;
            }

            if(temp==0.5)
            {
                cout << "0.5 L.E"<< endl;
            }

        }
        units--;     // units decrease
        cout << "\nUser Money Now = "<< user_money << "   :::::  Units Now = " << units <<"\n";

    }

    void food_item::swich_items() // take your choice
    {
reinput:
        cout << "Enter Your Item : ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            price = 5;
            units = 10;
            break;
        case 2:
            price = 10;
            units = 10;
            break;

        case 3:
            price = 5;
            units = 10;
            break;

        case 4:
            price = 1;
            units = 10;
            break;

        case 5:
            price = 1;
            units = 10;
            break;

        case 6:
            price = 5;
            units = 10;
            break;

        case 7:
            price = 0.5;
            units = 10;
            break;

        case 8:
            price = 0.5;
            units = 10;
            break;

        case 9:
            price = 0.5;
            units = 10;
            break;

        case 10:
            price = 1;
            units = 10;
            break;

        default:
            cout << "Invalid Input " << endl;
            goto reinput;

        }
    }



;

