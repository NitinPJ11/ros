// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "bindings/util.h"
#include "vectorSizeT.pypp.hpp"

namespace bp = boost::python;

void register_vectorSizeT_class(){

    { //::std::vector< unsigned long >
        typedef bp::class_< std::vector< unsigned long > > vectorSizeT_exposer_t;
        vectorSizeT_exposer_t vectorSizeT_exposer = vectorSizeT_exposer_t( "vectorSizeT" );
        bp::scope vectorSizeT_scope( vectorSizeT_exposer );
        vectorSizeT_exposer.def( bp::vector_indexing_suite< ::std::vector< unsigned long >, true >() );
    }

}
