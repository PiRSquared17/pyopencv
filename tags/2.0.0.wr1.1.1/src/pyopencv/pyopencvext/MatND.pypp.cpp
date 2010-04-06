// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__array_1.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/make_function.hpp"
#include "opencv_converters.hpp"
#include "boost/python/str.hpp"
#include "ndarray.hpp"
#include "MatND.pypp.hpp"

namespace bp = boost::python;

struct MatND_wrapper : cv::MatND, bp::wrapper< cv::MatND > {

    MatND_wrapper( )
    : cv::MatND( )
      , bp::wrapper< cv::MatND >(){
        // null constructor
    
    }

    MatND_wrapper(::cv::MatND const & m )
    : cv::MatND( boost::ref(m) )
      , bp::wrapper< cv::MatND >(){
        // copy constructor
    
    }

    static void create( ::cv::MatND & inst, cv::Mat const & _sizes, int _type ){
        int _sizes2;
        int * _sizes3;
        convert_from_Mat_to_array_of_T(_sizes, _sizes3, _sizes2);
        inst.create(_sizes2, _sizes3, _type);
    }

    static boost::python::object reshape( ::cv::MatND const & inst, int _newcn, cv::Mat _newsz=cv::Mat() ){
        int _newsz2;
        int * _newsz3;
        convert_from_Mat_to_array_of_T(_newsz, _newsz3, _newsz2);
        ::cv::MatND result = inst.reshape(_newcn, _newsz2, _newsz3);
        return bp::object( result );
    }

    static pyplusplus::containers::static_sized::array_1_t< int, 32>
    pyplusplus_size_wrapper( ::cv::MatND & inst ){
        return pyplusplus::containers::static_sized::array_1_t< int, 32>( inst.size );
    }

    static pyplusplus::containers::static_sized::array_1_t< unsigned int, 32>
    pyplusplus_step_wrapper( ::cv::MatND & inst ){
        return pyplusplus::containers::static_sized::array_1_t< unsigned int, 32>( inst.step );
    }

};

static boost::shared_ptr<cv::MatND> MatND__init1__(cv::Mat const &_sizes, int _type)
{
    int* _sizes2; int _sizes3; convert_from_Mat_to_array_of_T(_sizes, _sizes2, _sizes3);
    return boost::shared_ptr<cv::MatND>(new cv::MatND(_sizes3, _sizes2, _type));
}

static boost::shared_ptr<cv::MatND> MatND__init2__(cv::Mat const &_sizes, int _type, const cv::Scalar& _s)
{
    int* _sizes2; int _sizes3; convert_from_Mat_to_array_of_T(_sizes, _sizes2, _sizes3);
    return boost::shared_ptr<cv::MatND>(new cv::MatND(_sizes3, _sizes2, _type, _s));
}

static boost::shared_ptr<cv::MatND> MatND__init3__(const cv::MatND& m, cv::Mat const &_ranges)
{
    cv::Range* _ranges2; int _ranges3; convert_from_Mat_to_array_of_T(_ranges, _ranges2, _ranges3);
    return boost::shared_ptr<cv::MatND>(new cv::MatND(m, _ranges2));
}

static cv::MatND MatND__call__(const cv::MatND& inst, cv::Mat const &ranges)
{
    cv::Range* ranges2; int ranges3; convert_from_Mat_to_array_of_T(ranges, ranges2, ranges3);
    return inst(ranges2);
}

static bp::object get_data(cv::MatND const &inst)
{
    return bp::object(bp::handle<>(PyBuffer_FromReadWriteMemory ((void*)inst.data, inst.size[inst.dims-1]*inst.step[inst.dims-1])));
}

