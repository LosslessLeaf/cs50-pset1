#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int height;
    do
    {
        height = get_int("Height: ");

        if (height >= 1 && height <= 8)
        {
            // height = get_int("Height: ");
            int counter = height;

            for (int i = 0; i < height; i++)
            {
                for (int j = 1; j < counter; j++)
                {
                    printf(" ");
                }
                for (int k = 0; k < i + 1; k++)
                {
                    printf("#");
                }

                printf("  ");

                for (int n = 0; n < i + 1; n++)
                {
                    printf("#");
                }
                counter -= 1;
                printf("\n");
            }
        }
    }
    while (height < 1 || height > 8);
}