// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/geometric.h"
#include "SPARS.pypp.hpp"

namespace bp = boost::python;

struct SPARS_wrapper : ompl::geometric::SPARS, bp::wrapper< ompl::geometric::SPARS > {

    SPARS_wrapper(::ompl::base::SpaceInformationPtr const & si )
    : ompl::geometric::SPARS( si )
      , bp::wrapper< ompl::geometric::SPARS >(){
        // constructor
    
    }

    long unsigned int addGuard( ::ompl::base::State * state, ::ompl::geometric::SPARS::GuardType type ){
        return ompl::geometric::SPARS::addGuard( boost::python::ptr(state), type );
    }

    long unsigned int addMilestone( ::ompl::base::State * state ){
        return ompl::geometric::SPARS::addMilestone( boost::python::ptr(state) );
    }

    bool addPathToSpanner( ::std::deque< ompl::base::State* > const & p, long unsigned int vp, long unsigned int vpp ){
        return ompl::geometric::SPARS::addPathToSpanner( boost::ref(p), vp, vpp );
    }

    long unsigned int addSample( ::ompl::base::State * workState, ::ompl::base::PlannerTerminationCondition const & ptc ){
        return ompl::geometric::SPARS::addSample( boost::python::ptr(workState), boost::ref(ptc) );
    }

    void addToRepresentatives( long unsigned int q, long unsigned int rep, ::std::set< long unsigned int > const & oreps ){
        ompl::geometric::SPARS::addToRepresentatives( q, rep, boost::ref(oreps) );
    }

    void calculateRepresentative( long unsigned int q ){
        ompl::geometric::SPARS::calculateRepresentative( q );
    }

    bool checkAddConnectivity( ::ompl::base::State const * lastState, ::std::vector< unsigned long > const & neigh ){
        return ompl::geometric::SPARS::checkAddConnectivity( boost::python::ptr(lastState), boost::ref(neigh) );
    }

    bool checkAddCoverage( ::ompl::base::State const * lastState, ::std::vector< unsigned long > const & neigh ){
        return ompl::geometric::SPARS::checkAddCoverage( boost::python::ptr(lastState), boost::ref(neigh) );
    }

    bool checkAddInterface( ::std::vector< unsigned long > const & graphNeighborhood, ::std::vector< unsigned long > const & visibleNeighborhood, long unsigned int q ){
        return ompl::geometric::SPARS::checkAddInterface( boost::ref(graphNeighborhood), boost::ref(visibleNeighborhood), q );
    }

    bool checkAddPath( long unsigned int q, ::std::vector< unsigned long > const & neigh ){
        return ompl::geometric::SPARS::checkAddPath( q, boost::ref(neigh) );
    }

    void checkForSolution( ::ompl::base::PlannerTerminationCondition const & ptc, ::ompl::base::PathPtr & solution ){
        ompl::geometric::SPARS::checkForSolution( boost::ref(ptc), solution );
    }

