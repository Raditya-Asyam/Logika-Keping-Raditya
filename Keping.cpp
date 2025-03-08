#include <iostream>

int main() {
    int a, jmlh, hsl, hsl2;
    char pilihan1, pilihan2, op;

    do {
        std::cout << "Jumlah keping: ";
        std::cin >> a;
        if (!(a)) {
            std::cout << "Error: input tidak valid! tolong masukkan bilangan bulat." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            break;
        }
        else {
            hsl = a * (1 + a) / 2;
            hsl2 = hsl * a;
            std::cout << hsl2 << " gram" << std::endl;
        }

        do {
            std::cout << "Pilih jumlah gram keping (j) atau gram urutan keping (u): ";
            std::cin >> op;

            std::cout << "Masukkan bilangan bulat: ";
            std::cin >> jmlh;

            switch (op) {

            case 'j':
            case 'J': 
            { 
                if (!(jmlh)) {  
                    std::cout << "Error: input tidak valid! tolong masukkan bilangan bulat." << std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(10000, '\n'); 
                }
                else {
                    if (jmlh < a) {
                        std::cout << "Jumlah gram keping ke " << jmlh << " adalah " << hsl2 - jmlh << " gram"
                            << std::endl;
                    }
                    else if (jmlh <= 0) {
                        std::cout << "UNDEFINED" << std::endl;
                    }
                    else if (jmlh > a) {
                        std::cout << "UNDEFINED" << std::endl;
                    }
                    else {
                        std::cout << "Jumlah gram keping ke " << jmlh << " adalah " << hsl2 << " gram"
                            << std::endl;
                    }
                }
                break;
            }

            case 'u':
            case 'U':
            {
                if (!(jmlh)) {
                    std::cout << "Error: input tidak valid! tolong masukkan bilangan bulat." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                }
                else {
                    int urt = hsl2 - jmlh;
                    if (urt == 0) {
                        std::cout << "urutan untuk " << jmlh << " gram adalah keping " << a
                            << std::endl;
                    }
                    else if (urt < 0) {
                        std::cout << "UNDEFINED" << std::endl;
                    }
                    else if (urt > a) {
                        std::cout << "UNDEFINED" << std::endl;
                    }
                    else {
                        std::cout << "urutan untuk " << jmlh << " gram adalah keping " << urt
                            << std::endl;
                    }
                }
                break;
            }
            default:
                std::cout << "Error: operasi anda salah" << std::endl;
                break;

            }
            std::cout << "Apakah anda mau mengulang jumlah dan urutan keping? (ketik y untuk ya): " << std::endl;
            std::cin >> pilihan1;

        } while (pilihan1 == 'y' || pilihan1 == 'Y');
        
        std::cout << "Apakah anda mau mengulang program? (ketik y untuk ya): ";
        std::cin >> pilihan2;

    } while (pilihan2 == 'y' || pilihan2 == 'Y');
    std::cout << "Keluar dari program..." << std::endl;
    return 0;
}

