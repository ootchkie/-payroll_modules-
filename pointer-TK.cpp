//Mod 4 Intro to C++ Payroll byTimothy Kresock for DrEbrahimi.com Inc. ,homework
#include <iostream>
#include <fstream>  
using namespace std;
int id[9];  //original array for id
int counter;  //variable to hold a single instance
int * data = &counter; // global pointer declaration and assignment 
 
int main() {
     
     ofstream myfile; //declare myfile for streaming
     myfile.open("P4ayroll.dat",ios::in);// open stream for output to FILE and make FILE <-data goes in here
     cout<<"ENTER EMPLOYEE ID:  "; //question at the screen
     cin >> id[0]; //answer goes in here ok, if it is TYPE INT
     counter = id[0]; //array instance is assigned
     
     //feedback part to help me understand what is happening
     cout << "You entered "<< id[0];  // feedback of input, ok!
     cout << "Counter is " <<counter; // feedback of counter, ok!
     cout << "Pointer is  " << data;  //  feedback of pointer is address, ok!
     
     myfile << counter;  // <--this is where I put data into the file, ok!
	 myfile.close();
     return 0;
       
}//MAIN
