#include <stdio.h>

int main()
{

    printf("+----------------+--------+--------+\n");
    printf("| Name           | Score1 | Score2 |\n");
    printf("+----------------+--------+--------+\n");
    printf("| %-14s |","Alice");
    printf("%7d |",85);
    printf("%7d |\n",90);
    printf("| %-14s |","Bob");
    printf("%7d |",78);
    printf("%7d |\n",82);
    printf("| %-14s |","Charlie");
    printf("%7d |",92);
    printf("%7d |\n",88);
    printf("+----------------+--------+--------+\n");
}