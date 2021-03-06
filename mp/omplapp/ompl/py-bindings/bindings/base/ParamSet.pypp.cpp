// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "ParamSet.pypp.hpp"

namespace bp = boost::python;

std::string __str__(::ompl::base::ParamSet* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_ParamSet_class(){

    { //::ompl::base::ParamSet
        typedef bp::class_< ompl::base::ParamSet > ParamSet_exposer_t;
        ParamSet_exposer_t ParamSet_exposer = ParamSet_exposer_t( "ParamSet" );
        bp::scope ParamSet_scope( ParamSet_exposer );
        { //::ompl::base::ParamSet::add
        
            typedef void ( ::ompl::base::ParamSet::*add_function_type)( ::ompl::base::GenericParamPtr const & ) ;
            
            ParamSet_exposer.def( 
                "add"
                , add_function_type( &::ompl::base::ParamSet::add )
                , ( bp::arg("param") ) );
        
        }
        { //::ompl::base::ParamSet::clear
        
            typedef void ( ::ompl::base::ParamSet::*clear_function_type)(  ) ;
            
            ParamSet_exposer.def( 
                "clear"
                , clear_function_type( &::ompl::base::ParamSet::clear ) );
        
        }
        { //::ompl::base::ParamSet::getParam
        
            typedef bool ( ::ompl::base::ParamSet::*getParam_function_type)( ::std::string const &,::std::string & ) const;
            
            ParamSet_exposer.def( 
                "getParam"
                , getParam_function_type( &::ompl::base::ParamSet::getParam )
                , ( bp::arg("key"), bp::arg("value") ) );
        
        }
        { //::ompl::base::ParamSet::getParam
        
            typedef ::ompl::base::GenericParamPtr const & ( ::ompl::base::ParamSet::*getParam_function_type)( ::std::string const & ) const;
            
            ParamSet_exposer.def( 
                "getParam"
                , getParam_function_type( &::ompl::base::ParamSet::getParam )
                , ( bp::arg("key") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ParamSet::getParamNames
        
            typedef void ( ::ompl::base::ParamSet::*getParamNames_function_type)( ::std::vector< std::string > & ) const;
            
            ParamSet_exposer.def( 
                "getParamNames"
                , getParamNames_function_type( &::ompl::base::ParamSet::getParamNames )
                , ( bp::arg("params") ) );
        
        }
        { //::ompl::base::ParamSet::getParamValues
        
            typedef void ( ::ompl::base::ParamSet::*getParamValues_function_type)( ::std::vector< std::string > & ) const;
            
            ParamSet_exposer.def( 
                "getParamValues"
                , getParamValues_function_type( &::ompl::base::ParamSet::getParamValues )
                , ( bp::arg("vals") ) );
        
        }
        { //::ompl::base::ParamSet::getParams
        
            typedef void ( ::ompl::base::ParamSet::*getParams_function_type)( ::std::map< std::string, std::string > & ) const;
            
            ParamSet_exposer.def( 
                "getParams"
                , getParams_function_type( &::ompl::base::ParamSet::getParams )
                , ( bp::arg("params") ) );
        
        }
        { //::ompl::base::ParamSet::getParams
        
            typedef ::std::map< std::string, boost::shared_ptr<ompl::base::GenericParam> > const & ( ::ompl::base::ParamSet::*getParams_function_type)(  ) const;
            
            ParamSet_exposer.def( 
                "getParams"
                , getParams_function_type( &::ompl::base::ParamSet::getParams )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ParamSet::hasParam
        
            typedef bool ( ::ompl::base::ParamSet::*hasParam_function_type)( ::std::string const & ) const;
            
            ParamSet_exposer.def( 
                "hasParam"
                , hasParam_function_type( &::ompl::base::ParamSet::hasParam )
                , ( bp::arg("key") ) );
        
        }
        { //::ompl::base::ParamSet::include
        
            typedef void ( ::ompl::base::ParamSet::*include_function_type)( ::ompl::base::ParamSet const &,::std::string const & ) ;
            
            ParamSet_exposer.def( 
                "include"
                , include_function_type( &::ompl::base::ParamSet::include )
                , ( bp::arg("other"), bp::arg("prefix")="" ) );
        
        }
        { //::ompl::base::ParamSet::operator[]
        
            typedef ::ompl::base::GenericParam & ( ::ompl::base::ParamSet::*__getitem___function_type)( ::std::string const & ) ;
            
            ParamSet_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::ompl::base::ParamSet::operator[] )
                , ( bp::arg("key") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ParamSet::remove
        
            typedef void ( ::ompl::base::ParamSet::*remove_function_type)( ::std::string const & ) ;
            
            ParamSet_exposer.def( 
                "remove"
                , remove_function_type( &::ompl::base::ParamSet::remove )
                , ( bp::arg("name") ) );
        
        }
        { //::ompl::base::ParamSet::setParam
        
            typedef bool ( ::ompl::base::ParamSet::*setParam_function_type)( ::std::string const &,::std::string const & ) ;
            
            ParamSet_exposer.def( 
                "setParam"
                , setParam_function_type( &::ompl::base::ParamSet::setParam )
                , ( bp::arg("key"), bp::arg("value") ) );
        
        }
        { //::ompl::base::ParamSet::setParams
        
            typedef bool ( ::ompl::base::ParamSet::*setParams_function_type)( ::std::map< std::string, std::string > const &,bool ) ;
            
            ParamSet_exposer.def( 
                "setParams"
                , setParams_function_type( &::ompl::base::ParamSet::setParams )
                , ( bp::arg("kv"), bp::arg("ignoreUnknown")=(bool)(false) ) );
        
        }
        { //::ompl::base::ParamSet::size
        
            typedef ::std::size_t ( ::ompl::base::ParamSet::*size_function_type)(  ) const;
            
            ParamSet_exposer.def( 
                "size"
                , size_function_type( &::ompl::base::ParamSet::size ) );
        
        }
        ParamSet_exposer.def("__str__", &__str__);
    }

}
