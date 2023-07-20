#include <iostream>  
 int main()  
    {  
    int a, b;
    std::cout<<"enter 1st num:"<<std::endl;
    std::cin>>a;

    std::cout<<"enter 2nd num:"<<std::endl;
    std::cin>>b;

        
    std::cout<<"Before swap a= "<<a<<" b= "<<b<<std::endl;      
    a=a+b; //a=15 (5+10)    
    b=a-b; //b=5 (15-10)    
    a=a-b; //a=10 (15-5)    
    std:: cout<<"After swap a= "<<a<<" b= "<<b<<std::endl;      
    return 0;  
    }  
