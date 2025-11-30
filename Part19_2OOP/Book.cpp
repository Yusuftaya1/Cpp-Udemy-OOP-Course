#include "Book.h"

// Constructor - Initialization list kullanarak
Book::Book(string _title, string _author, int _pages)
    : title(_title), author(_author), pages(_pages) {
    // Initialization list ile üyeler doğrudan initialize ediliyor
    // Bu, atama yapmaktan daha verimlidir
    cout << "Constructor çağrıldı: '" << title << "' oluşturuldu." << endl;
}

// Destructor - Nesne yok edilirken çağrılır
Book::~Book() {
    // Destructor, nesne scope'tan çıktığında veya delete edildiğinde otomatik çağrılır
    // Burada dinamik bellek temizliği yapılabilir (new ile ayrılan bellek için delete)
    // Şu anki Book sınıfında dinamik bellek yok, ama örnek olarak mesaj yazdırıyoruz
    cout << "Destructor çağrıldı: '" << title << "' yok ediliyor." << endl;
}

// Getter functions
string Book::getTitle() const {return title;}
string Book::getAuthor() const {return author;}
int Book::getPages() const {return pages;}

// Display function
void Book::display() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}

// Setter functions
void Book::setTitle(string _title) {title = _title;}
void Book::setAuthor(string _author) {author = _author;}
void Book::setPages(int _pages) {pages = _pages;}