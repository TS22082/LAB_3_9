
//
//  main.cpp
//  inClass
//
//  Created by Thomas Smith on 3/1/17.
//  Copyright © 2017 ts22082. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    
    string aDate = "29-jun-2015";
    
    string day;
    string month;
    string year;
    
    int numDay;
    int numMon;
    int numYear;
    
    int *dptr = nullptr;
    int *mptr = nullptr;
    int *yptr = nullptr;
    
    dptr = &numDay;
    mptr = &numMon;
    yptr = &numYear;
    
    transform(aDate.begin(), aDate.end(), aDate.begin(), ::toupper);
    
    for (int i = 0; i < 2; i++){
    
        day += aDate[i];
    }
    
    numDay = stoi(day);
    
    for (int j = 3; j< 6; j++){
        
        month += aDate[j];
        
    }
    
    if (month == "JAN"){
        numMon = 1;
    } else if (month == "FEB"){
        numMon = 2;
    } else if (month == "MAR"){
        numMon = 3;
    } else if (month == "APR"){
        numMon = 4;
    } else if (month == "MAY"){
        numMon = 5;
    }else if (month == "JUN"){
        numMon = 6;
    } else if (month == "JUL"){
        numMon = 7;
    } else if (month == "AUG"){
        numMon = 8;
    }else if (month == "SEP"){
        numMon = 9;
    } else if (month == "OCT"){
        numMon = 10;
    } else if (month == "NOV"){
        numMon = 11;
    } else if (month == "DEC"){
        numMon = 12;
    } else {
    
        cout << "error inproper input" << endl;
    }

    for (int k = 7; k < 11; k++){
    
        year += aDate[k];
    }
    
    numYear = stoi(year);
    
    cout << day << endl;
    cout << month << endl;
    cout << year << endl << endl;
    
    cout << *dptr << endl;
    cout << *mptr << endl;
    cout << *yptr << endl;
    
}




