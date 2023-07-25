#include <iostream>


int main()
{
   int i, j, row;

   std:: cout << "Enter number of rows: ";
   std::cin >> row;

   for(i = row; i >= 1; i--)
   {
      //print * equal to row number
      for(j = 1; j <= i; j++)
      {
	      std:: cout << "* ";
      }
      std::cout << "\n";
   }

   return 0;
}
