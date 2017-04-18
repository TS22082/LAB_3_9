
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
    int numYear;
    
    int *dptr = nullptr;
    string *mptr = nullptr;
    int *yptr = nullptr;
    
    dptr = &numDay;
    mptr = &month;
    yptr = &numYear;
    
    transform(aDate.begin(), aDate.end(), aDate.begin(), ::toupper);
    
    for (int i = 0; i < 2; i++){
    
        day += aDate[i];
    }
    
    numDay = stoi(day);
    
    for (int j = 3; j< 6; j++){
        
        month += aDate[j];
        
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




