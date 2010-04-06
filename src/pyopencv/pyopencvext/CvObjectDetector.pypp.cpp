// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvObjectDetector.pypp.hpp"

namespace bp = boost::python;

static void Detect_d8fa7b620f024b1a2f20fc4afa978e15( ::CvObjectDetector & inst, ::cv::Mat & arg0, ::CvBlobSeq * arg1=0 ){
    inst.Detect(get_CvMat_ptr(arg0), arg1);
}

void register_CvObjectDetector_class(){

    { //::CvObjectDetector
        typedef bp::class_< CvObjectDetector > CvObjectDetector_exposer_t;
        CvObjectDetector_exposer_t CvObjectDetector_exposer = CvObjectDetector_exposer_t( "CvObjectDetector", bp::init< bp::optional< char const * > >(( bp::arg("arg0")=bp::object() )) );
        bp::scope CvObjectDetector_scope( CvObjectDetector_exposer );
        CvObjectDetector_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvObjectDetector >() );
        bp::implicitly_convertible< char const *, CvObjectDetector >();
        { //::CvObjectDetector::Detect
        
            typedef void ( *Detect_function_type )( ::CvObjectDetector &,::cv::Mat &,::CvBlobSeq * );
            
            CvObjectDetector_exposer.def( 
                "Detect"
                , Detect_function_type( &Detect_d8fa7b620f024b1a2f20fc4afa978e15 )
                , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1")=bp::object() )
                , "\nArgument 'arg0' is a Mat instead of a pointer to CvMat." );
        
        }
        { //::CvObjectDetector::GetMaxBorderSize
        
            typedef int ( ::CvObjectDetector::*GetMaxBorderSize_function_type )(  ) const;
            
            CvObjectDetector_exposer.def( 
                "GetMaxBorderSize"
                , GetMaxBorderSize_function_type( &::CvObjectDetector::GetMaxBorderSize ) );
        
        }
        { //::CvObjectDetector::GetMinWindowSize
        
            typedef ::CvSize ( ::CvObjectDetector::*GetMinWindowSize_function_type )(  ) const;
            
            CvObjectDetector_exposer.def( 
                "GetMinWindowSize"
                , GetMinWindowSize_function_type( &::CvObjectDetector::GetMinWindowSize ) );
        
        }
        { //::CvObjectDetector::Load
        
            typedef bool ( ::CvObjectDetector::*Load_function_type )( char const * ) ;
            
            CvObjectDetector_exposer.def( 
                "Load"
                , Load_function_type( &::CvObjectDetector::Load )
                , ( bp::arg("arg0")=bp::object() ) );
        
        }
    }

}
