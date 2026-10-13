#include <iostream>
#include <vector>
#include <numeric>

int main(){
    //This programe computers the average of numbers in a vector
    std::vector<int>numbers = {20,30,40,50,60};
    int numbers_accumulate = std::accumulate(numbers.begin(),numbers.end(),0.0);
    int size_of_numbers = numbers.size();
    float average_of_numbers = numbers_accumulate/size_of_numbers;
    std::cout<< average_of_numbers;
}