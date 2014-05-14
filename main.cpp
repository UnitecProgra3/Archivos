#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream escritura("archivo.txt");
    escritura<<"holas"<<endl;
    escritura<<5<<endl;
    escritura<<118888888888888888888.5<<endl;
    escritura<<true<<endl;
    escritura<<'a'<<endl;
    escritura.close();

    ifstream lectura("archivo.txt");
    string v1;
    int v2;
    double v3;
    bool v4;
    char v5;
    lectura>>v1;
    lectura>>v2;
    lectura>>v3;
    lectura>>v4;
    lectura>>v5;
    cout<<v1<<endl;
    cout<<v2<<endl;
    cout<<v3<<endl;
    cout<<v4<<endl;
    cout<<v5<<endl;

    lectura.seekg(0);
    string str;
    while(lectura>>str)
    {
        cout<<str<<endl;
    }

    return 0;
}
