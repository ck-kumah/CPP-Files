#include <iostream>

//namespaces allows us to create one variable but with different values
//it also helps to prevent name collisions.
//In the code below,we are using different namespaces to store the same name variable but because 
//of namespaces, it prevents name collision

namespace first_name {
    std::string name = "Courage";
}

namespace last_name {
    std::string name = "Kumah";
}


int main(){
   using namespace last_name;

    std::cout<< name;
    return 0;

}