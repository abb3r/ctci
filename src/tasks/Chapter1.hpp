#pragma once 
#include <stdint.h>
#include <string>

namespace ctci
{
    class Chapter1
    {
        public:
            virtual ~Chapter1() = default;
            static Chapter1& getInstance();
            bool checkForUniqueChars(std::string s);
            bool checkPermutationOf(char* str1, char * str2);
            std::string replaceCharInString(std::string f_string,
                                            char replace, 
                                            const char * replaceWith);
        private:
            Chapter1() = default;
            //task 1
            bool checkForUniqueChars(uint16_t stringIndex, char* argv[]);
            void checkStringsForUniqueChars(uint16_t numOfStrings, char* argv[]);
            //task 2
            void sortChars(char* str);
            void checkForCharPermutations(int numOfStrings, char* argv[]);
            //task 3
            //task 4

    };
}