// g++ words.cpp -o words
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* time */
#include <string>

std::string RandomWord(int wordlength);

int main ()
{
        /* initialize random seed: */
    srand (time(NULL));
    std::string checkword;
    std::cout << "INPUT A 4 LETTER WORK" << std::endl;
	std::cin >> checkword;
    std::string theword;
    int i, num = 4;//num is how long word is
    for( i = 0; i < 100000000; i++){
        theword = RandomWord(num);
        if (checkword == theword){
             std::cout<<"****** HIT ******"<< std::endl;
         std::cout<<i<<" "<<theword<<" ";

        }
    }
    return 0;
}

 std::string RandomWord(int wordlength){
     std::string aword;

    int i, randomInt;
    int val = 0;
    char letter;

     for(i = 0; i < wordlength;i++)  {
        randomInt = rand() % 26 + 65;
        letter = (char)randomInt;
         std::string aletter (1,letter);
        aword = aword + aletter;
        //cout<<i<<" * ";
    }

return aword;
}
