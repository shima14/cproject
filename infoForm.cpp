#include<iostream>
#include <string> 

struct User
{
    std::string name;
    std::string family;
    std::string email;
    int age;    
};

User getUserInfo(){

    User newUser;
    std::cout << "Enter your name: ";
    getline(std::cin,newUser.name);
    std::cout << "Enter your family name: ";
    getline(std::cin,newUser.family);
    std::cout << "Enter your email: ";
    getline(std::cin,newUser.email);
    std::cout << "Enter your age: ";
    std::cin >> newUser.age;
    return newUser;
}

void displayUserInfo(User user){

    std::cout << "Name: " << user.name << '\t';
    std::cout << "Family: " << user.family << '\t';
    std::cout << "Email: " << user.email << '\t';
    std::cout << "Age: " << user.age << '\t';
}


int main(){

User newUser = getUserInfo();
displayUserInfo(newUser);



}