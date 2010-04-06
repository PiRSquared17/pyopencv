// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "CvSubdiv2D.pypp.hpp"

namespace bp = boost::python;

static ::CvSeq * get_h_prev( ::CvSubdiv2D const & inst ) { return inst.h_prev; }

static ::CvSeq * get_h_next( ::CvSubdiv2D const & inst ) { return inst.h_next; }

static ::CvSeq * get_v_prev( ::CvSubdiv2D const & inst ) { return inst.v_prev; }

static ::CvSeq * get_v_next( ::CvSubdiv2D const & inst ) { return inst.v_next; }

static ::CvMemStorage * get_storage( ::CvSubdiv2D const & inst ) { return inst.storage; }

static ::CvSeqBlock * get_free_blocks( ::CvSubdiv2D const & inst ) { return inst.free_blocks; }

static ::CvSeqBlock * get_first( ::CvSubdiv2D const & inst ) { return inst.first; }

static bp::object get_block_max( ::CvSubdiv2D const & inst ){        
    return inst.block_max? bp::str(inst.block_max): bp::object();
}

static bp::object get_ptr( ::CvSubdiv2D const & inst ){        
    return inst.ptr? bp::str(inst.ptr): bp::object();
}

static ::CvSetElem * get_free_elems( ::CvSubdiv2D const & inst ) { return inst.free_elems; }

static ::CvSet * get_edges( ::CvSubdiv2D const & inst ) { return inst.edges; }

void register_CvSubdiv2D_class(){

    bp::class_< CvSubdiv2D >( "CvSubdiv2D" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSubdiv2D >() )    
        .def_readwrite( "active_count", &CvSubdiv2D::active_count )    
        .def_readwrite( "bottomright", &CvSubdiv2D::bottomright )    
        .def_readwrite( "delta_elems", &CvSubdiv2D::delta_elems )    
        .def_readwrite( "elem_size", &CvSubdiv2D::elem_size )    
        .def_readwrite( "flags", &CvSubdiv2D::flags )    
        .def_readwrite( "header_size", &CvSubdiv2D::header_size )    
        .def_readwrite( "is_geometry_valid", &CvSubdiv2D::is_geometry_valid )    
        .def_readwrite( "quad_edges", &CvSubdiv2D::quad_edges )    
        .def_readwrite( "recent_edge", &CvSubdiv2D::recent_edge )    
        .def_readwrite( "topleft", &CvSubdiv2D::topleft )    
        .def_readwrite( "total", &CvSubdiv2D::total )    
        .add_property( "h_prev", bp::make_function(&::get_h_prev, bp::return_internal_reference<>()) )    
        .add_property( "h_next", bp::make_function(&::get_h_next, bp::return_internal_reference<>()) )    
        .add_property( "v_prev", bp::make_function(&::get_v_prev, bp::return_internal_reference<>()) )    
        .add_property( "v_next", bp::make_function(&::get_v_next, bp::return_internal_reference<>()) )    
        .add_property( "storage", bp::make_function(&::get_storage, bp::return_internal_reference<>()) )    
        .add_property( "free_blocks", bp::make_function(&::get_free_blocks, bp::return_internal_reference<>()) )    
        .add_property( "first", bp::make_function(&::get_first, bp::return_internal_reference<>()) )    
        .add_property( "block_max", &::get_block_max )    
        .add_property( "ptr", &::get_ptr )    
        .add_property( "free_elems", bp::make_function(&::get_free_elems, bp::return_internal_reference<>()) )    
        .add_property( "edges", bp::make_function(&::get_edges, bp::return_internal_reference<>()) );

}
