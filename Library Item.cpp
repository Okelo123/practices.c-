#include <iostream>
#include <string>

class LibraryItem {
protected:
    std::string title;
    int ID;

public:
    LibraryItem(const std::string& title, int ID) : title(title), ID(ID) {}

    virtual ~LibraryItem() {}

    std::string getTitle() const {
        return title;
    }

    int getID() const {
        return ID;
    }
};

class Book : public LibraryItem {
private:
    std::string author;
    int year;

public:
    Book(const std::string& title, int ID, const std::string& author, int year)
        : LibraryItem(title, ID), author(author), year(year) {}

    std::string getAuthor() const {
        return author;
    }

    int getYear() const {
        return year;
    }
};

class Journal : public LibraryItem {
private:
    int volume;

public:
    Journal(const std::string& title, int ID, int volume)
        : LibraryItem(title, ID), volume(volume) {}

    int getVolume() const {
        return volume;
    }
};

int main() {
    Book book("The Great Gatsby", 1, "F. Scott Fitzgerald", 1925);
    Journal journal("Science Journal", 2, 10);

    std::cout << "Book Title: " << book.getTitle() << std::endl;
    std::cout << "Book Author: " << static_cast<Book&>(book).getAuthor() << std::endl;
    std::cout << "Book Year: " << static_cast<Book&>(book).getYear() << std::endl;

    std::cout << "Journal Title: " << journal.getTitle() << std::endl;
    std::cout << "Journal Volume: " << static_cast<Journal&>(journal).getVolume() << std::endl;

    return 0;
}
