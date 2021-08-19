#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "module.h"

float PI = 3.14;

void printHello()
{
    std::cout << "Hello, world!\n";
}

float calcCircleArea(float r)
{
    return PI * r * r;
}

std::vector<float> calcProduct(std::vector<float> &v1, std::vector<float> &v2)
{
    int sizeV1 = v1.size();
    int sizeV2 = v2.size();
    assert(sizeV1 == sizeV2);
    std::vector<float> result(sizeV1);
    for (int i = 0; i < sizeV1; i++)
    {
        result[i] = v1[i] * v2[i];
    }
    return result;
}

PYBIND11_MODULE(module, m)
{
    m.doc() = "module made by pybind11";
    m.def("printHello", &printHello);
    m.def("calcCircleArea", &calcCircleArea);
    m.def("calcProduct", &calcProduct);
}
