#include <stdio.h>
#include <string.h>

typedef struct 
{
    string name;
    string number;   /* data */
};
person;

int main(void)
{
    person people[2];

    people[0].name = "Ben";
    people[0].number = "26079864";

    people[1].name = "Mark";
    people[1].number = "1111111";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Sikaundi") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
        
    }
    printf("Not found\n");

}