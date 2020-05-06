#include <iostream>
#include <vector>
/*
snipet for practicing c++ iostream
*/
int main()
{
    //iostream
    // std::cout << "Enter two numbers: " << std::endl;
    // int v1 = 0, v2 = 0;
    // std::cin >> v1 >> v2;
    // std::cout << "The sum of " << v1 << " and " << v2
    // << " is " << v1 + v2 << std::endl;
    // return 0;

    //flow of control
    // int sum = 0, val = 50;
    // while (val <= 100) {
    //     sum += val;
    //     ++val;
    // }
    // std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    // return 0;

    // int sum = 0;
    // for (int val = -100; val < 101; ++val)
    //     sum += val;
    // std::cout << "The sum is " << sum << std::endl;
    // return 0;

    // Reading an unknown number of inputs
    // int sum = 0, value = 0;
    // while (std::cin >> value) //This condition tests std::cin
    //     sum += value;

    // std::cout << "Sum is: " << sum << std::endl;
    // return 0;

    //if statement
    int currVal = 0, val = 0;

    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) 
                ++cnt;
            else {
                std::cout << currVal << " occurs "
                << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
        << cnt << " times " << std::endl;

    }
    return 0;



}