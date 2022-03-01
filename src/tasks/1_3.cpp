#include<stdint.h>
#include<string>
#include<iostream>
#include<sstream>
std::string replaceCharInString(std::string f_string , char replace, const char * replaceWith)
{
    std::stringstream ss;
    for(int index = 0; index < f_string.length(); index ++)
    {   
        if( f_string[index] == ' ')
        {
            ss << "%20";
        }
        else
        {
            ss <<f_string[index];    
        }
    }
    return ss.str();
}

