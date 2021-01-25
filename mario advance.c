#include <stdio.h>
#include <cs50.h>

int getValue();
void draw(int height);

int main(void)
{
    int height = getValue();
    draw(height);
}

int getValue()
{
    
    int a;
    do
    {
        a = get_int("Height: ");
    }
    while (a < 1 || a > 8);
    
    
    return a;
}


void draw(int height)
{
    
    for (int row = 0; row < height; row++)
    {
       
        for (int spaces = row + 1; spaces < height; spaces++)
        {
            printf(" ");
        }
        
        
        for (int hashes = height + row + 1; hashes > height; hashes--)
        {
            printf("#");
        }
        printf("  ");
    
for (int hashes = height + row + 1; hashes > height; hashes--)        {
    printf("#");
}
        printf("\n");
    }
}
