﻿// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
using json = nlohmann::json;

int main()
{
   
    json j;
    j["name"] = "Test";
    j["nothing"] = nullptr;

    j["answer"]["everything"] = 10;

    j["companies"] = { "Info", "TM" };

    j["user"] = { {"name", "solo"}, {"active", true} };

    std::cout << j << std::endl;

    std::cout << std::setw(4) << j << std::endl;

    j["answer"]["everything"] = 2;

    std::cout << j.at("name") << std::endl;
    std::cout << j["answer"]["everything"] << std::endl;

    auto user = j["user"]["name"];
    std::cout << "User: " << user << std::endl;

    for (auto& element : j) {
        std::cout << element << '\n';
    }

    j["user"] = { {"name", "polo"}, {"active", false} };

    std::ofstream o("polo.json");
    o << std::setw(4) << j << std::endl;

    std::ifstream i("polo.json");
    json polo;
    i >> polo;
    std::cout << std::setw(4) << polo["user"] << std::endl;

    return 0;
}

