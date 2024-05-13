#include <stdio.h>
#include <stdlib.h>

struct Student {
    char* firstName;
    char* lastName;
    int  id;
    double gpa;
};


int main()
{
    struct Student student1 = {"Jan","Kowalski", 20, 4.5};
    struct Student student2 = {"Anna","Nowak", 21, 4.0};
    struct Student student3 = {"Piotr","Wisniewski", 22, 3.5};

    struct Student studenci[3];
    studenci[0] = student1;
    studenci[1] = student2;
    studenci[2] = student3;
    return 0;
}
