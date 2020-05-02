#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

string valid_text(string prompt);

string plaintext2;

int main(int argc, string argv[])
{


    //if there is more than one number
    if (argc > 2 || argc == 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }


    string number = argv[1];

    int length = strlen(number);

    int counter = 0;

    int check = 0;
    
    //validation
    do
    {
        //validating for an alphabet
        if (isdigit(number[counter]) == 0) 
        {
            printf("Usage: ./caesar key\n");
            counter = length;
            
        }

        counter = counter + 1; 
        
        //if error occurs exit out
        if (counter > length)
        {
            return 1;
        }
        
    }
    while ((counter < length));

    counter = 0;

    char c;

    int newnum = atoi(number);

    plaintext2 = valid_text("plaintext: ");

    int ptlength = strlen(plaintext2);
    printf("ciphertext: ");

    //the original variables are used for lowercase letters
    int ci;
    
    int newci;
    
    char hello;
    
    //the 2 type variables are used for uppercase letters
    int ci2;
    
    int hello2;
    
    int newci2;
    
    do
    {
        
        //label the variables
        c = (plaintext2[counter]);
        
        //lowercase
        ci = c - 97;
        
        newci = (ci + newnum) % 26;
        
        hello = newci + 97;
        
        
        //upcase
        ci2 = c - 65;
        
        newci2 = (ci2 + newnum) % 26;
        
        hello2 = newci2 + 65;
        
        
        //check if it is alphabet
        if (isalpha(c) != 0)
        {
            //if it is lower case then the 97 number goes in play
            if (islower(c) != 0)
            {
                printf("%c", (hello));
            }
            
            //if it is upper case then the 65 number goes in play
            if (isupper(c) != 0)
            {
                printf("%c", (hello2));
            }
        }
        else 
        {
            printf("%c", c);
        }  
        
        
        counter = counter + 1;
        
    }
    
    while (counter < ptlength);
    
    printf("\n");

}

//get input from user

string valid_text(string prompt)
{

    string plaintext;

    do
    {
        plaintext = get_string("%s", prompt);
    }
    while (strlen(plaintext) < 1);


    return plaintext;
}




