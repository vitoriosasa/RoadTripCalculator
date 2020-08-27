//
//  main.cpp
//  RoadTripCalculator
//
//  Created by Jia Jie Mai (Jay) on 8/26/20.
//  Copyright © 2020 JAY MAI. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double distance,price,mpg;
    double gallon,cost;
    cout<<"please enter the distance you have traveled:";std::cin >> distance;
    cout<<"Please enter price of gas:";  std::cin >> price;
    cout<<"Please enter Mile per gallon:"; std::cin >> mpg;
    gallon = distance / mpg;
    cost = price * gallon ;
    printf("The total cost of your trip is %f .\n", cost);
    return 0;
    
}

