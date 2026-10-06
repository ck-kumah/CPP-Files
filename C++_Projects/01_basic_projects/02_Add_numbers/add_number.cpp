#include <iostream>

int main(){
    //this code takes 2 numbers from the user and adds them
    float first_number;
    std::cout<<"Enter the first number: ";
    std::cin>>first_number;
    float second_number;
    std::cout<<"\nEnter the second number: ";
    std::cin>>second_number;
    float sum = first_number+second_number;
    std::cout<< "\nThe sum of " << first_number << " and " << second_number << " is " << sum << std::endl;
    
}