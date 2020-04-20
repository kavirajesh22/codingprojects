#include <cs50.h>
#include <stdio.h>

int valid_height(string prompt);

int main(void)
{
    int i = valid_height("Height: ");
    int copy = i; 

    for (int n=0; n<i; n++)
    {
        for (int l=copy; l>1; l--)
        {
            printf(" ");
        }
        
        for (int k=-1; k<n; k++)
        {
            printf("#");
        }
        copy=copy-1;
        
        printf("\n");
    }
}

int valid_height(string prompt){
    int height;
    do{
        height = get_int("%s", prompt);
    }
    while (height<1 || height>9);
    return height;
}
