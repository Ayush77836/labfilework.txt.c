#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

// Function to print book details
void display(struct Book b) {
    printf("\nBook ID: %d", b.book_id);
    printf("\nTitle: %s", b.title);
    printf("\nAuthor: %s", b.author);
    printf("\nPrice: %.2f", b.price);
}

int main() {
    struct Book book;

    printf("Enter Book ID: ");
    scanf("%d", &book.book_id);

    printf("Enter Title: ");
    scanf("%s", book.title);

    printf("Enter Author Name: ");
    scanf("%s", book.author);

    printf("Enter Price: ");
    scanf("%f", &book.price);

    display(book);

    return 0;
}
