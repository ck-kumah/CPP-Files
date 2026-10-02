#include <iostream>
int main(){
    
    //first declare data type you want to use
    //then assign variable to the value
    //suppose we want to store 2 in the variable x,we declare the data type of 2 and the varable x
    //then assign 2 to the declared data type and variable
    //use int to store whole numbers
    int  x = 2;
    //To print the  we use the standard library
    std::cout<<x<<std::endl;

    //we use double or float for decimals
    //float has less decimal precision than double
    float a = 3.44;
    double b = 54.345678;
    std::cout<< "the value " << a << " was stored in a float data type" << std::endl;
    std::cout<<"the value " << b << " was stored in a double data type"<< std::endl;
    
    //Use char data type to store a single character like A,B,etc
    char level = 'A';
    std::cout<<level<<std::endl;

    //Use bool data type to store True or False values
    bool on = true;
    bool off = false;
    std::cout<<"when a switch is on,it is equivalent to being " << on << std::endl;
    
    //Use string data type to store words
    std::string name = "Courage";
    std::cout<<"My name is " << name << std::endl;

    // Use const for values that won't change
    //for example to calculate the weight of a body, weight = mg, where
    //g = gravity with a constant value of g = 9.8m/s^2
    const float gravity = 9.8;
    float mass = 40;
    float weight = mass*gravity;
    std::cout<<"\nThe weight of a 40kg body on earth is " << weight << "N" <<std::endl; 
    return 0;
}