void register_MatND_class(){

    { //::cv::MatND
        typedef bp::class_< MatND_wrapper > MatND_exposer_t;
        MatND_exposer_t MatND_exposer = MatND_exposer_t( "MatND", bp::init< >() );
        bp::scope MatND_scope( MatND_exposer );
        MatND_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::MatND >() );
        bp::scope().attr("MAGIC_VAL") = (int)cv::MatND::MAGIC_VAL;
        bp::scope().attr("AUTO_STEP") = (int)cv::MatND::AUTO_STEP;
        bp::scope().attr("CONTINUOUS_FLAG") = (int)cv::MatND::CONTINUOUS_FLAG;
        bp::scope().attr("MAX_DIM") = (int)cv::MatND::MAX_DIM;
        MatND_exposer.def( bp::init< cv::MatND const & >(( bp::arg("m") )) );
        { //::cv::MatND::addref
        
            typedef void ( ::cv::MatND::*addref_function_type )(  ) ;
            
            MatND_exposer.def( 
                "addref"
                , addref_function_type( &::cv::MatND::addref ) );
        
        }
        { //::cv::MatND::assignTo
        
            typedef void ( ::cv::MatND::*assignTo_function_type )( ::cv::MatND &,int ) const;
            
            MatND_exposer.def( 
                "assignTo"
                , assignTo_function_type( &::cv::MatND::assignTo )
                , ( bp::arg("m"), bp::arg("type") ) );
        
        }
        { //::cv::MatND::channels
        
            typedef int ( ::cv::MatND::*channels_function_type )(  ) const;
            
            MatND_exposer.def( 
                "channels"
                , channels_function_type( &::cv::MatND::channels ) );
        
        }
        { //::cv::MatND::clone
        
            typedef ::cv::MatND ( ::cv::MatND::*clone_function_type )(  ) const;
            
            MatND_exposer.def( 
                "clone"
                , clone_function_type( &::cv::MatND::clone ) );
        
        }
        { //::cv::MatND::convertTo
        
            typedef void ( ::cv::MatND::*convertTo_function_type )( ::cv::MatND &,int,double,double ) const;
            
            MatND_exposer.def( 
                "convertTo"
                , convertTo_function_type( &::cv::MatND::convertTo )
                , ( bp::arg("m"), bp::arg("rtype"), bp::arg("alpha")=1, bp::arg("beta")=0 ) );
        
        }
        { //::cv::MatND::copyTo
        
            typedef void ( ::cv::MatND::*copyTo_function_type )( ::cv::MatND & ) const;
            
            MatND_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::MatND::copyTo )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::MatND::copyTo
        
            typedef void ( ::cv::MatND::*copyTo_function_type )( ::cv::MatND &,::cv::MatND const & ) const;
            
            MatND_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::MatND::copyTo )
                , ( bp::arg("m"), bp::arg("mask") ) );
        
        }
        { //::cv::MatND::create
        
            typedef void ( *create_function_type )( ::cv::MatND &,cv::Mat const &,int );
            
            MatND_exposer.def( 
                "create"
                , create_function_type( &MatND_wrapper::create )
                , ( bp::arg("inst"), bp::arg("_sizes"), bp::arg("_type") )
                , "\nArgument '_ndims':"\
    "\n    Dependent argument: omitted from the function's calling sequence, as "\
    "\n    its value is derived from argument '_sizes'."\
    "\nArgument '_sizes':"\
    "\n    C/C++ type: int const *."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))." );
        
        }
        { //::cv::MatND::depth
        
            typedef int ( ::cv::MatND::*depth_function_type )(  ) const;
            
            MatND_exposer.def( 
                "depth"
                , depth_function_type( &::cv::MatND::depth ) );
        
        }
        { //::cv::MatND::elemSize
        
            typedef ::size_t ( ::cv::MatND::*elemSize_function_type )(  ) const;
            
            MatND_exposer.def( 
                "elemSize"
                , elemSize_function_type( &::cv::MatND::elemSize ) );
        
        }
        { //::cv::MatND::elemSize1
        
            typedef ::size_t ( ::cv::MatND::*elemSize1_function_type )(  ) const;
            
            MatND_exposer.def( 
                "elemSize1"
                , elemSize1_function_type( &::cv::MatND::elemSize1 ) );
        
        }
        { //::cv::MatND::isContinuous
        
            typedef bool ( ::cv::MatND::*isContinuous_function_type )(  ) const;
            
            MatND_exposer.def( 
                "isContinuous"
                , isContinuous_function_type( &::cv::MatND::isContinuous ) );
        
        }
        MatND_exposer.def( "as__scope_cv_scope_Mat", &cv::MatND::operator ::cv::Mat , "\nWrapped function:"
    "\n    operator ::cv::Mat" );
        { //::cv::MatND::operator=
        
            typedef ::cv::MatND & ( ::cv::MatND::*assign_function_type )( ::cv::MatND const & ) ;
            
            MatND_exposer.def( 
                "assign"
                , assign_function_type( &::cv::MatND::operator= )
                , ( bp::arg("m") )
                , bp::return_self< >()
                , "\nWrapped function:"
    "\n    operator=" );
        
        }
        { //::cv::MatND::operator=
        
            typedef ::cv::MatND & ( ::cv::MatND::*assign_function_type )( ::cv::Scalar const & ) ;
            
            MatND_exposer.def( 
                "assign"
                , assign_function_type( &::cv::MatND::operator= )
                , ( bp::arg("s") )
                , bp::return_self< >()
                , "\nWrapped function:"
    "\n    operator=" );
        
        }
        { //::cv::MatND::release
        
            typedef void ( ::cv::MatND::*release_function_type )(  ) ;
            
            MatND_exposer.def( 
                "release"
                , release_function_type( &::cv::MatND::release ) );
        
        }
        { //::cv::MatND::reshape
        
            typedef boost::python::object ( *reshape_function_type )( ::cv::MatND const &,int,cv::Mat );
            
            MatND_exposer.def( 
                "reshape"
                , reshape_function_type( &MatND_wrapper::reshape )
                , ( bp::arg("inst"), bp::arg("_newcn"), bp::arg("_newsz")=cv::Mat() )
                , "\nArgument '_newsz':"\
    "\n    C/C++ type: int const *."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))."\
    "\nArgument '_newndims':"\
    "\n    Dependent argument: omitted from the function's calling sequence, as "\
    "\n    its value is derived from argument '_newsz'." );
        
        }
        { //::cv::MatND::setTo
        
            typedef ::cv::MatND & ( ::cv::MatND::*setTo_function_type )( ::cv::Scalar const &,::cv::MatND const & ) ;
            
            MatND_exposer.def( 
                "setTo"
                , setTo_function_type( &::cv::MatND::setTo )
                , ( bp::arg("s"), bp::arg("mask")=cv::MatND() )
                , bp::return_self< >() );
        
        }
        { //::cv::MatND::step1
        
            typedef ::size_t ( ::cv::MatND::*step1_function_type )( int ) const;
            
            MatND_exposer.def( 
                "step1"
                , step1_function_type( &::cv::MatND::step1 )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::MatND::type
        
            typedef int ( ::cv::MatND::*type_function_type )(  ) const;
            
            MatND_exposer.def( 
                "type"
                , type_function_type( &::cv::MatND::type ) );
        
        }
        MatND_exposer.def_readwrite( "dims", &cv::MatND::dims );
        MatND_exposer.def_readwrite( "flags", &cv::MatND::flags );
        { //cv::MatND::size [variable], type=int[32]
        
            typedef pyplusplus::containers::static_sized::array_1_t< int, 32> ( *array_wrapper_creator )( ::cv::MatND & );
            
            MatND_exposer.add_property( "size"
                , bp::make_function( array_wrapper_creator(&MatND_wrapper::pyplusplus_size_wrapper)
                                    , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
        }
        pyplusplus::containers::static_sized::register_array_1< unsigned int, 32 >( "__array_1_unsigned_int_32" );
        { //cv::MatND::step [variable], type=size_t[32]
        
            typedef pyplusplus::containers::static_sized::array_1_t< unsigned int, 32> ( *array_wrapper_creator )( ::cv::MatND & );
            
            MatND_exposer.add_property( "step"
                , bp::make_function( array_wrapper_creator(&MatND_wrapper::pyplusplus_step_wrapper)
                                    , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
        }
        MatND_exposer.def("__init__", bp::make_constructor(&MatND__init1__, bp::default_call_policies(), ( bp::arg("_sizes"), bp::arg("_type") )), "Use asMat() to convert '_sizes' from a Python sequence to a Mat.");
        MatND_exposer.def("__init__", bp::make_constructor(&MatND__init2__, bp::default_call_policies(), ( bp::arg("_sizes"), bp::arg("_type"), bp::arg("s") )), "Use asMat() to convert '_sizes' from a Python sequence to a Mat.");
        MatND_exposer.def("__init__", bp::make_constructor(&MatND__init3__, bp::default_call_policies(), ( bp::arg("m"), bp::arg("_ranges") )), "Use asMat() to convert '_ranges' from a Python sequence to a Mat.");
        MatND_exposer.def("__call__", bp::make_function(&MatND__call__, bp::default_call_policies(), (bp::arg("ranges"))), "Use asMat() to convert 'ranges' from a Python sequence to a Mat.");
        MatND_exposer.add_property("data", ::get_data);
        MatND_exposer.def("from_ndarray", &bp::from_ndarray< cv::MatND >, (bp::arg("arr")) );
        MatND_exposer.staticmethod("from_ndarray");
        MatND_exposer.add_property("ndarray", &bp::as_ndarray< cv::MatND >);
    }

}
