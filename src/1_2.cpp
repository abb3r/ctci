#include<iostream>
#include<map>

void sortChars(char* str)
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
bool checkPermutationOf(char* str1, char * str2)
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

extern void checkForCharPermutations(int numOfStrings, char* argv[])
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


