// 11.09 OOP Dz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Laptop.h" 
#include "CPU.h"     
#include "SSD.h"	
#include "VideoCard.h"  
#include "RAM.h"	
using namespace std;    
const int MAX_LAPTOPS = 50; 
int main()
{
    Laptop lapt1("Huawei matebook d 15", "Grey", 811.88, "intel core i7", "Kingston SSDNow A400", "RTX 4070 Ti X3", "Kingston FURY Beast Black RGB ");
    lapt1.PrintLaptop();

    for (int i = 0; i < 35; i++)
        cout << "-";
    cout << "\n";

    cout << "Enter model: ";
    char Buff_model[100];
    cin >> Buff_model;

    cout << "Enter color: ";
    char Buff_color[100];
    cin >> Buff_color;

    cout << "Enter price: ";
    double Buff_price;
    cin >> Buff_price;

    cout << "Enter CPU: ";
    char Buff_CPU[100];
    cin >> Buff_CPU;

    cout << "Enter SSD: ";
    char Buff_SSD[100];
    cin >> Buff_SSD;

    cout << "Enter video card: ";
    char Buff_Video_Card[100];
    cin >> Buff_Video_Card;

    cout << "Enter video RAM: ";
    char Buff_Ram[100];
    cin >> Buff_Ram;

    for (int i = 0; i < 35; i++)
        cout << "-";
    cout << "\n";

    Laptop lapt2(Buff_model, Buff_color, Buff_price, Buff_CPU, Buff_SSD, Buff_Video_Card, Buff_Ram);
    lapt2.PrintLaptop();
    
    for (int i = 0; i < 35; i++)
        cout << "-";
    cout << "\n";   
  
    cout << "Number of laptops: " << Laptop::GetCount() << endl;
    cout << "Copied information from lapt 1 to lapt 2:\n";  

    for (int i = 0; i < 35; i++)
        cout << "-";
    cout << "\n";

    Laptop lapt3(lapt1);  

    for (int i = 0; i < 35; i++)
        cout << "-";    
    cout << "\n";

    lapt3.PrintLaptop();    

        
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
