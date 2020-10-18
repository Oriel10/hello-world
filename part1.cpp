#include "iostream"
#include <string>
using std::string;
const string printHelloWorld();

int main(){
    std::cout<<printHelloWorld()<<std::endl;
    std::cout<<"Failure"<<std::endl;
    
    return 0;
}

const string printHelloWorld(){
    return "hello world!!!";
}
