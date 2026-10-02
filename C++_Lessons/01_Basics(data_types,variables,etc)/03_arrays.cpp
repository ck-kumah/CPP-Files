#include <iostream>
#include <vector>
int main(){
    //arrays store a collection of elements of same data types
    // to use an array,define the array name and the number of elements
    //suppose I want to store the scores of students in a test, I could use an array
    int score_of_students[5] = {20,30,40,50,60};
    std::cout<< "the first score is " << score_of_students[0] << std::endl;

    //we also have vectors,vectors are like arrays  but there is an unspecifcation in number of elements
    //Also,vectors allows for more operations than usual arrays
    //To define an array
    std::vector<int>ages = {10,12,14,16,18};
    //use .at(index) to access an element in the vector
    std::cout<<ages.at(0) << std::endl;
    //use push_back to add element to vector
    ages.push_back(30);
    //use back to access last element
    std::cout<< ages.back()<<std::endl;
    //use size to get number of elements
    std::cout<<ages.size()<<std::endl;
    // use pop_back to remove last element 
    ages.pop_back();
    std::cout<<"After removing the last element,the number of elements is "<< ages.size() << std::endl;
    return 0;
} 