// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/geometric.h"
#include "BKPIECE1.pypp.hpp"

namespace bp = boost::python;

struct BKPIECE1_wrapper : ompl::geometric::BKPIECE1, bp::wrapper< ompl::geometric::BKPIECE1 > {

    BKPIECE1_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::geometric::BKPIECE1( si )
      , bp::wrapper< ompl::geometric::BKPIECE1 >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::geometric::BKPIECE1::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::geometric::BKPIECE1::clear( );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::geometric::BKPIECE1::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::geometric::BKPIECE1::getPlannerData( boost::ref(data) );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::geometric::BKPIECE1::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::geometric::BKPIECE1::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::geometric::BKPIECE1::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::geometric::BKPIECE1::solve( boost::ref(ptc) );
    }

    virtual void checkValidity(  ) {
        if( bp::override func_checkValidity = this->get_override( "checkValidity" ) )
            func_checkValidity(  );
        else{
            this->ompl::base::Planner::checkValidity(  );
        }
    }
    
    void default_checkValidity(  ) {
        ompl::base::Planner::checkValidity( );
    }

    virtual void setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        if( bp::override func_setProblemDefinition = this->get_override( "setProblemDefinition" ) )
            func_setProblemDefinition( pdef );
        else{
            this->ompl::base::Planner::setProblemDefinition( pdef );
        }
    }
    
    void default_setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        ompl::base::Planner::setProblemDefinition( pdef );
    }

};

