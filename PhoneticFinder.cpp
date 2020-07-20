//
// Created by tzach on 24/03/2020.
//
#include "PhoneticFinder.hpp"
using namespace std;
namespace phonetic
{
    int checker(char c1, char c2) 
    {
        c1 = tolower(c1); // המרה לתו 
        c2 = tolower(c2);
        if(c1 == c2)
        {
            return 1;
        }
        else
        {
            if( (c1 == 'v' || c1 == 'w') && (c2 == 'v' || c2 == 'w'))
            {
                return 1;
            }
            else if ((c1 == 'b' || c1 == 'f' || c1 == 'p') && (c2 == 'b' || c2 == 'f' || c2== 'p'))
            {
                return 1;
            }
            else if ((c1 == 'g' || c1 == 'j') && (c2 == 'g' || c2 == 'j'))
            {
                return 1;
            }
            else if ((c1 == 'c' || c1 == 'k' || c1 == 'q') && (c2 == 'c' || c2 == 'k' || c2== 'q'))
            {
                return 1;
            }
            else if ((c1 == 's' || c1 == 'z') && (c2 == 's' || c2 == 'z'))
            {
                return 1;
            }
            else if ((c1 == 'd' || c1 == 't') && (c2 == 'd' || c2 == 't'))
            {
                return 1;
            }
            else if ((c1 == 'o' || c1 == 'u') && (c2 == 'o' || c2 == 'u'))
            {
                return 1;
            }
            else if ((c1 == 'i' || c1 == 'y') && (c2 == 'i' || c2 == 'y'))
            {
                return 1;
            }
            return 0; // לא שווים גם ע"פ התנאים שקיבלנו
        }
    }
    int checker(string w1, string w2)
    {
        if (w1.size() != w2.size()) // אם גודלם שונה בהכרח לא שווים
            return 0;
        int i = 0;
        while(w1[i])
        {
            if (!checker(w1[i],w2[i]))
                return 0;
            i++;
        }
        return 1;
    }
    string find(string text, string word) // האם המילה וורד נמצאת בטקסט
    {
        string temp = "";
        int i = 0;
        while (text[i])
        {
            while (text[i] && text[i] != ' ')
            {
                temp += text[i]; // save word to print
                i++; // proceed to check next char
            }
            if(checker(temp,word))
                return temp;
            temp = "";
            i++;
        }
        throw runtime_error("The word " + word + " is not in the text.");
        return "fail";
    }
}
