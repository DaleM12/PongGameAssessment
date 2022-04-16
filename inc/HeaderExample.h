#pragma once

//Headers are kind of used as a way to reference other scripts, variables from one spot. 

#define WHITE "\u001b[37m"
#define BLACK "\u001b[30m"
#define RED   "\u001b[31m"
#define GREEN "\u001b[32m"

int ExampleInt = 5;

extern int externexampleint; // references externexampleint in Main.cpp

void Example();
