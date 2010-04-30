// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "MSER.pypp.hpp"

namespace bp = boost::python;

static boost::python::object __call___3db7f85e36cc2236e94ccc0caba03336( ::cv::MSER const & inst, ::cv::Mat const & image, ::cv::Mat const & mask ){
    ::std::vector< std::vector< cv::Point_<int> > > msers2;
    bp::list msers3;
    inst.operator()(image, msers2, mask);
    convert_from_T_to_object(msers2, msers3);
    return bp::object( msers3 );
}

void register_MSER_class(){

    bp::class_< cv::MSER, bp::bases< CvMSERParams > >( "MSER", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::MSER >() )    
        .def( bp::init< int, int, int, float, float, int, double, double, int >(( bp::arg("_delta"), bp::arg("_min_area"), bp::arg("_max_area"), bp::arg("_max_variation"), bp::arg("_min_diversity"), bp::arg("_max_evolution"), bp::arg("_area_threshold"), bp::arg("_min_margin"), bp::arg("_edge_blur_size") )) )    
        .def( 
            "__call__"
            , (boost::python::object (*)( ::cv::MSER const &,::cv::Mat const &,::cv::Mat const & ))( &__call___3db7f85e36cc2236e94ccc0caba03336 )
            , ( bp::arg("inst"), bp::arg("image"), bp::arg("mask") )
            , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'msers':"\
    "\n    C/C++ type: ::std::vector< std::vector< cv::Point_<int> > > &."\
    "\n    Python type: list of Mat, e.g. [Mat(), Mat(), Mat()]."\
    "\n    Invoke asMat() to convert every 1D Python sequence into a Mat, e.g. "\
    "\n    [asMat([0,1,2]), asMat((0,1,2)]."\
    "\n    Output argument: omitted from the function's calling sequence, and is "\
    "\n    returned along with the function's return value (if any)." );

}