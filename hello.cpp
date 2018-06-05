
#include <boost/python.hpp>
#include <boost/python/numpy.hpp>

//boost::python::numpy::
namespace p = boost::python;
namespace np = boost::python::numpy;

BOOST_PYTHON_MODULE(hello)
{
    Py_Initialize();
    np::initialize();

}
