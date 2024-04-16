#include <stdio.h>

void draw_pyramid(int height)
 {
    int i, j, k;
    for (i = 0; i < height; i++)
	{
    // Print spaces
		for (j = 0; j < height - i - 1; j++)
		{
			printf(" ");
		}
    // Print asterisks
        for (k = 0; k < 2 * i + 1; k++)
		{
            printf("*");
		}
    printf("\n");
	}
}

int main()
{
	// You can adjust the height of the pyramid here
    int height = 5; 
    draw_pyramid(height);
    return 0;
}
