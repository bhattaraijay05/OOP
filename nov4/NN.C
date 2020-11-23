#include <stdio.h>
struct student
{
    char name[50];
    int usn;
    float marks;
} s;

int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter usn number: ");
    scanf("%d", &s.usn);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("usn number: %d\n", s.usn);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}