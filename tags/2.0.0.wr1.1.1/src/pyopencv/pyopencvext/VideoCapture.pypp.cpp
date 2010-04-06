// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "VideoCapture.pypp.hpp"

namespace bp = boost::python;

struct VideoCapture_wrapper : cv::VideoCapture, bp::wrapper< cv::VideoCapture > {

    VideoCapture_wrapper(cv::VideoCapture const & arg )
    : cv::VideoCapture( arg )
      , bp::wrapper< cv::VideoCapture >(){
        // copy constructor
        
    }

    VideoCapture_wrapper( )
    : cv::VideoCapture( )
      , bp::wrapper< cv::VideoCapture >(){
        // null constructor
    
    }

    VideoCapture_wrapper(::std::string const & filename )
    : cv::VideoCapture( filename )
      , bp::wrapper< cv::VideoCapture >(){
        // constructor
    
    }

    VideoCapture_wrapper(int device )
    : cv::VideoCapture( device )
      , bp::wrapper< cv::VideoCapture >(){
        // constructor
    
    }

    virtual double get( int propId ) {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( propId );
        else{
            return this->cv::VideoCapture::get( propId );
        }
    }
    
    double default_get( int propId ) {
        return cv::VideoCapture::get( propId );
    }

    virtual bool grab(  ) {
        if( bp::override func_grab = this->get_override( "grab" ) )
            return func_grab(  );
        else{
            return this->cv::VideoCapture::grab(  );
        }
    }
    
    bool default_grab(  ) {
        return cv::VideoCapture::grab( );
    }

    virtual bool isOpened(  ) const  {
        if( bp::override func_isOpened = this->get_override( "isOpened" ) )
            return func_isOpened(  );
        else{
            return this->cv::VideoCapture::isOpened(  );
        }
    }
    
    bool default_isOpened(  ) const  {
        return cv::VideoCapture::isOpened( );
    }

    virtual bool open( ::std::string const & filename ) {
        if( bp::override func_open = this->get_override( "open" ) )
            return func_open( filename );
        else{
            return this->cv::VideoCapture::open( filename );
        }
    }
    
    bool default_open( ::std::string const & filename ) {
        return cv::VideoCapture::open( filename );
    }

    virtual bool open( int device ) {
        if( bp::override func_open = this->get_override( "open" ) )
            return func_open( device );
        else{
            return this->cv::VideoCapture::open( device );
        }
    }
    
    bool default_open( int device ) {
        return cv::VideoCapture::open( device );
    }

    virtual void release(  ) {
        if( bp::override func_release = this->get_override( "release" ) )
            func_release(  );
        else{
            this->cv::VideoCapture::release(  );
        }
    }
    
    void default_release(  ) {
        cv::VideoCapture::release( );
    }

    virtual bool retrieve( ::cv::Mat & image, int channel=0 ) {
        if( bp::override func_retrieve = this->get_override( "retrieve" ) )
            return func_retrieve( boost::ref(image), channel );
        else{
            return this->cv::VideoCapture::retrieve( boost::ref(image), channel );
        }
    }
    
    bool default_retrieve( ::cv::Mat & image, int channel=0 ) {
        return cv::VideoCapture::retrieve( boost::ref(image), channel );
    }

    virtual bool set( int propId, double value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            return func_set( propId, value );
        else{
            return this->cv::VideoCapture::set( propId, value );
        }
    }
    
    bool default_set( int propId, double value ) {
        return cv::VideoCapture::set( propId, value );
    }

    VideoCapture &rshift( cv::Mat &x ){ return *this >> x; }

};

