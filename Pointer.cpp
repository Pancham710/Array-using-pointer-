#include <iostream>
using namespace std;

int main()
{
   int array[5];
   cout << "Enter the any 5  elements : "<<endl;
    //this for loop is for the taking input 
   for(int i = 0; i < 5; i++)
      cin >> array[i];

   cout << "You entered: ";
   // this for loop for printing the array which we have entered 
   for(int i = 0; i < 5; i++)
      cout << endl << *(array + i);

   return 0;
}