void register_BKPIECE1_class(){

    { //::ompl::geometric::BKPIECE1
        typedef bp::class_< BKPIECE1_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > BKPIECE1_exposer_t;
        BKPIECE1_exposer_t BKPIECE1_exposer = BKPIECE1_exposer_t( "BKPIECE1", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope BKPIECE1_scope( BKPIECE1_exposer );
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::geometric::BKPIECE1 >();
        { //::ompl::geometric::BKPIECE1::clear
        
            typedef void ( ::ompl::geometric::BKPIECE1::*clear_function_type)(  ) ;
            typedef void ( BKPIECE1_wrapper::*default_clear_function_type)(  ) ;
            
            BKPIECE1_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::geometric::BKPIECE1::clear)
                , default_clear_function_type(&BKPIECE1_wrapper::default_clear) );
        
        }
        { //::ompl::geometric::BKPIECE1::getBorderFraction
        
            typedef double ( ::ompl::geometric::BKPIECE1::*getBorderFraction_function_type)(  ) const;
            
            BKPIECE1_exposer.def( 
                "getBorderFraction"
                , getBorderFraction_function_type( &::ompl::geometric::BKPIECE1::getBorderFraction ) );
        
        }
        { //::ompl::geometric::BKPIECE1::getFailedExpansionCellScoreFactor
        
            typedef double ( ::ompl::geometric::BKPIECE1::*getFailedExpansionCellScoreFactor_function_type)(  ) const;
            
            BKPIECE1_exposer.def( 
                "getFailedExpansionCellScoreFactor"
                , getFailedExpansionCellScoreFactor_function_type( &::ompl::geometric::BKPIECE1::getFailedExpansionCellScoreFactor ) );
        
        }
        { //::ompl::geometric::BKPIECE1::getMinValidPathFraction
        
            typedef double ( ::ompl::geometric::BKPIECE1::*getMinValidPathFraction_function_type)(  ) const;
            
            BKPIECE1_exposer.def( 
                "getMinValidPathFraction"
                , getMinValidPathFraction_function_type( &::ompl::geometric::BKPIECE1::getMinValidPathFraction ) );
        
        }
        { //::ompl::geometric::BKPIECE1::getPlannerData
        
            typedef void ( ::ompl::geometric::BKPIECE1::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( BKPIECE1_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            BKPIECE1_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::geometric::BKPIECE1::getPlannerData)
                , default_getPlannerData_function_type(&BKPIECE1_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::geometric::BKPIECE1::getProjectionEvaluator
        
            typedef ::ompl::base::ProjectionEvaluatorPtr const & ( ::ompl::geometric::BKPIECE1::*getProjectionEvaluator_function_type)(  ) const;
            
            BKPIECE1_exposer.def( 
                "getProjectionEvaluator"
                , getProjectionEvaluator_function_type( &::ompl::geometric::BKPIECE1::getProjectionEvaluator )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::BKPIECE1::getRange
        
            typedef double ( ::ompl::geometric::BKPIECE1::*getRange_function_type)(  ) const;
            
            BKPIECE1_exposer.def( 
                "getRange"
                , getRange_function_type( &::ompl::geometric::BKPIECE1::getRange ) );
        
        }
        { //::ompl::geometric::BKPIECE1::setBorderFraction
        
            typedef void ( ::ompl::geometric::BKPIECE1::*setBorderFraction_function_type)( double ) ;
            
            BKPIECE1_exposer.def( 
                "setBorderFraction"
                , setBorderFraction_function_type( &::ompl::geometric::BKPIECE1::setBorderFraction )
                , ( bp::arg("bp") ) );
        
        }
        { //::ompl::geometric::BKPIECE1::setFailedExpansionCellScoreFactor
        
            typedef void ( ::ompl::geometric::BKPIECE1::*setFailedExpansionCellScoreFactor_function_type)( double ) ;
            
            BKPIECE1_exposer.def( 
                "setFailedExpansionCellScoreFactor"
                , setFailedExpansionCellScoreFactor_function_type( &::ompl::geometric::BKPIECE1::setFailedExpansionCellScoreFactor )
                , ( bp::arg("factor") ) );
        
        }
        { //::ompl::geometric::BKPIECE1::setMinValidPathFraction
        
            typedef void ( ::ompl::geometric::BKPIECE1::*setMinValidPathFraction_function_type)( double ) ;
            
            BKPIECE1_exposer.def( 
                "setMinValidPathFraction"
                , setMinValidPathFraction_function_type( &::ompl::geometric::BKPIECE1::setMinValidPathFraction )
                , ( bp::arg("fraction") ) );
        
        }
        { //::ompl::geometric::BKPIECE1::setProjectionEvaluator
        
            typedef void ( ::ompl::geometric::BKPIECE1::*setProjectionEvaluator_function_type)( ::ompl::base::ProjectionEvaluatorPtr const & ) ;
            
            BKPIECE1_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::geometric::BKPIECE1::setProjectionEvaluator )
                , ( bp::arg("projectionEvaluator") ) );
        
        }
        { //::ompl::geometric::BKPIECE1::setProjectionEvaluator
        
            typedef void ( ::ompl::geometric::BKPIECE1::*setProjectionEvaluator_function_type)( ::std::string const & ) ;
            
            BKPIECE1_exposer.def( 
                "setProjectionEvaluator"
                , setProjectionEvaluator_function_type( &::ompl::geometric::BKPIECE1::setProjectionEvaluator )
                , ( bp::arg("name") ) );
        
        }
        { //::ompl::geometric::BKPIECE1::setRange
        
            typedef void ( ::ompl::geometric::BKPIECE1::*setRange_function_type)( double ) ;
            
            BKPIECE1_exposer.def( 
                "setRange"
                , setRange_function_type( &::ompl::geometric::BKPIECE1::setRange )
                , ( bp::arg("distance") ) );
        
        }
        { //::ompl::geometric::BKPIECE1::setup
        
            typedef void ( ::ompl::geometric::BKPIECE1::*setup_function_type)(  ) ;
            typedef void ( BKPIECE1_wrapper::*default_setup_function_type)(  ) ;
            
            BKPIECE1_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::geometric::BKPIECE1::setup)
                , default_setup_function_type(&BKPIECE1_wrapper::default_setup) );
        
        }
        { //::ompl::geometric::BKPIECE1::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::BKPIECE1::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( BKPIECE1_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            BKPIECE1_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::BKPIECE1::solve)
                , default_solve_function_type(&BKPIECE1_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        BKPIECE1_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        BKPIECE1_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &BKPIECE1_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        BKPIECE1_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                        &BKPIECE1_wrapper::default_checkValidity );
    }

}
