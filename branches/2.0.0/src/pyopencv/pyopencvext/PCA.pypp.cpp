// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "PCA.pypp.hpp"

namespace bp = boost::python;

void register_PCA_class(){

    bp::class_< cv::PCA >( "PCA", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::PCA >() )    
        .def( bp::init< cv::Mat const &, cv::Mat const &, int, bp::optional< int > >(( bp::arg("data"), bp::arg("mean"), bp::arg("flags"), bp::arg("maxComponents")=(int)(0) )) )    
        .def( 
            "backProject"
            , (::cv::Mat ( ::cv::PCA::* )( ::cv::Mat const & ) const)( &::cv::PCA::backProject )
            , ( bp::arg("vec") ) )    
        .def( 
            "backProject"
            , (void ( ::cv::PCA::* )( ::cv::Mat const &,::cv::Mat & ) const)( &::cv::PCA::backProject )
            , ( bp::arg("vec"), bp::arg("result") ) )    
        .def( 
            "__call__"
            , (::cv::PCA & ( ::cv::PCA::* )( ::cv::Mat const &,::cv::Mat const &,int,int ) )( &::cv::PCA::operator() )
            , ( bp::arg("data"), bp::arg("mean"), bp::arg("flags"), bp::arg("maxComponents")=(int)(0) )
            , bp::return_self< >() )    
        .def( 
            "project"
            , (::cv::Mat ( ::cv::PCA::* )( ::cv::Mat const & ) const)( &::cv::PCA::project )
            , ( bp::arg("vec") ) )    
        .def( 
            "project"
            , (void ( ::cv::PCA::* )( ::cv::Mat const &,::cv::Mat & ) const)( &::cv::PCA::project )
            , ( bp::arg("vec"), bp::arg("result") ) )    
        .def_readwrite( "eigenvalues", &cv::PCA::eigenvalues )    
        .def_readwrite( "eigenvectors", &cv::PCA::eigenvectors )    
        .def_readwrite( "mean", &cv::PCA::mean );

}