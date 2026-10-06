#include <iostream>
int main(){
    //To allow user to input some data, we use the Cin function
    std::string name;
    std::cout<<"Enter your first name: ";
    std::cin>> name;
    std::cout<<"Hello "<< name << std::endl;
    return 0;
}