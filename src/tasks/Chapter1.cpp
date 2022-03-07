#include "Chapter1.hpp"
#include<iostream>
#include<map>
#include<sstream>

namespace ctci
{
    Chapter1& Chapter1::getInstance()
    {
        static Chapter1 chap1;
        return chap1;
    }

    //Task1
    bool Chapter1::checkForUniqueChars(uint16_t stringIndex, char* argv[])
    {
        std::map<char,uint16_t> charCount;

        uint16_t index = 0;
        while (argv[stringIndex][index]!='\0')
        {
            if( charCount[argv[stringIndex][index]] ==1)
                return false;
            else
                charCount[argv[stringIndex][index]]++;
            index++;
        }
        return true;
    };

    bool Chapter1::checkForUniqueChars(std::string s)
    {
        std::map<char,uint16_t> charCount;

        uint16_t index = 0;
        while (s[index]!='\0')
        {
            if( charCount[s[index]] ==1)
                return false;
            else
                charCount[s[index]]++;
            index++;
        }
        return true;
    };

    void Chapter1::checkStringsForUniqueChars(uint16_t numOfStrings, char* argv[])
    {
        uint16_t stringIndex = 1;
        while(stringIndex <= numOfStrings)
        {
            if(checkForUniqueChars(stringIndex,argv))
                std::cout<<"String:" << stringIndex << " all chars are unique"<<std::endl;
            else
                std::cout<<"String:" << stringIndex << " not all chars are unique"<<std::endl;
            stringIndex++;
        }
    }

    // Task 2
    void Chapter1::sortChars(char* str)
    {
        uint16_t index =0;
        while(str[index]!='\0')
        {
            uint16_t innerIndex = 0;
            while(str[innerIndex+1]!='\0')
            {
                if(str[innerIndex] > str[innerIndex+1])
                {
                    char temp = str[innerIndex];
                    str[innerIndex] = str[innerIndex+1];
                    str[innerIndex+1] = temp;
                }
                innerIndex++;
            }
            index++;
        }
        //std::cout<<"sorted string: "<<str<<std::endl;
    }


    //if all chars of str1 are in
    bool Chapter1::checkPermutationOf(char* str1, char * str2)
    {
        //std::cout<<"Str1:"<<str1<<std::endl;
        //std::cout<<"Str2:"<<str2<<std::endl;
        uint16_t indexStr1=0;
        uint16_t indexStr2=0;
        if(str1[indexStr1]== '\0' or str2[indexStr2]=='\0')
            return false;

        sortChars(str1);
        sortChars(str2);
        

        while (str2[indexStr2]!='\0')
        {
            if(str1[indexStr1] == str2[indexStr2])
            {
                indexStr1++;
                if(str1[indexStr1]=='\0')
                    return true;
            }
            indexStr2++;

        }
        return false;
    }

    void Chapter1::checkForCharPermutations(int numOfStrings, char* argv[])
    {
        if(numOfStrings == 0 or numOfStrings == 1)
            std::cout<<"Not enough arguments added with numOfStrings="<<numOfStrings<<"."<<std::endl;
        else
        {
            uint16_t index=1;
            while(index < numOfStrings)
            {
                if(checkPermutationOf(argv[index], argv[index+1]))
                    std::cout<<"String:" << index << " is a permutation of String:"<<index+2<<std::endl;
                else
                    std::cout<<"String:" << index << " is not a permutation of String:"<<index+2<<std::endl;
                index++;
            }
        }
    }

    //Task3    
    std::string Chapter1::replaceCharInString(std::string f_string , char replace, const char * replaceWith)
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

} //namespace ctci