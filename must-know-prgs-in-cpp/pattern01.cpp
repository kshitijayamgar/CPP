    #include <iostream>  
    
    int main()  
    {  
     char ch='A';    
        int i, j, k, m;    
        for(i=1;i<=5;i++)    
        {    
            for(j=5;j>=i;j--)    
                std::cout<<" ";    
            for(k=1;k<=i;k++)    
                std::cout<<ch++;    
                ch--;    
            for(m=1;m<i;m++)    
                std::cout<<--ch;    
	    std:: cout<<"\n";    
            ch='A';    
        }    
    return 0;  
    }  
