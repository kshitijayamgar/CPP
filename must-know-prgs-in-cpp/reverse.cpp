    #include <iostream>  
      
    int main()  
    {  
    int n, reverse=0, rem;    
    std::cout<<"Enter a number: "<<std::endl;    
    std:: cin>>n;    
      while(n!=0)    
      {    
         rem=n%10;      
         reverse=reverse*10+rem;    
         n/=10;    
      }    
      std::cout<<"Reversed Number: "<<reverse<<std::endl;     
    return 0;  
    }  
