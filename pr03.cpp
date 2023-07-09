#include<iostream>
 void fun(){
	std::cout<<"In fun"<<std::endl;
} 
/*void fun(); //forward declaration */
int main(){

   fun();

 return 0;
}
/*O/P:-
 / usr/bin/ld: /tmp/cc8sOkYS.o: in function `fun()':
pr04.cpp:(.text+0x0): multiple definition of `fun()'; /tmp/cchw4JAU.o:pr03.cpp:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status

*/
/* pr03.cpp and pr04.cpp sobt compile karyche ahet..
 * Asa ka aal?
   Ambiguity create zali konta fun() gheu kalena tyala... 
   ld returned 1 exit status mnje loader mntoy me hya file la load krnar nhiye,karan copilation zalya 
    nantr hee file lining sathi loader kde janar ..pn jr linking zaalich nahi tr loader la heee file transfer honar nahiye 

