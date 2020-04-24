#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

string valid_text(string prompt);
int count_letters();
int count_words();
int count_sentences();

float sentences;
float words;
float letters;


string text2;

int main(void)
{

    text2 = valid_text("Text: ");

    //call the functions
    count_letters();

    count_words();

    count_sentences();
    
    //save these as floats
    float l = (letters / words) * 100;
    float s = (sentences / words) * 100;
    
    // printf("grade: %f", l);
  
    
    float index = (0.0588 * l - 0.296 * s - 15.8);
    
    int index2 = round(index);
    
    if (index2 < 1)
    {
        printf("Before Grade 1\n");
    }
    
    if (index2 > 16)
    {
        printf("Grade 16+\n");    
    }
    
    if (index2 > 1 && index2 < 16)
    {
        printf("Grade %i\n", (index2));
    }
    
    
}

//count the letters
int count_letters() 
{
    

    int length = strlen(text2);
    //printf("length: %i\n", length);

    letters = 0.0;

    //run the loop to count the letters
    for (int counter = 0; (counter < length); counter++)
    {
        if (isalpha(text2[counter]) != 0)
        {
            letters = letters + 1;
        }
    }

    //printf("letters: %f\n", letters);

    return letters;

}

int count_words()
{

    int length = strlen(text2);

    words = 1.0;

    //run the loop to count the words
    for (int counter = 0; (counter < length); counter++)
    {
        if (isspace(text2[counter]) != 0)
        {
            words = words + 1;
        }
    }

    // printf("words: %f\n", words);

    return words;
}

int count_sentences()
{

    int length = strlen(text2);

    sentences = 0.0;

    //run the loop to count the sentences
    for (int counter = 0; (counter < length); counter++)
    {
        char c = text2[counter];

        if ((c == '.') || (c == '!') || (c == '?'))
        {
            sentences = sentences + 1;
        }

    }

    // printf("sentences: %f\n", sentences);
 
    return sentences;
}

//get input from user
string valid_text(string prompt)
{

    string text;

    do
    {
        text = get_string("%s", prompt);
    }
    while (strlen(text) < 3);


    return text;
}