    void checkQueryStateInitialization(  ){
        ompl::geometric::SPARS::checkQueryStateInitialization(  );
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->ompl::geometric::SPARS::clear(  );
        }
    }
    
    void default_clear(  ) {
        ompl::geometric::SPARS::clear( );
    }

    void computeDensePath( long unsigned int const start, long unsigned int const goal, ::std::deque< ompl::base::State* > & path ) const {
        ompl::geometric::SPARS::computeDensePath( start, goal, boost::ref(path) );
    }

    void computeVPP( long unsigned int v, long unsigned int vp, ::std::vector< unsigned long > & VPPs ){
        ompl::geometric::SPARS::computeVPP( v, vp, boost::ref(VPPs) );
    }

    void computeX( long unsigned int v, long unsigned int vp, long unsigned int vpp, ::std::vector< unsigned long > & Xs ){
        ompl::geometric::SPARS::computeX( v, vp, vpp, boost::ref(Xs) );
    }

    void connectDensePoints( long unsigned int v, long unsigned int vp ){
        ompl::geometric::SPARS::connectDensePoints( v, vp );
    }

    void connectSparsePoints( long unsigned int v, long unsigned int vp ){
        ompl::geometric::SPARS::connectSparsePoints( v, vp );
    }

    ::ompl::base::PathPtr constructSolution( long unsigned int const start, long unsigned int const goal ) const {
        return ompl::geometric::SPARS::constructSolution( start, goal );
    }

    double distanceFunction( long unsigned int const a, long unsigned int const b ) const {
        return ompl::geometric::SPARS::distanceFunction( a, b );
    }

    void filterVisibleNeighbors( ::ompl::base::State * inState, ::std::vector< unsigned long > const & graphNeighborhood, ::std::vector< unsigned long > & visibleNeighborhood ) const {
        ompl::geometric::SPARS::filterVisibleNeighbors( boost::python::ptr(inState), boost::ref(graphNeighborhood), boost::ref(visibleNeighborhood) );
    }

    void freeMemory(  ){
        ompl::geometric::SPARS::freeMemory(  );
    }

    long unsigned int getInterfaceNeighbor( long unsigned int q, long unsigned int rep ){
        return ompl::geometric::SPARS::getInterfaceNeighbor( q, rep );
    }

    void getInterfaceNeighborRepresentatives( long unsigned int q, ::std::set< long unsigned int > & interfaceRepresentatives ){
        ompl::geometric::SPARS::getInterfaceNeighborRepresentatives( q, boost::ref(interfaceRepresentatives) );
    }

    void getInterfaceNeighborhood( long unsigned int q, ::std::vector< unsigned long > & interfaceNeighborhood ){
        ompl::geometric::SPARS::getInterfaceNeighborhood( q, boost::ref(interfaceNeighborhood) );
    }

    virtual void getPlannerData( ::ompl::base::PlannerData & data ) const  {
        if( bp::override func_getPlannerData = this->get_override( "getPlannerData" ) )
            func_getPlannerData( boost::ref(data) );
        else{
            this->ompl::geometric::SPARS::getPlannerData( boost::ref(data) );
        }
    }
    
    void default_getPlannerData( ::ompl::base::PlannerData & data ) const  {
        ompl::geometric::SPARS::getPlannerData( boost::ref(data) );
    }

    void getSparseNeighbors( ::ompl::base::State * inState, ::std::vector< unsigned long > & graphNeighborhood ){
        ompl::geometric::SPARS::getSparseNeighbors( boost::python::ptr(inState), boost::ref(graphNeighborhood) );
    }

    bool haveSolution( ::std::vector< unsigned long > const & start, ::std::vector< unsigned long > const & goal, ::ompl::base::PathPtr & solution ){
        return ompl::geometric::SPARS::haveSolution( boost::ref(start), boost::ref(goal), solution );
    }

    bool reachedTerminationCriterion(  ) const {
        return ompl::geometric::SPARS::reachedTerminationCriterion(  );
    }

    void removeFromRepresentatives( long unsigned int q, long unsigned int rep ){
        ompl::geometric::SPARS::removeFromRepresentatives( q, rep );
    }

    void resetFailures(  ){
        ompl::geometric::SPARS::resetFailures(  );
    }

    bool sameComponent( long unsigned int m1, long unsigned int m2 ){
        return ompl::geometric::SPARS::sameComponent( m1, m2 );
    }

    virtual void setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        if( bp::override func_setProblemDefinition = this->get_override( "setProblemDefinition" ) )
            func_setProblemDefinition( pdef );
        else{
            this->ompl::geometric::SPARS::setProblemDefinition( pdef );
        }
    }
    
    void default_setProblemDefinition( ::ompl::base::ProblemDefinitionPtr const & pdef ) {
        ompl::geometric::SPARS::setProblemDefinition( pdef );
    }

    virtual void setup(  ) {
        if( bp::override func_setup = this->get_override( "setup" ) )
            func_setup(  );
        else{
            this->ompl::geometric::SPARS::setup(  );
        }
    }
    
    void default_setup(  ) {
        ompl::geometric::SPARS::setup( );
    }

    virtual ::ompl::base::PlannerStatus solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        if( bp::override func_solve = this->get_override( "solve" ) )
            return func_solve( boost::ref(ptc) );
        else{
            return this->ompl::geometric::SPARS::solve( boost::ref(ptc) );
        }
    }
    
    ::ompl::base::PlannerStatus default_solve( ::ompl::base::PlannerTerminationCondition const & ptc ) {
        return ompl::geometric::SPARS::solve( boost::ref(ptc) );
    }

    double sparseDistanceFunction( long unsigned int const a, long unsigned int const b ) const {
        return ompl::geometric::SPARS::sparseDistanceFunction( a, b );
    }

    void updateRepresentatives( long unsigned int v ){
        ompl::geometric::SPARS::updateRepresentatives( v );
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

};

std::string __printDebug(::ompl::geometric::SPARS* obj)
        {
            std::ostringstream s;
            obj->printDebug(s);
            return s.str();
        }

