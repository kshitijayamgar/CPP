#include<iostream>
int main(){
        int n,m;
	int sum=0;
	std::cout<<"enter the number:"<<std::endl;
	std::cin>>n;
	while(n>0){
                m=n%10;
		sum=sum+m;
		n=n/10;
	}
	std::cout<<"sum is:"<<sum<<std::endl;
	return 0;
}

