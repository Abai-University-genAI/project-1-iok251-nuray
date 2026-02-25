#pragma once
#include <string>

struct Task {
    int type;
    std::string question;
    int correct;
};

Task generate_task(int type);