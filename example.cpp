#include <pybind11/pybind11.h>
#include <vector>
#include <pybind11/stl.h>
namespace py = pybind11;

using namespace std;

int add(vector<int> &v)
{
    int tot = 0;

    for(int i = 0; i < v.size(); i++) {
        tot += v[i];
    }
    return tot;
}

PYBIND11_MODULE(example, m)
{
    // optional module docstring
    m.doc() = "pybind11 example plugin";
    // expose add function, and add keyword arguments and default arguments
    m.def("add", &add, "A function which adds two numbers");

}