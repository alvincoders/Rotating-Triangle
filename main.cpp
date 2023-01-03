#include <iostream>

using namespace std;

void PyramidPattern (int a)

{   //First ForLoop is printing the number of rows.

    //Variable a is the number of spaces.

    //Variable i is equal to 1, i has to be less than a and add 1 each time it loops until i is NOT less than a

    for (int i = 1; i <= a; i++)

    {   //This for loop is used to put the spaces

        //n will always be constant, i is whatever number in the outerloop.

        //k value will keep on dereasing until k is not greater than 0, as this happens spaces will be added

        for (int k = a-i; k > 0; k--)

        {

            cout << " ";

        }

        //This for loop is to print the asterisks

        //j is the new variable introduced and is equal to 1. J has to be less than or equal to i.

        //After the star is printed, j is added one. And j is not less than or equal to one so it goes back to the first for loop.

        for (int j = 1; j <= i; j++)

        {

            cout << "* ";

        }

        cout << endl;

    }

}

void clockwisePyramid(int a)

{   //First for loop creates spaces.

    //i is assigned value 1 and has to be less than or equal to 2 x a - 1

    for(int i = 1; i <= 2*a-1; i++)

    {  

        //Using if statement to see if i is less than or equal to a

        //if it is, we run the for loops below.

        if(i<=a)

        {   //This for loop is used to print the upper half of the triangle

            //There is no spaces in this one because you don't need it. You can just end the row there.

            for(int j=1; j<=i; j++)

                cout << '*';

        }

        else

        {   //As said above, there are no spaces in this one because we done need it.

            //This loop is used to print the lower half of the triangle

            for(int j=i; j<=2*a-1; j++)

                cout << '*';

        }

        cout << endl;

    } 

}

//Creating the third Pyramid. Upside Down.

void UpsidedownPyramidPattern (int a)

{   //This for loop is for the number of rows. i is equal to a. So i is whatever the user inputted.

    //i variable will keep subtracting one until variable i is NOT greater than or equal to 1

    for (int i = a; i >= 1; i--)

    {

        //This for loop is to create the blank spaces.

        //k is whatever a - i is. On the first row, it should be zero because we don't want spaces.

        //Thus, moving onto the inner forloop.

        //As the loop goes on, i will decrease because its getting subtracted from the first for loop and k will have a value greater than 0.

        //Due to this, spaces will appear.

        for(int k = a-i; k > 0; k--)

        {

            cout << " ";

        }

        //j is equal to whatever i is. j will be subtracted until j is NOT greater than zero.

        //For each time it runs, it will print a star and a space until it doesn't work anymore

        //When j becomes zero it goes back to the outer loop.

        for (int j = i; j > 0; j--)

        {

            cout << "* ";

        }

        cout << endl;

    }

}

void counterclockwisePyramid(int a)

{

    //First for loop creates spaces.

    //i is assigned value 1 and has to be less than or equal to 2 x a - 1

for(int i=1; i <= 2*a-1; i++)

    {  

        //Using if statement to see if i is less than or equal to a

        //if it is, we run the for loops below.

        //j is new variable that is equal to a, and it has to be greater than i

        if(i<=a)

        {   //This first part of the loop is used to print the top half of the sideways pyramid

            //This for loop is used to put spaces

            for(int j = a; j > i; j--)

                cout << ' ';

            //This for loop is used to print the asterisks

            for(int j = 1; j <= i; j++)

                cout << '*';

        }

        else

        {   //This bottom part of the loop is used to print the lower half of the sideways pyramid

            //Loop is used to put spaces for the lower half. Variable a is switched with variable i

            for(int j = i; j > a; j--)

                cout << ' ';

            //Loop is used to put asterisks, used the 2*a-1 because we have to skip spaces.

            for(int j=i; j<=2*a-1; j++)

                cout << '*';

        }

        cout << endl;

    }

}

 

 

 

 

//Main code where the Pyramids functions are ran and outputted.

int main()

{

int a;

//Asking the user for a number between 2 and 25.

cout <<"Enter a number from 2 to 25:" <<endl;

cin >> a;

    //Using an if statement to see if the user inputted a number between 2 and 25.

    if (a >= 2 && a <= 25)

    {

        PyramidPattern(a);

        cout << "\n";

        clockwisePyramid(a);

        cout << "\n";

        UpsidedownPyramidPattern(a);

        cout << "\n";

        counterclockwisePyramid(a);

        cout << "\n";

    }

    else

    //If the user has not inputted a number between 2 and 25, it gives an error message and goes back to the start of main.

    {

        cout << a << " is not a number between 2 to 25 \n";

        main();

        cout << endl;

    }

cout<<endl;

}