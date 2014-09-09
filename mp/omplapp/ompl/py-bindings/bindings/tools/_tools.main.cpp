// This file has been generated by Py++.

#include "boost/python.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "bindings/tools.h"

#include "bindings/tools/Benchmark.pypp.hpp"

#include "bindings/tools/OptimizePlan.pypp.hpp"

#include "bindings/tools/ParallelPlan.pypp.hpp"

#include "bindings/tools/SelfConfig.pypp.hpp"

#include "bindings/tools/_tools_free_functions.pypp.hpp"

#include "bindings/tools/_tools_global_variables.pypp.hpp"

#include "bindings/tools/vectorPlannerExperiment.pypp.hpp"

#include "bindings/tools/vectorRunProgressData.pypp.hpp"

namespace bp = boost::python;

PYDECLARE_FUNCTION(void(const ompl::base::PlannerPtr&),PreSetupEvent)

PYDECLARE_FUNCTION(void(const ompl::base::PlannerPtr&, ompl::tools::Benchmark::RunProperties&),PostSetupEvent)

BOOST_PYTHON_MODULE(_tools){
    PyEval_InitThreads();

    register_vectorRunProgressData_class();

    register_vectorPlannerExperiment_class();

    register_Benchmark_class();

    register_OptimizePlan_class();

    register_ParallelPlan_class();

    register_SelfConfig_class();

    PYREGISTER_FUNCTION(void(const ompl::base::PlannerPtr&),PreSetupEvent,"Pre-setup event")

    PYREGISTER_FUNCTION(void(const ompl::base::PlannerPtr&, ompl::tools::Benchmark::RunProperties&),PostSetupEvent,"Post-setup event")

    register_global_variables();

    register_free_functions();
}
