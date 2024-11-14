#include <iostream>
#include <vector>
#include <yaml-cpp/yaml.h>
using namespace std;

int main() {
    YAML::Node config = YAML::LoadFile("config.yaml");
    

    std::string name = config["name"].as<std::string>();
    int age = config["age"].as<int>();
    std::vector<std::string> items = config["hobbies"].as<std::vector<std::string>>();

    std::cout << "Name: " << name << '\n';

    std::cout << "age: " << age << "\n\n";


    std::cout << "Hobbies:" << '\n';
 

    for (const auto& item : items) {
        std::cout << "- " << item << '\n'; 
    } 
}