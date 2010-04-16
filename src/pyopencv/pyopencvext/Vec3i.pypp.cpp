// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Vec3i.pypp.hpp"

namespace bp = boost::python;

void register_Vec3i_class(){

    { //::cv::Vec< int, 3 >
        typedef bp::class_< cv::Vec< int, 3 > > Vec3i_exposer_t;
        Vec3i_exposer_t Vec3i_exposer = Vec3i_exposer_t( "Vec3i", bp::init< >() );
        bp::scope Vec3i_scope( Vec3i_exposer );
        Vec3i_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< int, 3 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<int, 3>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<int, 3>::channels;
        bp::scope().attr("type") = (int)cv::Vec<int, 3>::type;
        Vec3i_exposer.def( bp::init< int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< int, cv::Vec< int, 3 > >();
        Vec3i_exposer.def( bp::init< int, int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec3i_exposer.def( bp::init< int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec3i_exposer.def( bp::init< cv::Vec< int, 3 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< int, 3 >::all
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef ::cv::Vec< int, 3 > ( *all_function_type )( int );
            
            Vec3i_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< int, 3 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< int, 3 >::cross
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef ::cv::Vec< int, 3 > ( exported_class_t::*cross_function_type )( ::cv::Vec< int, 3 > const & ) const;
            
            Vec3i_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< int, 3 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 3 >::ddot
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< int, 3 > const & ) const;
            
            Vec3i_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< int, 3 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 3 >::dot
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef int ( exported_class_t::*dot_function_type )( ::cv::Vec< int, 3 > const & ) const;
            
            Vec3i_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< int, 3 >::dot )
                , ( bp::arg("v") ) );
        
        }
        Vec3i_exposer.def( "__temp_func", &cv::Vec< int, 3 >::operator ::CvScalar  );
        { //::cv::Vec< int, 3 >::operator[]
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec3i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 3 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::Vec< int, 3 >::operator[]
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec3i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 3 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        Vec3i_exposer.staticmethod( "all" );
        Vec3i_exposer.def("from_ndarray", &bp::from_ndarray< cv::Vec3i >, (bp::arg("arr")) );
        Vec3i_exposer.staticmethod("from_ndarray");
        Vec3i_exposer.add_property("ndarray", &bp::as_ndarray< cv::Vec3i >);
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3b>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3b>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3s>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3s>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3w>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3w>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3i>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3i>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3f>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3f>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3d>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3d>, bp::return_self<>() );
        Vec3i_exposer.def("__add__", &__add__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__sub__", &__sub__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__eq__", &__eq__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__ne__", &__ne__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__imul__", &__imul__<cv::Vec3i, int>, bp::return_self<>() );
        Vec3i_exposer.def("__mul__", &__mul__<cv::Vec3i, int> );
        Vec3i_exposer.def("__rmul__", &__rmul__<int, cv::Vec3i> );
        Vec3i_exposer.def("__neg__", &__neg__<cv::Vec3i> );
    }

}
