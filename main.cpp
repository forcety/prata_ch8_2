#include <QCoreApplication>
#include <iostream>
#include <cstring>

struct CandyBar
{
    char * name;
    double weight;
    int calories;
};

void display(const CandyBar& cb)
{
    std::cout << "name = " << cb.name << '\n';
    std::cout << "weight = " << cb.weight << '\n';
    std::cout << "calories = " << cb.calories << '\n';
}

void setCandyBar(CandyBar& cb,  char * nm = "Millennium Munch", double wg = 2.85, int cl = 350)
{
    cb.name = new char[strlen(nm) + 1];
    strcpy(cb.name, nm);
    cb.weight = wg;\
    cb.calories = cl;
}

int main(int argc, char *argv[])
{
    std::cout << "Start program.\n";

    QCoreApplication a(argc, argv);

    CandyBar cb = {"Candy1", 5.0, 10};
    display(cb);

    CandyBar cb2;
    setCandyBar(cb2, "Candy2", 6.0, 11);
    display(cb2);

    CandyBar cb3;
    setCandyBar(cb3);
    display(cb3);

    std::cout << "Finish program.\n";
    return a.exec();
}
