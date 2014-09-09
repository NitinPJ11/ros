// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/util.h"
#include "Exception.pypp.hpp"

namespace bp = boost::python;

void register_Exception_class(){

    { //::ompl::Exception
        typedef bp::class_< ompl::Exception > Exception_exposer_t;
        Exception_exposer_t Exception_exposer = Exception_exposer_t( "Exception", bp::init< std::string const & >(( bp::arg("what") )) );
        bp::scope Exception_scope( Exception_exposer );
        bp::implicitly_convertible< std::string const &, ompl::Exception >();
        Exception_exposer.def( bp::init< std::string const &, std::string const & >(( bp::arg("prefix"), bp::arg("what") )) );
    }

}