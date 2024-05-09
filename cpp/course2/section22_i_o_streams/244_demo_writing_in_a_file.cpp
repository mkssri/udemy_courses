#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs("my.txt", ios::trunc);
    ofs << "John" << endl;
    ofs << 25 << endl;
    ofs << "cs" << endl;

    ofs.close();

    return 0;
}
