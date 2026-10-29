#include<iostream>
//This function converts an temperature in Celcius scale to Farenheit

double Celcius_to_Farenheit(double Celcius_temperature){
    
    double Farenheit_temperature = (Celcius_temperature*1.8) + 32;
    return Farenheit_temperature;
}


int main(){
    double Celcius_temperature;
    std::cout << "What is the temeperature in Celcius? ";
    std::cin>> Celcius_temperature;
    double Celcius_to_Farenheit(double Celcius_temperature); 
    std::cout<<"For a temperature of "<< Celcius_temperature<< "C" << 
                " ,The equivalent temperature in Farenheit is "<<Celcius_to_Farenheit(Celcius_temperature) <<
                "F"<< std::endl;
    return 0;
}