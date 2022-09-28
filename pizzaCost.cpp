// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Sep.26, 2022
// This program calculates the cost of a pizza order.

#include <iomanip>
#include <iostream>

int main() {
    // Declaring constants and initializing variables.
    const float HST = 0.13;
    const int LABOUR = 2;
    const float RENTAL = 2.25;
    const float INGRED = 1.50;
    float pizzaCount;
    float diameter;
    // User input
    std::cout << "Enter the number of pizzas you would like to order: "
     << std::endl;
    std::cin >> pizzaCount;
    std::cout << "Enter the diameter of the pizza in inches: " << std::endl;
    std::cin >> diameter;
    // Calculating subtotal and total and assigning them variables.
    float subtotal = LABOUR * pizzaCount + RENTAL * pizzaCount
     + INGRED * diameter;
    float total = subtotal * (HST + 1);
    // Outputs the cost (rounded to two decimal places) to the user.
    std::cout << "The total cost of your order is ";
    std::cout << std::fixed << std::setprecision(2)
     << std::setfill('0') << total << std::endl;
}