void register_SPARS_class(){

    { //::ompl::geometric::SPARS
        typedef bp::class_< SPARS_wrapper, bp::bases< ::ompl::base::Planner >, boost::noncopyable > SPARS_exposer_t;
        SPARS_exposer_t SPARS_exposer = SPARS_exposer_t( "SPARS", bp::init< ompl::base::SpaceInformationPtr const & >(( bp::arg("si") )) );
        bp::scope SPARS_scope( SPARS_exposer );
        bp::enum_< ompl::geometric::SPARS::GuardType>("GuardType")
            .value("START", ompl::geometric::SPARS::START)
            .value("GOAL", ompl::geometric::SPARS::GOAL)
            .value("COVERAGE", ompl::geometric::SPARS::COVERAGE)
            .value("CONNECTIVITY", ompl::geometric::SPARS::CONNECTIVITY)
            .value("INTERFACE", ompl::geometric::SPARS::INTERFACE)
            .value("QUALITY", ompl::geometric::SPARS::QUALITY)
            .export_values()
            ;
        { //::ompl::geometric::SPARS::InterfaceHashStruct
            typedef bp::class_< ompl::geometric::SPARS::InterfaceHashStruct > InterfaceHashStruct_exposer_t;
            InterfaceHashStruct_exposer_t InterfaceHashStruct_exposer = InterfaceHashStruct_exposer_t( "InterfaceHashStruct" );
            bp::scope InterfaceHashStruct_scope( InterfaceHashStruct_exposer );
            { //::ompl::geometric::SPARS::InterfaceHashStruct::operator=
            
                typedef ::ompl::geometric::SPARS::InterfaceHashStruct & ( ::ompl::geometric::SPARS::InterfaceHashStruct::*assign_function_type)( ::ompl::geometric::SPARS::InterfaceHashStruct const & ) ;
                
                InterfaceHashStruct_exposer.def( 
                    "assign"
                    , assign_function_type( &::ompl::geometric::SPARS::InterfaceHashStruct::operator= )
                    , ( bp::arg("rhs") )
                    , bp::return_value_policy< bp::reference_existing_object >() );
            
            }
            InterfaceHashStruct_exposer.def_readwrite( "interfaceHash", &ompl::geometric::SPARS::InterfaceHashStruct::interfaceHash );
        }
        { //::ompl::geometric::SPARS::vertex_color_t
            typedef bp::class_< ompl::geometric::SPARS::vertex_color_t > vertex_color_t_exposer_t;
            vertex_color_t_exposer_t vertex_color_t_exposer = vertex_color_t_exposer_t( "vertex_color_t" );
            bp::scope vertex_color_t_scope( vertex_color_t_exposer );
        }
        { //::ompl::geometric::SPARS::vertex_interface_list_t
            typedef bp::class_< ompl::geometric::SPARS::vertex_interface_list_t > vertex_interface_list_t_exposer_t;
            vertex_interface_list_t_exposer_t vertex_interface_list_t_exposer = vertex_interface_list_t_exposer_t( "vertex_interface_list_t" );
            bp::scope vertex_interface_list_t_scope( vertex_interface_list_t_exposer );
        }
        { //::ompl::geometric::SPARS::vertex_list_t
            typedef bp::class_< ompl::geometric::SPARS::vertex_list_t > vertex_list_t_exposer_t;
            vertex_list_t_exposer_t vertex_list_t_exposer = vertex_list_t_exposer_t( "vertex_list_t" );
            bp::scope vertex_list_t_scope( vertex_list_t_exposer );
        }
        { //::ompl::geometric::SPARS::vertex_representative_t
            typedef bp::class_< ompl::geometric::SPARS::vertex_representative_t > vertex_representative_t_exposer_t;
            vertex_representative_t_exposer_t vertex_representative_t_exposer = vertex_representative_t_exposer_t( "vertex_representative_t" );
            bp::scope vertex_representative_t_scope( vertex_representative_t_exposer );
        }
        { //::ompl::geometric::SPARS::vertex_state_t
            typedef bp::class_< ompl::geometric::SPARS::vertex_state_t > vertex_state_t_exposer_t;
            vertex_state_t_exposer_t vertex_state_t_exposer = vertex_state_t_exposer_t( "vertex_state_t" );
            bp::scope vertex_state_t_scope( vertex_state_t_exposer );
        }
        bp::implicitly_convertible< ompl::base::SpaceInformationPtr const &, ompl::geometric::SPARS >();
        { //::ompl::geometric::SPARS::addGuard
        
            typedef long unsigned int ( SPARS_wrapper::*addGuard_function_type)( ::ompl::base::State *,::ompl::geometric::SPARS::GuardType ) ;
            
            SPARS_exposer.def( 
                "addGuard"
                , addGuard_function_type( &SPARS_wrapper::addGuard )
                , ( bp::arg("state"), bp::arg("type") ) );
        
        }
        { //::ompl::geometric::SPARS::addMilestone
        
            typedef long unsigned int ( SPARS_wrapper::*addMilestone_function_type)( ::ompl::base::State * ) ;
            
            SPARS_exposer.def( 
                "addMilestone"
                , addMilestone_function_type( &SPARS_wrapper::addMilestone )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::geometric::SPARS::addPathToSpanner
        
            typedef bool ( SPARS_wrapper::*addPathToSpanner_function_type)( ::std::deque< ompl::base::State* > const &,long unsigned int,long unsigned int ) ;
            
            SPARS_exposer.def( 
                "addPathToSpanner"
                , addPathToSpanner_function_type( &SPARS_wrapper::addPathToSpanner )
                , ( bp::arg("p"), bp::arg("vp"), bp::arg("vpp") ) );
        
        }
        { //::ompl::geometric::SPARS::addSample
        
            typedef long unsigned int ( SPARS_wrapper::*addSample_function_type)( ::ompl::base::State *,::ompl::base::PlannerTerminationCondition const & ) ;
            
            SPARS_exposer.def( 
                "addSample"
                , addSample_function_type( &SPARS_wrapper::addSample )
                , ( bp::arg("workState"), bp::arg("ptc") ) );
        
        }
        { //::ompl::geometric::SPARS::addToRepresentatives
        
            typedef void ( SPARS_wrapper::*addToRepresentatives_function_type)( long unsigned int,long unsigned int,::std::set< long unsigned int > const & ) ;
            
            SPARS_exposer.def( 
                "addToRepresentatives"
                , addToRepresentatives_function_type( &SPARS_wrapper::addToRepresentatives )
                , ( bp::arg("q"), bp::arg("rep"), bp::arg("oreps") ) );
        
        }
        { //::ompl::geometric::SPARS::averageValence
        
            typedef double ( ::ompl::geometric::SPARS::*averageValence_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "averageValence"
                , averageValence_function_type( &::ompl::geometric::SPARS::averageValence ) );
        
        }
        { //::ompl::geometric::SPARS::calculateRepresentative
        
            typedef void ( SPARS_wrapper::*calculateRepresentative_function_type)( long unsigned int ) ;
            
            SPARS_exposer.def( 
                "calculateRepresentative"
                , calculateRepresentative_function_type( &SPARS_wrapper::calculateRepresentative )
                , ( bp::arg("q") ) );
        
        }
        { //::ompl::geometric::SPARS::checkAddConnectivity
        
            typedef bool ( SPARS_wrapper::*checkAddConnectivity_function_type)( ::ompl::base::State const *,::std::vector< unsigned long > const & ) ;
            
            SPARS_exposer.def( 
                "checkAddConnectivity"
                , checkAddConnectivity_function_type( &SPARS_wrapper::checkAddConnectivity )
                , ( bp::arg("lastState"), bp::arg("neigh") ) );
        
        }
        { //::ompl::geometric::SPARS::checkAddCoverage
        
            typedef bool ( SPARS_wrapper::*checkAddCoverage_function_type)( ::ompl::base::State const *,::std::vector< unsigned long > const & ) ;
            
            SPARS_exposer.def( 
                "checkAddCoverage"
                , checkAddCoverage_function_type( &SPARS_wrapper::checkAddCoverage )
                , ( bp::arg("lastState"), bp::arg("neigh") ) );
        
        }
        { //::ompl::geometric::SPARS::checkAddInterface
        
            typedef bool ( SPARS_wrapper::*checkAddInterface_function_type)( ::std::vector< unsigned long > const &,::std::vector< unsigned long > const &,long unsigned int ) ;
            
            SPARS_exposer.def( 
                "checkAddInterface"
                , checkAddInterface_function_type( &SPARS_wrapper::checkAddInterface )
                , ( bp::arg("graphNeighborhood"), bp::arg("visibleNeighborhood"), bp::arg("q") ) );
        
        }
        { //::ompl::geometric::SPARS::checkAddPath
        
            typedef bool ( SPARS_wrapper::*checkAddPath_function_type)( long unsigned int,::std::vector< unsigned long > const & ) ;
            
            SPARS_exposer.def( 
                "checkAddPath"
                , checkAddPath_function_type( &SPARS_wrapper::checkAddPath )
                , ( bp::arg("q"), bp::arg("neigh") ) );
        
        }
        { //::ompl::geometric::SPARS::checkForSolution
        
            typedef void ( SPARS_wrapper::*checkForSolution_function_type)( ::ompl::base::PlannerTerminationCondition const &,::ompl::base::PathPtr & ) ;
            
            SPARS_exposer.def( 
                "checkForSolution"
                , checkForSolution_function_type( &SPARS_wrapper::checkForSolution )
                , ( bp::arg("ptc"), bp::arg("solution") ) );
        
        }
        { //::ompl::geometric::SPARS::checkQueryStateInitialization
        
            typedef void ( SPARS_wrapper::*checkQueryStateInitialization_function_type)(  ) ;
            
            SPARS_exposer.def( 
                "checkQueryStateInitialization"
                , checkQueryStateInitialization_function_type( &SPARS_wrapper::checkQueryStateInitialization ) );
        
        }
        { //::ompl::geometric::SPARS::clear
        
            typedef void ( ::ompl::geometric::SPARS::*clear_function_type)(  ) ;
            typedef void ( SPARS_wrapper::*default_clear_function_type)(  ) ;
            
            SPARS_exposer.def( 
                "clear"
                , clear_function_type(&::ompl::geometric::SPARS::clear)
                , default_clear_function_type(&SPARS_wrapper::default_clear) );
        
        }
        { //::ompl::geometric::SPARS::clearQuery
        
            typedef void ( ::ompl::geometric::SPARS::*clearQuery_function_type)(  ) ;
            
            SPARS_exposer.def( 
                "clearQuery"
                , clearQuery_function_type( &::ompl::geometric::SPARS::clearQuery ) );
        
        }
        { //::ompl::geometric::SPARS::computeDensePath
        
            typedef void ( SPARS_wrapper::*computeDensePath_function_type)( long unsigned int const,long unsigned int const,::std::deque< ompl::base::State* > & ) const;
            
            SPARS_exposer.def( 
                "computeDensePath"
                , computeDensePath_function_type( &SPARS_wrapper::computeDensePath )
                , ( bp::arg("start"), bp::arg("goal"), bp::arg("path") ) );
        
        }
        { //::ompl::geometric::SPARS::computeVPP
        
            typedef void ( SPARS_wrapper::*computeVPP_function_type)( long unsigned int,long unsigned int,::std::vector< unsigned long > & ) ;
            
            SPARS_exposer.def( 
                "computeVPP"
                , computeVPP_function_type( &SPARS_wrapper::computeVPP )
                , ( bp::arg("v"), bp::arg("vp"), bp::arg("VPPs") ) );
        
        }
        { //::ompl::geometric::SPARS::computeX
        
            typedef void ( SPARS_wrapper::*computeX_function_type)( long unsigned int,long unsigned int,long unsigned int,::std::vector< unsigned long > & ) ;
            
            SPARS_exposer.def( 
                "computeX"
                , computeX_function_type( &SPARS_wrapper::computeX )
                , ( bp::arg("v"), bp::arg("vp"), bp::arg("vpp"), bp::arg("Xs") ) );
        
        }
        { //::ompl::geometric::SPARS::connectDensePoints
        
            typedef void ( SPARS_wrapper::*connectDensePoints_function_type)( long unsigned int,long unsigned int ) ;
            
            SPARS_exposer.def( 
                "connectDensePoints"
                , connectDensePoints_function_type( &SPARS_wrapper::connectDensePoints )
                , ( bp::arg("v"), bp::arg("vp") ) );
        
        }
        { //::ompl::geometric::SPARS::connectSparsePoints
        
            typedef void ( SPARS_wrapper::*connectSparsePoints_function_type)( long unsigned int,long unsigned int ) ;
            
            SPARS_exposer.def( 
                "connectSparsePoints"
                , connectSparsePoints_function_type( &SPARS_wrapper::connectSparsePoints )
                , ( bp::arg("v"), bp::arg("vp") ) );
        
        }
        { //::ompl::geometric::SPARS::constructRoadmap
        
            typedef void ( ::ompl::geometric::SPARS::*constructRoadmap_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            SPARS_exposer.def( 
                "constructRoadmap"
                , constructRoadmap_function_type( &::ompl::geometric::SPARS::constructRoadmap )
                , ( bp::arg("ptc") ) );
        
        }
        { //::ompl::geometric::SPARS::constructRoadmap
        
            typedef void ( ::ompl::geometric::SPARS::*constructRoadmap_function_type)( ::ompl::base::PlannerTerminationCondition const &,bool ) ;
            
            SPARS_exposer.def( 
                "constructRoadmap"
                , constructRoadmap_function_type( &::ompl::geometric::SPARS::constructRoadmap )
                , ( bp::arg("ptc"), bp::arg("stopOnMaxFail") ) );
        
        }
        { //::ompl::geometric::SPARS::constructSolution
        
            typedef ::ompl::base::PathPtr ( SPARS_wrapper::*constructSolution_function_type)( long unsigned int const,long unsigned int const ) const;
            
            SPARS_exposer.def( 
                "constructSolution"
                , constructSolution_function_type( &SPARS_wrapper::constructSolution )
                , ( bp::arg("start"), bp::arg("goal") ) );
        
        }
        { //::ompl::geometric::SPARS::distanceFunction
        
            typedef double ( SPARS_wrapper::*distanceFunction_function_type)( long unsigned int const,long unsigned int const ) const;
            
            SPARS_exposer.def( 
                "distanceFunction"
                , distanceFunction_function_type( &SPARS_wrapper::distanceFunction )
                , ( bp::arg("a"), bp::arg("b") ) );
        
        }
        { //::ompl::geometric::SPARS::filterVisibleNeighbors
        
            typedef void ( SPARS_wrapper::*filterVisibleNeighbors_function_type)( ::ompl::base::State *,::std::vector< unsigned long > const &,::std::vector< unsigned long > & ) const;
            
            SPARS_exposer.def( 
                "filterVisibleNeighbors"
                , filterVisibleNeighbors_function_type( &SPARS_wrapper::filterVisibleNeighbors )
                , ( bp::arg("inState"), bp::arg("graphNeighborhood"), bp::arg("visibleNeighborhood") ) );
        
        }
        { //::ompl::geometric::SPARS::freeMemory
        
            typedef void ( SPARS_wrapper::*freeMemory_function_type)(  ) ;
            
            SPARS_exposer.def( 
                "freeMemory"
                , freeMemory_function_type( &SPARS_wrapper::freeMemory ) );
        
        }
        { //::ompl::geometric::SPARS::getDenseDeltaFraction
        
            typedef double ( ::ompl::geometric::SPARS::*getDenseDeltaFraction_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "getDenseDeltaFraction"
                , getDenseDeltaFraction_function_type( &::ompl::geometric::SPARS::getDenseDeltaFraction ) );
        
        }
        { //::ompl::geometric::SPARS::getDenseGraph
        
            typedef ::boost::adjacency_list< boost::vecS, boost::vecS, boost::undirectedS, boost::property< ompl::geometric::SPARS::vertex_state_t, ompl::base::State*, boost::property< boost::vertex_predecessor_t, unsigned long, boost::property< boost::vertex_rank_t, unsigned long, boost::property< ompl::geometric::SPARS::vertex_representative_t, unsigned long, boost::no_property > > > >, boost::property< boost::edge_weight_t, double, boost::no_property >, boost::no_property, boost::listS > const & ( ::ompl::geometric::SPARS::*getDenseGraph_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "getDenseGraph"
                , getDenseGraph_function_type( &::ompl::geometric::SPARS::getDenseGraph )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SPARS::getInterfaceNeighbor
        
            typedef long unsigned int ( SPARS_wrapper::*getInterfaceNeighbor_function_type)( long unsigned int,long unsigned int ) ;
            
            SPARS_exposer.def( 
                "getInterfaceNeighbor"
                , getInterfaceNeighbor_function_type( &SPARS_wrapper::getInterfaceNeighbor )
                , ( bp::arg("q"), bp::arg("rep") ) );
        
        }
        { //::ompl::geometric::SPARS::getInterfaceNeighborRepresentatives
        
            typedef void ( SPARS_wrapper::*getInterfaceNeighborRepresentatives_function_type)( long unsigned int,::std::set< long unsigned int > & ) ;
            
            SPARS_exposer.def( 
                "getInterfaceNeighborRepresentatives"
                , getInterfaceNeighborRepresentatives_function_type( &SPARS_wrapper::getInterfaceNeighborRepresentatives )
                , ( bp::arg("q"), bp::arg("interfaceRepresentatives") ) );
        
        }
        { //::ompl::geometric::SPARS::getInterfaceNeighborhood
        
            typedef void ( SPARS_wrapper::*getInterfaceNeighborhood_function_type)( long unsigned int,::std::vector< unsigned long > & ) ;
            
            SPARS_exposer.def( 
                "getInterfaceNeighborhood"
                , getInterfaceNeighborhood_function_type( &SPARS_wrapper::getInterfaceNeighborhood )
                , ( bp::arg("q"), bp::arg("interfaceNeighborhood") ) );
        
        }
        { //::ompl::geometric::SPARS::getIterations
        
            typedef long unsigned int ( ::ompl::geometric::SPARS::*getIterations_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "getIterations"
                , getIterations_function_type( &::ompl::geometric::SPARS::getIterations ) );
        
        }
        { //::ompl::geometric::SPARS::getMaxFailures
        
            typedef unsigned int ( ::ompl::geometric::SPARS::*getMaxFailures_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "getMaxFailures"
                , getMaxFailures_function_type( &::ompl::geometric::SPARS::getMaxFailures ) );
        
        }
        { //::ompl::geometric::SPARS::getPlannerData
        
            typedef void ( ::ompl::geometric::SPARS::*getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            typedef void ( SPARS_wrapper::*default_getPlannerData_function_type)( ::ompl::base::PlannerData & ) const;
            
            SPARS_exposer.def( 
                "getPlannerData"
                , getPlannerData_function_type(&::ompl::geometric::SPARS::getPlannerData)
                , default_getPlannerData_function_type(&SPARS_wrapper::default_getPlannerData)
                , ( bp::arg("data") ) );
        
        }
        { //::ompl::geometric::SPARS::getRoadmap
        
            typedef ::boost::adjacency_list< boost::vecS, boost::vecS, boost::undirectedS, boost::property< ompl::geometric::SPARS::vertex_state_t, ompl::base::State*, boost::property< boost::vertex_predecessor_t, unsigned long, boost::property< boost::vertex_rank_t, unsigned long, boost::property< ompl::geometric::SPARS::vertex_color_t, ompl::geometric::SPARS::GuardType, boost::property< ompl::geometric::SPARS::vertex_list_t, std::set< unsigned long >, boost::property< ompl::geometric::SPARS::vertex_interface_list_t, ompl::geometric::SPARS::InterfaceHashStruct, boost::no_property > > > > > >, boost::property< boost::edge_weight_t, double, boost::no_property >, boost::no_property, boost::listS > const & ( ::ompl::geometric::SPARS::*getRoadmap_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "getRoadmap"
                , getRoadmap_function_type( &::ompl::geometric::SPARS::getRoadmap )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::geometric::SPARS::getSparseDeltaFraction
        
            typedef double ( ::ompl::geometric::SPARS::*getSparseDeltaFraction_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "getSparseDeltaFraction"
                , getSparseDeltaFraction_function_type( &::ompl::geometric::SPARS::getSparseDeltaFraction ) );
        
        }
        { //::ompl::geometric::SPARS::getSparseNeighbors
        
            typedef void ( SPARS_wrapper::*getSparseNeighbors_function_type)( ::ompl::base::State *,::std::vector< unsigned long > & ) ;
            
            SPARS_exposer.def( 
                "getSparseNeighbors"
                , getSparseNeighbors_function_type( &SPARS_wrapper::getSparseNeighbors )
                , ( bp::arg("inState"), bp::arg("graphNeighborhood") ) );
        
        }
        { //::ompl::geometric::SPARS::getStretchFactor
        
            typedef double ( ::ompl::geometric::SPARS::*getStretchFactor_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "getStretchFactor"
                , getStretchFactor_function_type( &::ompl::geometric::SPARS::getStretchFactor ) );
        
        }
        { //::ompl::geometric::SPARS::guardCount
        
            typedef unsigned int ( ::ompl::geometric::SPARS::*guardCount_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "guardCount"
                , guardCount_function_type( &::ompl::geometric::SPARS::guardCount ) );
        
        }
        { //::ompl::geometric::SPARS::haveSolution
        
            typedef bool ( SPARS_wrapper::*haveSolution_function_type)( ::std::vector< unsigned long > const &,::std::vector< unsigned long > const &,::ompl::base::PathPtr & ) ;
            
            SPARS_exposer.def( 
                "haveSolution"
                , haveSolution_function_type( &SPARS_wrapper::haveSolution )
                , ( bp::arg("start"), bp::arg("goal"), bp::arg("solution") ) );
        
        }
        { //::ompl::geometric::SPARS::milestoneCount
        
            typedef unsigned int ( ::ompl::geometric::SPARS::*milestoneCount_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "milestoneCount"
                , milestoneCount_function_type( &::ompl::geometric::SPARS::milestoneCount ) );
        
        }
        { //::ompl::geometric::SPARS::reachedFailureLimit
        
            typedef bool ( ::ompl::geometric::SPARS::*reachedFailureLimit_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "reachedFailureLimit"
                , reachedFailureLimit_function_type( &::ompl::geometric::SPARS::reachedFailureLimit ) );
        
        }
        { //::ompl::geometric::SPARS::reachedTerminationCriterion
        
            typedef bool ( SPARS_wrapper::*reachedTerminationCriterion_function_type)(  ) const;
            
            SPARS_exposer.def( 
                "reachedTerminationCriterion"
                , reachedTerminationCriterion_function_type( &SPARS_wrapper::reachedTerminationCriterion ) );
        
        }
        { //::ompl::geometric::SPARS::removeFromRepresentatives
        
            typedef void ( SPARS_wrapper::*removeFromRepresentatives_function_type)( long unsigned int,long unsigned int ) ;
            
            SPARS_exposer.def( 
                "removeFromRepresentatives"
                , removeFromRepresentatives_function_type( &SPARS_wrapper::removeFromRepresentatives )
                , ( bp::arg("q"), bp::arg("rep") ) );
        
        }
        { //::ompl::geometric::SPARS::resetFailures
        
            typedef void ( SPARS_wrapper::*resetFailures_function_type)(  ) ;
            
            SPARS_exposer.def( 
                "resetFailures"
                , resetFailures_function_type( &SPARS_wrapper::resetFailures ) );
        
        }
        { //::ompl::geometric::SPARS::sameComponent
        
            typedef bool ( SPARS_wrapper::*sameComponent_function_type)( long unsigned int,long unsigned int ) ;
            
            SPARS_exposer.def( 
                "sameComponent"
                , sameComponent_function_type( &SPARS_wrapper::sameComponent )
                , ( bp::arg("m1"), bp::arg("m2") ) );
        
        }
        { //::ompl::geometric::SPARS::setDenseDeltaFraction
        
            typedef void ( ::ompl::geometric::SPARS::*setDenseDeltaFraction_function_type)( double ) ;
            
            SPARS_exposer.def( 
                "setDenseDeltaFraction"
                , setDenseDeltaFraction_function_type( &::ompl::geometric::SPARS::setDenseDeltaFraction )
                , ( bp::arg("d") ) );
        
        }
        { //::ompl::geometric::SPARS::setMaxFailures
        
            typedef void ( ::ompl::geometric::SPARS::*setMaxFailures_function_type)( unsigned int ) ;
            
            SPARS_exposer.def( 
                "setMaxFailures"
                , setMaxFailures_function_type( &::ompl::geometric::SPARS::setMaxFailures )
                , ( bp::arg("m") ) );
        
        }
        { //::ompl::geometric::SPARS::setProblemDefinition
        
            typedef void ( ::ompl::geometric::SPARS::*setProblemDefinition_function_type)( ::ompl::base::ProblemDefinitionPtr const & ) ;
            typedef void ( SPARS_wrapper::*default_setProblemDefinition_function_type)( ::ompl::base::ProblemDefinitionPtr const & ) ;
            
            SPARS_exposer.def( 
                "setProblemDefinition"
                , setProblemDefinition_function_type(&::ompl::geometric::SPARS::setProblemDefinition)
                , default_setProblemDefinition_function_type(&SPARS_wrapper::default_setProblemDefinition)
                , ( bp::arg("pdef") ) );
        
        }
        { //::ompl::geometric::SPARS::setSparseDeltaFraction
        
            typedef void ( ::ompl::geometric::SPARS::*setSparseDeltaFraction_function_type)( double ) ;
            
            SPARS_exposer.def( 
                "setSparseDeltaFraction"
                , setSparseDeltaFraction_function_type( &::ompl::geometric::SPARS::setSparseDeltaFraction )
                , ( bp::arg("d") ) );
        
        }
        { //::ompl::geometric::SPARS::setStretchFactor
        
            typedef void ( ::ompl::geometric::SPARS::*setStretchFactor_function_type)( double ) ;
            
            SPARS_exposer.def( 
                "setStretchFactor"
                , setStretchFactor_function_type( &::ompl::geometric::SPARS::setStretchFactor )
                , ( bp::arg("t") ) );
        
        }
        { //::ompl::geometric::SPARS::setup
        
            typedef void ( ::ompl::geometric::SPARS::*setup_function_type)(  ) ;
            typedef void ( SPARS_wrapper::*default_setup_function_type)(  ) ;
            
            SPARS_exposer.def( 
                "setup"
                , setup_function_type(&::ompl::geometric::SPARS::setup)
                , default_setup_function_type(&SPARS_wrapper::default_setup) );
        
        }
        { //::ompl::geometric::SPARS::solve
        
            typedef ::ompl::base::PlannerStatus ( ::ompl::geometric::SPARS::*solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            typedef ::ompl::base::PlannerStatus ( SPARS_wrapper::*default_solve_function_type)( ::ompl::base::PlannerTerminationCondition const & ) ;
            
            SPARS_exposer.def( 
                "solve"
                , solve_function_type(&::ompl::geometric::SPARS::solve)
                , default_solve_function_type(&SPARS_wrapper::default_solve)
                , ( bp::arg("ptc") ) );
        
        }
        { //::ompl::geometric::SPARS::sparseDistanceFunction
        
            typedef double ( SPARS_wrapper::*sparseDistanceFunction_function_type)( long unsigned int const,long unsigned int const ) const;
            
            SPARS_exposer.def( 
                "sparseDistanceFunction"
                , sparseDistanceFunction_function_type( &SPARS_wrapper::sparseDistanceFunction )
                , ( bp::arg("a"), bp::arg("b") ) );
        
        }
        { //::ompl::geometric::SPARS::updateRepresentatives
        
            typedef void ( SPARS_wrapper::*updateRepresentatives_function_type)( long unsigned int ) ;
            
            SPARS_exposer.def( 
                "updateRepresentatives"
                , updateRepresentatives_function_type( &SPARS_wrapper::updateRepresentatives )
                , ( bp::arg("v") ) );
        
        }
        SPARS_exposer.def("printDebug", &__printDebug);
        SPARS_exposer.def("solve", (::ompl::base::PlannerStatus(::ompl::base::Planner::*)( double ))(&::ompl::base::Planner::solve), (bp::arg("solveTime")) );
        SPARS_exposer.def("setProblemDefinition",&::ompl::base::Planner::setProblemDefinition,
                            &SPARS_wrapper::default_setProblemDefinition, (bp::arg("pdef")) );
        SPARS_exposer.def("checkValidity",&::ompl::base::Planner::checkValidity,
                        &SPARS_wrapper::default_checkValidity );
    }

}