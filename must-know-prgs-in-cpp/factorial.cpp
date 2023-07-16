    #include <iostream>  
     
    int main()  
    {  
       int i,fact=1,number;    
       std:: cout<<"Enter any Number: "<<std::endl;    
       std::cin>>number;    
      for(i=1;i<=number;i++){    
          fact=fact*i;    
      }    
      std::cout<<"Factorial of " <<number<<" is: "<<fact<<std::endl;  
      return 0;  
    }  
