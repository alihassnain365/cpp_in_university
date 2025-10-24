class Date { 
// attributes of the class
int d;
int m;
int y;

public: 
Date(); // Default constructor: initialize attributes with default values 
   
Date(int d, int m, int y);      
// Parameterized constructor: if invalid, set to default or system date 
Date(const Date& other);  // Copy constructor       
bool inputDate(); // Input date from user; return true if valid, false otherwise              
bool inputCompleteDate(int d, int m, int y); // Assign and validate date directly 
bool copyDate(const Date& other);            
// Copy date from another Date object 
void retrieveDate(int& d, int& m, int& y); // Retrieve current date values via references 
void showDate();          
// Display date in a readable format (e.g., DD/MM/YYYY)
bool isEqual(const Date& other);// Compare two dates for equality 
bool isLeapYear();              
// Return true if year is leap year 
// Additional Functions 
void setDay(int d);             
void setMonth(int m);           
void setYear(int y);            
int getDay();             
// Setter for day with validation 
// Setter for month with validation 
// Setter for year with validation 
// Getter for day 
int getMonth();           
int getYear();            
// Getter for month 
// Getter for year 
void incrementDay();            
// Add one day to the date 
void decrementDay();            
// Subtract one day from the date 
 
};