#include <iostream>
#include "HashEntry.h"
#include "HashMap.h"

using namespace std;

int main()
{
    Hashmap* hm = new Hashmap();
    hm->put(0, 175);
    hm->put(2, 148);
    hm->put(3, 143);
    hm->put(4, 142);
    hm->put(5, 174);
    hm->put(6, 129);
    hm->put(7, 152);
    hm->put(8, 170);
    hm->put(9, 177);
    hm->put(10, 191);
    hm->put(11, 108);
    hm->put(12, 112);
    hm->put(13, 184);
    hm->put(14, 142);
    hm->put(16, 156);
    hm->put(17, 119);
    hm->put(18, 132);
    hm->put(19, 162);
    hm->put(20, 168);
    hm->put(21, 170);
    hm->put(22, 113);
    hm->put(23, 110);
    hm->put(24, 115);
    hm->put(25, 181);
    hm->put(26, 134);
    hm->put(27, 113);
    hm->put(28, 198);
    hm->put(29, 135);
    hm->put(30, 170);
    hm->put(31, 198);

    for (int i = 0; i < 32; i++)
        cout << "[" << i << "]" << "->" << hm->get(i) << end;
}