// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "GoalState.pypp.hpp"

namespace bp = boost::python;

struct GoalState_wrapper : ompl::base::GoalState, bp::wrapper< ompl::base::GoalState > {

    GoalState_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::base::GoalState( si )
      , bp::wrapper< ompl::base::GoalState >(){
        // constructor
    
    }

    virtual double distanceGoal( ::ompl::base::State const * st ) const  {
        if( bp::override func_distanceGoal = this->get_override( "distanceGoal" ) )
            return func_distanceGoal( boost::python::ptr(st) );
        else{
            return this->ompl::base::GoalState::distanceGoal( boost::python::ptr(st) );
        }
    }
    
    double default_distanceGoal( ::ompl::base::State const * st ) const  {
        return ompl::base::GoalState::distanceGoal( boost::python::ptr(st) );
    }

    virtual unsigned int maxSampleCount(  ) const  {
        if( bp::override func_maxSampleCount = this->get_override( "maxSampleCount" ) )
            return func_maxSampleCount(  );
        else{
            return this->ompl::base::GoalState::maxSampleCount(  );
        }
    }
    
    unsigned int default_maxSampleCount(  ) const  {
        return ompl::base::GoalState::maxSampleCount( );
    }

    virtual void sampleGoal( ::ompl::base::State * st ) const  {
        if( bp::override func_sampleGoal = this->get_override( "sampleGoal" ) )
            func_sampleGoal( boost::python::ptr(st) );
        else{
            this->ompl::base::GoalState::sampleGoal( boost::python::ptr(st) );
        }
    }
    
    void default_sampleGoal( ::ompl::base::State * st ) const  {
        ompl::base::GoalState::sampleGoal( boost::python::ptr(st) );
    }

    virtual bool couldSample(  ) const  {
        if( bp::override func_couldSample = this->get_override( "couldSample" ) )
            return func_couldSample(  );
        else{
            return this->ompl::base::GoalSampleableRegion::couldSample(  );
        }
    }
    
    bool default_couldSample(  ) const  {
        return ompl::base::GoalSampleableRegion::couldSample( );
    }

    virtual bool isSatisfied( ::ompl::base::State const * st ) const  {
        if( bp::override func_isSatisfied = this->get_override( "isSatisfied" ) )
            return func_isSatisfied( boost::python::ptr(st) );
        else{
            return this->ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st) );
        }
    }
    
    bool default_isSatisfied( ::ompl::base::State const * st ) const  {
        return ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st) );
    }

    virtual bool isSatisfied( ::ompl::base::State const * st, double * distance ) const  {
        if( bp::override func_isSatisfied = this->get_override( "isSatisfied" ) )
            return func_isSatisfied( boost::python::ptr(st), distance );
        else{
            return this->ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st), distance );
        }
    }
    
    bool default_isSatisfied( ::ompl::base::State const * st, double * distance ) const  {
        return ompl::base::GoalRegion::isSatisfied( boost::python::ptr(st), distance );
    }

    virtual bool isStartGoalPairValid( ::ompl::base::State const * arg0, ::ompl::base::State const * arg1 ) const  {
        if( bp::override func_isStartGoalPairValid = this->get_override( "isStartGoalPairValid" ) )
            return func_isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        else{
            return this->ompl::base::Goal::isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        }
    }
    
    bool default_isStartGoalPairValid( ::ompl::base::State const * arg0, ::ompl::base::State const * arg1 ) const  {
        return ompl::base::Goal::isStartGoalPairValid( boost::python::ptr(arg0), boost::python::ptr(arg1) );
    }

};

