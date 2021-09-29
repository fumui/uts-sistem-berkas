#include <iostream>
#include <vector>
void printVecInt(std::vector<int>& data) {
    std::cout << "[";
    for (size_t i = 0; i < data.size(); i++)
    {
        std::cout << data[i];
        if (i < data.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]";
}

std::vector<int> insertData() {
    size_t count;
    std::cout << "Jumlah data: ";
    std::cin >> count;
    std::vector<int> data = {};
    data.resize(count);
    for (size_t i = 0; i < count; i++)
    {
        int in;
        std::cout << "Masukkan data index ke-"<<i<<": ";
        std::cin >> in;
        data[i] = in;
    }
    return data;
}

void searchData(std::vector<int>& data) {
    int key;
    std::cout << "Data yang dicari: ";
    std::cin >> key;
    for (size_t i = 0; i < data.size(); i++)
    {
        if (data[i] == key) {
            std::cout << "Data ditemukan pada index ke-"<<i;
            return;
        }
    }
    std::cout << "Data tidak ditemukan";
}
int main()
{
    bool running = true;
    std::vector<int> data = {213,312,412,545,644,766,878,899,900};
    while (running) {
        std::cout << "Isi data: ";
        printVecInt(data);
        std::cout << "\n";
        std::cout << "Operasi yang akan dilakukan:\n";
        std::cout << "1. Rekam data\n";
        std::cout << "2. Cari data\n";
        std::cout << "0. Keluar\n";
        int op;
        std::cin >> op;
        switch (op)
        {
        case 1:
            data = insertData();
            break;
        case 2:
            searchData(data);
            break;
        default:
            running = false;
            break;
        }
        std::cout << "\n";
    }
}