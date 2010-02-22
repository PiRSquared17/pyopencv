// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "CvKNearest.pypp.hpp"

namespace bp = boost::python;

struct CvKNearest_wrapper : CvKNearest, bp::wrapper< CvKNearest > {

    CvKNearest_wrapper(CvKNearest const & arg )
    : CvKNearest( arg )
      , bp::wrapper< CvKNearest >(){
        // copy constructor
        
    }

    CvKNearest_wrapper( )
    : CvKNearest( )
      , bp::wrapper< CvKNearest >(){
        // null constructor
    
    }

    CvKNearest_wrapper(::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _sample_idx=cv::Mat(), bool _is_regression=false, int max_k=32 )
    : CvKNearest( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), _is_regression, max_k )
      , bp::wrapper< CvKNearest >(){
        // constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvKNearest::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvKNearest::clear( );
    }

    virtual bool train( ::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _sample_idx=cv::Mat(), bool is_regression=false, int _max_k=32, bool _update_base=false ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), is_regression, _max_k, _update_base );
        else{
            return this->CvKNearest::train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), is_regression, _max_k, _update_base );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, ::cv::Mat const & _responses, ::cv::Mat const & _sample_idx=cv::Mat(), bool is_regression=false, int _max_k=32, bool _update_base=false ) {
        return CvKNearest::train( boost::ref(_train_data), boost::ref(_responses), boost::ref(_sample_idx), is_regression, _max_k, _update_base );
    }

    virtual void load( char const * filename, char const * name=0 ) {
        if( bp::override func_load = this->get_override( "load" ) )
            func_load( filename, name );
        else{
            this->CvStatModel::load( filename, name );
        }
    }
    
    void default_load( char const * filename, char const * name=0 ) {
        CvStatModel::load( filename, name );
    }

    virtual void read( ::CvFileStorage * storage, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), storage, node );
        }
        else{
            CvStatModel::read( boost::python::ptr(storage), boost::python::ptr(node) );
        }
    }
    
    static void default_read( ::CvStatModel & inst, ::cv::FileStorage & storage, ::cv::FileNode & node ){
        if( dynamic_cast< CvKNearest_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvStatModel::read(storage.fs, *(node));
        }
        else{
            inst.read(storage.fs, *(node));
        }
    }

    virtual void save( char const * filename, char const * name=0 ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, name );
        else{
            this->CvStatModel::save( filename, name );
        }
    }
    
    void default_save( char const * filename, char const * name=0 ) const  {
        CvStatModel::save( filename, name );
    }

    virtual void write( ::CvFileStorage * storage, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), storage, name );
        }
        else{
            CvStatModel::write( boost::python::ptr(storage), name );
        }
    }
    
    static void default_write( ::CvStatModel const & inst, ::cv::FileStorage & storage, char const * name ){
        if( dynamic_cast< CvKNearest_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvStatModel::write(storage.fs, name);
        }
        else{
            inst.write(storage.fs, name);
        }
    }

    bp::object sd_find_nearest( cv::Mat const & _samples, int k, cv::Mat &results, 
        bool return_neighbors_by_addr, cv::Mat &neighbor_responses, cv::Mat &dist ) {
        CvMat *_samples2 = _samples.empty()? 0: &(::CvMat)_samples;
        std::vector<int> neighbors2;
        CvMat *results2 = results.empty()? 0: &(::CvMat)results;
        CvMat *neighbor_responses2 = neighbor_responses.empty()? 0: &(::CvMat)neighbor_responses;
        CvMat *dist2 = dist.empty()? 0: &(::CvMat)dist;
        if(!return_neighbors_by_addr) return bp::object(find_nearest(_samples2, k, results2, 0, neighbor_responses2, dist2));
        neighbors2.resize(k*_samples.rows);
        float return_value = find_nearest(_samples2, k, results2, (const float **)&neighbors2[0], neighbor_responses2, dist2);
        return bp::make_tuple(bp::object(return_value), convert_vector_to_seq(neighbors2));
    }

};

void register_CvKNearest_class(){

    bp::class_< CvKNearest_wrapper, bp::bases< CvStatModel > >( "CvKNearest", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvKNearest >() )    
        .def( bp::init< cv::Mat const &, cv::Mat const &, bp::optional< cv::Mat const &, bool, int > >(( bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_is_regression")=(bool)(false), bp::arg("max_k")=(int)(32) )) )    
        .def( 
            "clear"
            , (void ( ::CvKNearest::* )(  ) )(&::CvKNearest::clear)
            , (void ( CvKNearest_wrapper::* )(  ) )(&CvKNearest_wrapper::default_clear) )    
        .def( 
            "get_max_k"
            , (int ( ::CvKNearest::* )(  ) const)( &::CvKNearest::get_max_k ) )    
        .def( 
            "get_sample_count"
            , (int ( ::CvKNearest::* )(  ) const)( &::CvKNearest::get_sample_count ) )    
        .def( 
            "get_var_count"
            , (int ( ::CvKNearest::* )(  ) const)( &::CvKNearest::get_var_count ) )    
        .def( 
            "is_regression"
            , (bool ( ::CvKNearest::* )(  ) const)( &::CvKNearest::is_regression ) )    
        .def( 
            "train"
            , (bool ( ::CvKNearest::* )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,bool,int,bool ) )(&::CvKNearest::train)
            , (bool ( CvKNearest_wrapper::* )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,bool,int,bool ) )(&CvKNearest_wrapper::default_train)
            , ( bp::arg("_train_data"), bp::arg("_responses"), bp::arg("_sample_idx")=cv::Mat(), bp::arg("is_regression")=(bool)(false), bp::arg("_max_k")=(int)(32), bp::arg("_update_base")=(bool)(false) ) )    
        .def( 
            "load"
            , (void ( ::CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvKNearest_wrapper::* )( char const *,char const * ) )(&CvKNearest_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "read"
            , (void (*)( ::CvStatModel &,::cv::FileStorage &,::cv::FileNode & ))( &CvKNearest_wrapper::default_read )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("node") ) )    
        .def( 
            "save"
            , (void ( ::CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvKNearest_wrapper::* )( char const *,char const * ) const)(&CvKNearest_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "write"
            , (void (*)( ::CvStatModel const &,::cv::FileStorage &,char const * ))( &CvKNearest_wrapper::default_write )
            , ( bp::arg("inst"), bp::arg("storage"), bp::arg("name") ) )    
        .def("find_nearest", &CvKNearest_wrapper::sd_find_nearest
        , (bp::arg("_samples"), bp::arg("k"), bp::arg("results"), bp::arg("return_neighbors_by_addr")=false, bp::arg("neighbor_response")=cv::Mat(), bp::arg("dist")=cv::Mat() ));

}
