#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> mp;
    mp["蔡育倫"] = 12750300;
    mp["章偉臣"] = 12750194;
    cout << "蔡育倫的學號是:" <<mp["蔡育倫"];

}


