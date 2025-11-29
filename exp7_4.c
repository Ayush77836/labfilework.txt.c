#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    printf("Enter your name: ");
    gets(addr.name);

    printf("Present Address Details:\n");

    printf("Home Address: ");
    gets(addr.home_address);
    printf("%s\n", addr.home_address);

    printf("City: ");
    gets(addr.city);
    printf("%s\n", addr.city);

    printf("State: ");
    gets(addr.state);
    printf("%s\n", addr.state);

    printf("ZIP: ");
    gets(addr.zip);
    printf("%s\n", addr.zip);

    return 0;
}
