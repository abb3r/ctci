#include<iostream>
#include<map>

extern bool checkForUniqueChars(uint16_t stringIndex, char* argv[])
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

extern void checkStringsForUniqueChars(uint16_t numOfStrings, char* argv[])
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