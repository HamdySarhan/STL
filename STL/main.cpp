#include <cassert>
#include <iostream>

#include "parse_stl.h"
using namespace std;

int main(int argc, char* argv[]) {
    
    std::string stl_file_name = "./Nozzle.stl";

    if (argc == 2) {
        stl_file_name = argv[1];
    }
    else if (argc > 2) {
        std::cout << "ERROR: Too many command line arguments" << std::endl;
    }

    auto info = stl::parse_stl(stl_file_name);
    

    std::vector<stl::triangle> triangles = info.triangles;
    std::cout << "STL HEADER = " << info.name << std::endl;
    std::cout << "# triangles = " << triangles.size() << std::endl;
    for (auto t : info.triangles) {
        std::cout << t << std::endl;
    }
    char richtung;
    float wert;

    do
    {
        cout << "Bitte die Richtung auswählen" << endl;
        cin >> richtung;


    } while (richtung == 'x' || richtung == 'y' || richtung == 'z' || richtung == 'X' || richtung == 'Y' || richtung == 'Z');

    cout << "Bitte Wert eingeben" << endl;
    cin >> wert;
    if (richtung == 'x' || richtung == 'X')
    {
        stl::move_STL(wert, richtung);

    }
    else if (richtung == 'y' || richtung == 'Y')
    {
        stl::move_STL(wert, richtung);


    }
    else
    {

        stl::move_STL(wert, richtung);



    }
}