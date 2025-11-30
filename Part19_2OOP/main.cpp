#include <iostream>
#include "Book.h"

// Destructor örneği için yardımcı fonksiyon
void demonstrateScope() {
    std::cout << "\n=== SCOPE ÖRNEĞİ ===\n";
    std::cout << "Scope içine giriliyor...\n";
    
    Book tempBook("Temp Book", "Temp Author", 100);
    tempBook.display();
    
    std::cout << "Scope'tan çıkılıyor...\n";
    // Burada tempBook'ın destructor'ı otomatik çağrılacak
}

int main() {
    std::cout << "=== MAIN FONKSİYONU BAŞLADI ===\n\n";
    
	// Create a Book object using the constructor
	Book myBook1("The Hobbit", "J.R.R. Tolkien", 310);
    Book myBook2("The Lord of the Rings", "J.R.R. Tolkien", 420);
    Book myBook3("Pride and Prejudice", "Jane Austen", 250);

    std::cout << "\n=== KİTAPLARI YAZDIRMA ===\n";
    myBook1.display();
    myBook2.display();
    myBook3.display();

    std::cout << "\n=== KİTAPLARI GÜNCELLEME ===\n";
    myBook1.setTitle("The Hobbit: An Unexpected Journey");
    myBook1.setPages(320);
    myBook1.display();

    myBook2.setAuthor("J.R.R. Tolkien");
    myBook2.setPages(420);
    myBook2.display();

    myBook3.setAuthor("Jane Austen");
    myBook3.setPages(250);
    myBook3.display();

    // Scope örneği - destructor'ın ne zaman çağrıldığını gösterir
    demonstrateScope();
    
    std::cout << "\n=== MAIN FONKSİYONU SONA ERİYOR ===\n";
    std::cout << "return 0'dan önce...\n";
    
    // main() fonksiyonu sona erdiğinde, tüm yerel nesnelerin
    // destructor'ları otomatik olarak çağrılacak (myBook1, myBook2, myBook3)
    // Destructor'lar TERS SIRADA çağrılır (son oluşturulan ilk yok edilir)
    
	return 0;
    // Burada destructor'lar çağrılır:
    // 1. myBook3 destructor
    // 2. myBook2 destructor  
    // 3. myBook1 destructor
}