std::string __str__(::ompl::base::GoalState* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_GoalState_class(){

    { //::ompl::base::GoalState
        typedef bp::class_< GoalState_wrapper, bp::bases< ompl::base::GoalSampleableRegion >, boost::noncopyable > GoalState_exposer_t;
        GoalState_exposer_t GoalState_exposer = GoalState_exposer_t( "GoalState", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope GoalState_scope( GoalState_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::base::GoalState >();
        { //::ompl::base::GoalState::distanceGoal
        
            typedef double ( ::ompl::base::GoalState::*distanceGoal_function_type)( ::ompl::base::State const * ) const;
            typedef double ( GoalState_wrapper::*default_distanceGoal_function_type)( ::ompl::base::State const * ) const;
            
            GoalState_exposer.def( 
                "distanceGoal"
                , distanceGoal_function_type(&::ompl::base::GoalState::distanceGoal)
                , default_distanceGoal_function_type(&GoalState_wrapper::default_distanceGoal)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalState::getState
        
            typedef ::ompl::base::State const * ( ::ompl::base::GoalState::*getState_function_type)(  ) const;
            
            GoalState_exposer.def( 
                "getState"
                , getState_function_type( &::ompl::base::GoalState::getState )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::GoalState::getState
        
            typedef ::ompl::base::State * ( ::ompl::base::GoalState::*getState_function_type)(  ) ;
            
            GoalState_exposer.def( 
                "getState"
                , getState_function_type( &::ompl::base::GoalState::getState )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::GoalState::maxSampleCount
        
            typedef unsigned int ( ::ompl::base::GoalState::*maxSampleCount_function_type)(  ) const;
            typedef unsigned int ( GoalState_wrapper::*default_maxSampleCount_function_type)(  ) const;
            
            GoalState_exposer.def( 
                "maxSampleCount"
                , maxSampleCount_function_type(&::ompl::base::GoalState::maxSampleCount)
                , default_maxSampleCount_function_type(&GoalState_wrapper::default_maxSampleCount) );
        
        }
        { //::ompl::base::GoalState::sampleGoal
        
            typedef void ( ::ompl::base::GoalState::*sampleGoal_function_type)( ::ompl::base::State * ) const;
            typedef void ( GoalState_wrapper::*default_sampleGoal_function_type)( ::ompl::base::State * ) const;
            
            GoalState_exposer.def( 
                "sampleGoal"
                , sampleGoal_function_type(&::ompl::base::GoalState::sampleGoal)
                , default_sampleGoal_function_type(&GoalState_wrapper::default_sampleGoal)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalState::setState
        
            typedef void ( ::ompl::base::GoalState::*setState_function_type)( ::ompl::base::State const * ) ;
            
            GoalState_exposer.def( 
                "setState"
                , setState_function_type( &::ompl::base::GoalState::setState )
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalState::setState
        
            typedef void ( ::ompl::base::GoalState::*setState_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            GoalState_exposer.def( 
                "setState"
                , setState_function_type( &::ompl::base::GoalState::setState )
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalSampleableRegion::couldSample
        
            typedef bool ( ::ompl::base::GoalSampleableRegion::*couldSample_function_type)(  ) const;
            typedef bool ( GoalState_wrapper::*default_couldSample_function_type)(  ) const;
            
            GoalState_exposer.def( 
                "couldSample"
                , couldSample_function_type(&::ompl::base::GoalSampleableRegion::couldSample)
                , default_couldSample_function_type(&GoalState_wrapper::default_couldSample) );
        
        }
        { //::ompl::base::GoalRegion::isSatisfied
        
            typedef bool ( ::ompl::base::GoalRegion::*isSatisfied_function_type)( ::ompl::base::State const * ) const;
            typedef bool ( GoalState_wrapper::*default_isSatisfied_function_type)( ::ompl::base::State const * ) const;
            
            GoalState_exposer.def( 
                "isSatisfied"
                , isSatisfied_function_type(&::ompl::base::GoalRegion::isSatisfied)
                , default_isSatisfied_function_type(&GoalState_wrapper::default_isSatisfied)
                , ( bp::arg("st") ) );
        
        }
        { //::ompl::base::GoalRegion::isSatisfied
        
            typedef bool ( ::ompl::base::GoalRegion::*isSatisfied_function_type)( ::ompl::base::State const *,double * ) const;
            typedef bool ( GoalState_wrapper::*default_isSatisfied_function_type)( ::ompl::base::State const *,double * ) const;
            
            GoalState_exposer.def( 
                "isSatisfied"
                , isSatisfied_function_type(&::ompl::base::GoalRegion::isSatisfied)
                , default_isSatisfied_function_type(&GoalState_wrapper::default_isSatisfied)
                , ( bp::arg("st"), bp::arg("distance") ) );
        
        }
        { //::ompl::base::Goal::isStartGoalPairValid
        
            typedef bool ( ::ompl::base::Goal::*isStartGoalPairValid_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            typedef bool ( GoalState_wrapper::*default_isStartGoalPairValid_function_type)( ::ompl::base::State const *,::ompl::base::State const * ) const;
            
            GoalState_exposer.def( 
                "isStartGoalPairValid"
                , isStartGoalPairValid_function_type(&::ompl::base::Goal::isStartGoalPairValid)
                , default_isStartGoalPairValid_function_type(&GoalState_wrapper::default_isStartGoalPairValid)
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        GoalState_exposer.def("__str__", &__str__);
    }

}
