#include <iostream>
#include <string>


int ownerLogin();

int ownerLogin(){
    std::string inputPass;
    std::string pass = "admin";
    std::cout << "Passwoord: ";
    std::cin >> inputPass;

    if(inputPass == pass){
        std::cout << ("toegang"); 
        return 1;           
    }
    else{
        std::cout << ("wrong");
        return 0;
    }
    
}