void register_VideoCapture_class(){

    { //::cv::VideoCapture
        typedef bp::class_< VideoCapture_wrapper > VideoCapture_exposer_t;
        VideoCapture_exposer_t VideoCapture_exposer = VideoCapture_exposer_t( "VideoCapture", bp::init< >() );
        bp::scope VideoCapture_scope( VideoCapture_exposer );
        VideoCapture_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::VideoCapture >() );
        VideoCapture_exposer.def( bp::init< std::string const & >(( bp::arg("filename") )) );
        bp::implicitly_convertible< std::string const &, cv::VideoCapture >();
        VideoCapture_exposer.def( bp::init< int >(( bp::arg("device") )) );
        bp::implicitly_convertible< int, cv::VideoCapture >();
        { //::cv::VideoCapture::get
        
            typedef double ( ::cv::VideoCapture::*get_function_type )( int ) ;
            typedef double ( VideoCapture_wrapper::*default_get_function_type )( int ) ;
            
            VideoCapture_exposer.def( 
                "get"
                , get_function_type(&::cv::VideoCapture::get)
                , default_get_function_type(&VideoCapture_wrapper::default_get)
                , ( bp::arg("propId") ) );
        
        }
        { //::cv::VideoCapture::grab
        
            typedef bool ( ::cv::VideoCapture::*grab_function_type )(  ) ;
            typedef bool ( VideoCapture_wrapper::*default_grab_function_type )(  ) ;
            
            VideoCapture_exposer.def( 
                "grab"
                , grab_function_type(&::cv::VideoCapture::grab)
                , default_grab_function_type(&VideoCapture_wrapper::default_grab) );
        
        }
        { //::cv::VideoCapture::isOpened
        
            typedef bool ( ::cv::VideoCapture::*isOpened_function_type )(  ) const;
            typedef bool ( VideoCapture_wrapper::*default_isOpened_function_type )(  ) const;
            
            VideoCapture_exposer.def( 
                "isOpened"
                , isOpened_function_type(&::cv::VideoCapture::isOpened)
                , default_isOpened_function_type(&VideoCapture_wrapper::default_isOpened) );
        
        }
        { //::cv::VideoCapture::open
        
            typedef bool ( ::cv::VideoCapture::*open_function_type )( ::std::string const & ) ;
            typedef bool ( VideoCapture_wrapper::*default_open_function_type )( ::std::string const & ) ;
            
            VideoCapture_exposer.def( 
                "open"
                , open_function_type(&::cv::VideoCapture::open)
                , default_open_function_type(&VideoCapture_wrapper::default_open)
                , ( bp::arg("filename") ) );
        
        }
        { //::cv::VideoCapture::open
        
            typedef bool ( ::cv::VideoCapture::*open_function_type )( int ) ;
            typedef bool ( VideoCapture_wrapper::*default_open_function_type )( int ) ;
            
            VideoCapture_exposer.def( 
                "open"
                , open_function_type(&::cv::VideoCapture::open)
                , default_open_function_type(&VideoCapture_wrapper::default_open)
                , ( bp::arg("device") ) );
        
        }
        { //::cv::VideoCapture::release
        
            typedef void ( ::cv::VideoCapture::*release_function_type )(  ) ;
            typedef void ( VideoCapture_wrapper::*default_release_function_type )(  ) ;
            
            VideoCapture_exposer.def( 
                "release"
                , release_function_type(&::cv::VideoCapture::release)
                , default_release_function_type(&VideoCapture_wrapper::default_release) );
        
        }
        { //::cv::VideoCapture::retrieve
        
            typedef bool ( ::cv::VideoCapture::*retrieve_function_type )( ::cv::Mat &,int ) ;
            typedef bool ( VideoCapture_wrapper::*default_retrieve_function_type )( ::cv::Mat &,int ) ;
            
            VideoCapture_exposer.def( 
                "retrieve"
                , retrieve_function_type(&::cv::VideoCapture::retrieve)
                , default_retrieve_function_type(&VideoCapture_wrapper::default_retrieve)
                , ( bp::arg("image"), bp::arg("channel")=(int)(0) ) );
        
        }
        { //::cv::VideoCapture::set
        
            typedef bool ( ::cv::VideoCapture::*set_function_type )( int,double ) ;
            typedef bool ( VideoCapture_wrapper::*default_set_function_type )( int,double ) ;
            
            VideoCapture_exposer.def( 
                "set"
                , set_function_type(&::cv::VideoCapture::set)
                , default_set_function_type(&VideoCapture_wrapper::default_set)
                , ( bp::arg("propId"), bp::arg("value") ) );
        
        }
        VideoCapture_exposer.def( "__rshift__", &VideoCapture_wrapper::rshift, bp::return_self<>() );
    }

}
