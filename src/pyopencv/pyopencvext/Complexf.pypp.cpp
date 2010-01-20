// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "complexf.pypp.hpp"

namespace bp = boost::python;

void register_Complexf_class(){

    bp::class_< cv::Complex< float > >( "Complexf", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Complex< float > >() )    
        .def( bp::init< float, bp::optional< float > >(( bp::arg("_re"), bp::arg("_im")=0 )) )    
        .def( 
            "conj"
            , (::cv::Complex< float > ( ::cv::Complex<float>::* )(  ) const)( &::cv::Complex< float >::conj ) )    
        .def_readwrite( "im", &cv::Complex< float >::im )    
        .def_readwrite( "re", &cv::Complex< float >::re );

}