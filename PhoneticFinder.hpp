//
// Created by tzach on 24/03/2020.
//
#pragma once
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
using namespace std;
namespace phonetic{
    string find(string text, string word);
    int checker(string w1, string w2);
    int checker(char c1, char c2);
}