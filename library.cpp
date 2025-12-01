#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string name;
    string author;

    void add() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Name: ";
       cin>>name;
        cout << "Enter Author Name: ";
       cin>>author;
    }

    void display() {
        cout << "  ID: " << id <<endl<< "  Name: " << name<<endl << "  Author: " << author << endl;
        cout<<"============================\n\n";
    }
};

int main() {
    Book books[50];
    int count = 0;
    int choice;

    while (true) {
        cout << "1. Add Book\n";
        cout << "2. View All Books of a library\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            books[count].add();
            count++;
            cout << "book added!\n";
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "No books available!\n";
            } else {
                cout << "\nBook List\n";
                for (int i = 0; i < count; i++) {
                    books[i].display();
                }
            }
        }
        else if (choice == 3) {
            int bid;
            cout << "enter book id to search: ";
            cin >> bid;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (books[i].id == bid) {
                    cout << "book found:\n";
                    books[i].display();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "book not found!\n";
            }
        }
        else if (choice == 4) {
            cout << "Exit Program\n";
            break;
        }
        else {
            cout << "Invalid Choice!please enter value between 1 to 4\n\n";
        }
    }

    return 0;
}
