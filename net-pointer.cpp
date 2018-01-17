//Mod 4 Intro to C++ Payroll byTimothy Kresock for DrEbrahimi.com Inc. ,homework
#include <iostream>
#include <fstream>  
using namespace std;
int id;  //original array for id
double net[100];

 
int main() {
     //?int *temp = &buffer; // local pointer declaration and assignment swap 
     cout<<"ENTER YOU NET ID  :";
     cin>>id;
     double * buffer=&net[id];  //local pointer declaration to hold net[id] instance;
     
     ofstream myfile; //declare myfile for streaming
     myfile.open("pointer_swap.dat");// open stream for output to FILE and make FILE <-data goes in here
     
     //cin >> net[id]; //answer goes in here ok, if it is TYPE INT
    // buffer = &net[id]; //array instance is assigned
     cout<<"YOUR NET[ID] IS:  "<<net[id];//onscreen verification
     //feedback part to help me understand what is happening
     cout <<" " << &net[id] << endl ;  // feedback of input, ok!
     cout << "Buffer is " <<buffer; // feedback of counter, ok!
     //cout << "Pointer is  " << temp;  //  feedback of pointer is address, ok!
     //wanting to put swap in here
     
     myfile << endl << "  ";
     myfile << buffer; // <--this is where I put data into the file, ok!
     //myfile << id[0];
     myfile << "   ...it's okay!" << endl ;
     myfile.close();
  return 0;    
}//MYSWAP
