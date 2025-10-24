#include <iostream>
#include "../HEADER FILES/date.h"
using namespace std;
int main (){
    Date d1; // default constructer is automatically called
    // now calling the parameterized constructer
    Date(3,6,2024); 
    // now getting the input from the user
    while (true){
        if (d1.inputDate()){
        cout<<endl<<"Date is inputed and setted ";
        break;
        }else{
          cout<<endl<<"Invalid date! Enter Again"<<endl;
        }
    }

    // now assigning the direct date values
    
    if(d1.inputCompleteDate(12,2,2000)){
    cout<<endl<<"Date is Directly assigned."<<endl;
    }else{
    cout<<endl<<"Invalid Date Format!"<<endl;
    }
    
    // now copying the data froma an object
    Date d2; // date is set to default for this object, 
    // if we copy d2 into d1 then d1 is also set to default value
    if(d1.copyDate(d2)){
        cout<<endl<<"Data is copied"<<endl;
    }
    
    // now retrieving the data for oject d2
    int d,y,m;
    d2.retrieveDate(d,y,m);
    d2.showDate();
    
    // now comparing two dates
    if (d1.isEqual(d2)){
        cout<<endl<<"Dates are equal"<<endl;
    }else{
        cout<<endl<<"Not Equal dates"<<endl;
    }

    // checking for the leap year
    if(d2.isLeapYear()){
        cout<<endl<<"Bingo, got a leap year"<<endl;
    }else{
        cout<<endl<<"not a leap yar"<<endl;
    }

    // now usign setters to set date
    d2.setDay(25);
    d2.setMonth(3);
    d2.setYear(2006);

    // now using getters to get date values
    d2.getDay();
    d2.getMonth();
    d2.getYear();

    // now incrementing and decrementing the day
    d1.incrementDay();
    d1.decrementDay();
    cout<<endl<<"BoooooooooooooM--------- Exiting!"<<endl;

    return 0;
}
