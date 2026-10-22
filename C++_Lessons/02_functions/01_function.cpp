#include <iostream>

//In this lesson, we are going to learn about declaring functions in c++
//to declare a function:
void name(){
    std::string profile_name;
    std::cout<<"What is your name? ";
    std::cin>>profile_name;
    std::cout<<"\nMy name is "<< profile_name << std::endl;
}

//passing arguments in functions
//we can pass arguments that the function can use for its evaluation
//we can define a function that adds 2 numbers
void sum_num(int number_1,int number_2){
int add_numbers = number_1+number_2;
std::cout<<number_1<< "+" << number_2 << " is "<< add_numbers;
}

//the void function does not return any value, to return a value,
//specify the data type of the value you want to return in the function
//lets say we want to define a function that calculates the area of a rectangle
double area_of_rectangle(double length,double breadth){
    double area = length*breadth;
    return area;
}

std::string hello_name(){
 std::string player_name;
 std::cout <<"What is the name of your favorite player?" << std::endl;
 std::cin>>player_name;
 return player_name;

}

int main(){
    //sum_num(2,3);
    //name();
    //double area_value = area_of_rectangle(2,3);
    //std::cout<<" The area of the rectangle is "<< area_value <<std::endl;
    std::string my_favorite_player = hello_name();
    std::cout <<"My favorite player is " << my_favorite_player << std::endl;
    return 0;
}