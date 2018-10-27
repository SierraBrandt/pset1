#include <cs50.h>
#include <stdio.h>

int main(void)
{
        //make variables
        float change_owed;
        int change_output = 0;

        //prompt user for input (change owed)
        do
        {
            change_owed = get_float("Change owed: ");

        }

        while (change_owed < 0);


        change_owed = change_owed * 100;

       {
           //find quarters
           do
           {
            if (change_owed >= 25)
             {
                change_output = change_output + 1;
                change_owed = change_owed - 25;
             }
           }
           while (change_owed >=25);

            //find dimes
            do
            {
             if (change_owed >= 10)
             {
                 change_output = change_output + 1;
                 change_owed = change_owed - 10;
             }
            }
            while (change_owed >= 10);

            //find nickels
            do
            {
             if (change_owed >= 5)
             {
                 change_output = change_output + 1;
                 change_owed = change_owed - 5;
             }
            }
            while (change_owed >= 5);


            //find pennies
            do
            {
             if (change_owed >= 1)
             {
                 change_output = change_output + 1;
                 change_owed = change_owed - 1;
             }
            }
            while (change_owed >= 1);

       }

            printf("%i",change_output);

}

