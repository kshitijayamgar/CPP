#include <iostream>
int main()
    {
      int n, m=0, flag=0;
      std:: cout << "Enter the Number to check Prime: ";
      std::cin >> n;
      m=n/2;
      for(int i = 2; i <= m; i++)
      {
          if( n % i == 0)
          {
                  std:: cout<<"Number is not Prime."<<std::endl;
              flag=1;
              break;
          }
      }
      if (flag==0)
          std::cout << "Number is Prime."<<std::endl;
      return 0;
    }
     
