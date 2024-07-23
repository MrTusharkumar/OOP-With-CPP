
#include<iostream>
using namespace std;


class abc {
static int n;
  int code; // default private 
static int count;
 public: 

 void setcode(){
code = ++count ;
 
}
 
static void Count(){
 cout<<  ; 
 }
}; 
int abc :: count =0 ;
int main()
 { 
 abc a1 , a2 ;
a1.setcode();
a2.setcode();
a1.setcode();        
abc :: Count();




 
/*
 
// pointers *
    int n=10 ;
    int *tkw = &n;
    int **mkw =&tkw;
    int ***akw = &mkw;
    tkw = 500;
    cout<< ***akw;
    */
    
 // reference ref &
  /* 
     int  a = 5; 
    int &tkw = a;
  
     cout<< tkw; 
  */
   //Structure 
/*   
   struct str
     {
    int a ;
    int b ;
         };
         
    
     str s1 = {10,20};  
    cout<<"the value of a : "<< s1.a << "\nThe value of b :"<<s1.b ;
    
 */ 
 
           
     // union
     /*
     union uni{
     int b ;
     int c ;
     int a ;
     };
       
     uni u1  ;
        u1.b = 10 ;
        u1.a = 30 ;

     cout<<u1.c  ;
*/
 
// Enumeration enum 
/*
enum week{ mon  , tue , wed , thu , fri 
};
 week w1 = fri;
 
 cout<< w1;

*/
/*
 // scope resolution 
 int x = 3 ;
 cout<< :: x;     
   cout <<endl<< x;

*/

     
     return 0;
     
    
}