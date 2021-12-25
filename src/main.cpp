#include<iostream>
#include<map>

void checkStringsForUniqueChars(uint16_t argc, char* argv[]);
void checkForCharPermutations(int numOfStrings, char* argv[]);

void printCmdArgs(int argc, char* argv[])
{
    for (int argIndex = 1; argIndex < argc; argIndex ++ )
    {
        std::cout<<"Arg["<<argIndex <<"] = "<<argv[argIndex]<<std::endl;
    }
};

int main(int argc, char* argv[])
{
    printCmdArgs(argc,argv);
    std::cout<<"====== Exercise 1.1 ======"<<std::endl;
    checkStringsForUniqueChars(argc-1,argv);
    std::cout<<"====== Exercise 1.2 ======"<<std::endl;
    checkForCharPermutations(argc-1, argv);
    return 1;
}