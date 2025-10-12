#include<stdio.h>

/*Exercise 1.13: Write a program to print a histrogram of the lengths of words in its input. Both horizontally and vertically.*/

#define BUFFER 100

int main(void)
{
    int c, histogram[BUFFER];
    int word_length, histogram_length, max_word_count;

    word_length = histogram_length = max_word_count = 0;

    int i;
    for(i = 0; i < BUFFER; i++)
    {
        histogram[i] = 0;
    }

    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (word_length > 0)
            {
                ++histogram[word_length - 1];

                if (histogram_length < word_length)
                {
                    histogram_length = word_length;
                }

                if (max_word_count < histogram[word_length - 1])
                {
                    max_word_count = histogram[word_length - 1];
                }
                word_length = 0;

            }

        }
        else
        {
            ++word_length;
        }
    }
    histogram[histogram_length] = '$';

    putchar('\n');

    /*Now we print the HORIZONTAL HISTOGRAM.*/
    int line_index, column_index;


    printf("Horizontal Histogram\n---------------------\n");
    column_index = 0;
    while(histogram[column_index] != '$')
    {
        printf("%3d:\t", column_index + 1);
        for(line_index = 0; line_index < histogram[column_index]; line_index++)
        {
            printf("#");
        }
        printf("\n");
        ++column_index;
    }

    putchar('\n');

    /*Now we print the VERTICAL HISTOGRAM.*/

    printf("Vertical Histogram\n---------------------\n");
    for(line_index = max_word_count; line_index >= 0; line_index--)
    {
        column_index = 0;
        while(histogram[column_index] != '$')
        {
            if (line_index == 0)
            {
                printf("%3d", column_index + 1);
            }

            else if (histogram[column_index] > 0)
            {
                printf(" ##");
                --histogram[column_index];
            }
            else 
            {
                printf("   ");
            }

            column_index++;
        }
        printf("\n");
    }

    return 0;
}
