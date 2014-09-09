// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "bindings/util.h"
#include "vectorVectorDouble.pypp.hpp"

namespace bp = boost::python;

void register_vectorVectorDouble_class(){

    { //::std::vector< std::vector< double > >
        typedef bp::class_< std::vector< std::vector< double > > > vectorVectorDouble_exposer_t;
        vectorVectorDouble_exposer_t vectorVectorDouble_exposer = vectorVectorDouble_exposer_t( "vectorVectorDouble" );
        bp::scope vectorVectorDouble_scope( vectorVectorDouble_exposer );
        //WARNING: the next line of code will not compile, because "::std::vector<double, std::allocator<double> >" does not have operator== !
        vectorVectorDouble_exposer.def( bp::vector_indexing_suite< ::std::vector< std::vector< double > > >() );
    }

}