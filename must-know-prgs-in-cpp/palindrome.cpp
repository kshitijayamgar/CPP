    #include <iostream>  
      
    int main()  
    {  
      int n,r,sum=0,temp;    
      std:: cout<<"Enter the Number:-"<<std::endl;    
      std::cin>>n;    
     temp=n;    
     while(n>0)    
    {    
     r=n%10;    
     sum=(sum*10)+r;    
     n=n/10;    
    }    
    if(temp==sum)    
    std::cout<<"Number is Palindrome."<<std::endl;    
    else    
    std::cout<<"Number is not Palindrome."<<std::endl;   
      return 0;  
    }  

