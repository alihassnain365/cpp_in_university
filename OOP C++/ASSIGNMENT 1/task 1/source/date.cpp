#include <iostream>
#include "../HEADER FILES/date.h"
using namespace std;
// Default constructor for the class
Date :: Date (){
    d = 01;
    m = 01;
    y = 2000;
    cout<<endl<<"Default constructer is called and values are set to Default. Date is : "<<d<<" ,"<<m<<" ,"<<y<<endl;
}

// Parameterized Constructer for the Class
Date :: Date (int d, int m, int y){
    this->d = d;
    this->m = m;
    this->y = y;
    cout<<"Parameterized Constructer is called and Date is : "<<d<<","<<m<<" ,"<<y<<endl;
} 

// Copy constructor for the class
Date :: Date (const Date& other){
    d = other.d;
    m = other.m;
    y = other.y;
    cout<<endl<<"The Copy constructer is called and the object is copied "<<endl;
}

// Getting the input from user and validating
bool Date :: inputDate (){
    cout<<endl<<endl<<"Enter the date: dd, mm, yyyy: "<<endl;
    int d,m,y;
    cin>>d>>m>>y;
    if ((d>=1 and d<=31) and (m>=1 and m<=12) and (y>=2000)){
        this->d=d;
        this->m = m;
        this-> y = y;
        return true;
    }else{
        cout<<endl<<"Invalid Date Format!"<<endl;
        return false;
    }
}

// now assigning date
bool Date :: inputCompleteDate(int d, int m, int y){
    if ((d>=1 and d<=31) and (m>=1 and m<=12) and (y>=2000)){
    this->d = d;
    this->m = m;
    this->y = y;
    return true;
    }else{
        return false;
    }
    
}

// now copying the date from another object in a fuction
bool Date:: copyDate(const Date& other){
    this->d = other.d;
    this->m = other.m;
    this->y = other.y;
    return true;
}
// retrieving date with refrences
void Date :: retrieveDate(int& d, int& m, int& y){
    d = this->d;
    m = this->m;
    y = this->y;
    cout<<endl<<"The date is retrieved :"<<endl;
}

// showing the date
void Date :: showDate(){
    cout<<endl<<"Date is "<<d<<"/"<<m<<"/"<<y<<endl;
}

// comparing to dates
bool Date :: isEqual(const Date& other){
    if((this->d == other.d) and (this->m == other.m) and (this->y == other.y)){
        return true;
    }else{
        return false;
    }
}

// bool is leap year check
bool Date :: isLeapYear(){
    if (y%4 == 0){
        return true;
    }else{
        return false;
    }
}

// setters
void Date :: setDay(int d){
    if(d>=1 and d<=31){
        this-> d = d;
    }else{
        cout<<endl<<"Entered Invalid Day!"<<endl;
    }
}

void Date :: setMonth(int m){
    if (m>=1 and m<=12){
        this-> m = m;
    }else{
        cout<<endl<<"Entered Invalid Month!"<<endl;
    }
     
}
void Date :: setYear(int y){
    if (y>=2000){
        this-> y = y;
    }else{
        cout<<endl<<"Entered Invalid Year!"<<endl;
    }
     
}

// getters for d, m , y
int Date :: getDay(){
    int day = d;
    return day;
}

int Date :: getMonth(){
    int month = m;
    return m;
}

int Date :: getYear(){
    int year = y;
    return y;
}

// incrementing and decrementing the date
void Date :: incrementDay(){
    // vlaidating the increment
    if (d<31){
        d = d +1;
    }else{
        if(m<12){
            m++;
        }else{
            y++;
            m = 1;
        }
        
        d = 1;
    }
    
    cout<<endl<<"Day is incremented."<<endl;
}
void Date :: decrementDay(){
    d = d - 1;
    cout<<endl<<"Day is Decremented"<<endl;
}