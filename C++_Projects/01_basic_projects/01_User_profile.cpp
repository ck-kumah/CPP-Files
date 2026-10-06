#include <iostream>

int main(){
    //this code enables user to enter provided details about themselves
    std::string name;
    std::cout<<"\nPlease enter your name: ";
    std::cin>> name;
    int age;
    std::cout<<"\nPlease enter your age: ";
    std::cin>>age;
    std::string country;
    std::cout<<"\nEnter the country you are from: ";
    std::cin>>country;
    std::cout<< "\n======User Profile=====";
    std::cout<<"\nName : " << name << std::endl;
    std::cout<< "Age : " << age << std:: endl;
    std::cout<<"Country : " << country << std::endl;
    return 0;
}