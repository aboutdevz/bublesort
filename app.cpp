#include <iostream>
#include <vector>
#define ASC 1
#define DESC 0


void sortnumber(std::vector<int> &number,bool sortBy)
{
    if (sortBy)
    {
        for (int i = 0;i < number.size();i++)
        {
            for (int j = i+1; j < number.size();j++)
            {
                if (number[i] > number[j])
                {
                    int tmp = number[j];
                    number[j] = number[i];
                    number[i] = tmp;
                }
            }
        }
    }
    else
    {

        for (int i = 0;i <= number.size();i++)
        {
            for (int j = i; j < number.size();j++)
            {
                if (number[i] < number[j])
                {
                    int tmp = number[i];
                    number[i] = number[j];
                    number[j] = tmp;
                }

            }
        }
    }
}

std::vector<int> display1()
{
    std::vector<int> numbertosort;

    std::cout << "Program Mengurutkan Data" << std::endl;
    std::cout << "Dengan Menggunakkan Buble Sort" << std::endl;

    int a = 1;
    while (a<=10)
    {
        int bilinput;
        std::cout << "Masukkan Bilangan Ke " << a << std::endl;
        std:: cout << ">> ";
        std::cin >> bilinput;
        numbertosort.push_back(bilinput);
        a++;
    }
    return numbertosort;
}

bool display2()
{
    int pilihan;
    std::cout << "=========================" << std::endl;
    std::cout << "Pilihan Metode Pengurutan" << std::endl;
    std::cout << "1. Sorting Ascending" << std::endl;
    std::cout << "2. Sorting Descending" << std::endl;
    std::cout << "\n\n";
    std::cout << "* pilih angka" << std::endl;
    std::cout << "Metode Yang Dipilih :";
    std::cin >> pilihan;
    std::cout << std::endl;
    std::cout << "=========================" << std::endl;

    if (pilihan == 1)
    {
        return true;
    }
    else if (pilihan == 2)
    {
        return false;
    }
    else
    {
        std::cout << "tolong masukkan angka yang ada dilayar";
        exit(EXIT_FAILURE);
    }

}
int main()
{
    bool pilihan,state = true;
    std::vector<int> numbertosort;
    std::vector<int> result;
    while (state)
    {
        numbertosort = display1();
        pilihan = display2();

        std::cout << "Data Sebelum Diurutkan : "<< std::endl;
        for (int i : numbertosort)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        std::cout << "Data Sesudah Diurutkan : " << std::endl;
        sortnumber(numbertosort,pilihan);
        for (int i : numbertosort)
        {
            std::cout << i << " ";
        }
        std::cout << "\n\n";
        std::cout << "Kembali Ke Menu Utama (Y/N)? ";
        char endprogram;
        std::cin >> endprogram;

        if (endprogram == 'Y' || endprogram == 'y')
        {
            state = true;
        }
        else
        {
            state = false;
        }
    }
    
    
    



    
    return 0;
}