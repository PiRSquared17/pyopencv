#ifndef SDOPENCV_HEADERS_H
#define SDOPENCV_HEADERS_H

#include "cxtypes.h"
#include "cxcore.h"
#include "cxoperations.hpp"
#include "cxmat.hpp"
#include "cxcore.hpp"

#include "cvtypes.h"
#include "cv.h"
#include "cvcompat.h"
#include "cv.hpp"

#include "highgui.h"
#include "highgui.hpp"

#include "cxflann.h"

// We never know whether the user turns SWIG on or not. To be on the safe side, just turn SWIG on temporarily.
#ifdef SWIG
#include "ml.h"
#else
#define SWIG
#include "ml.h"
#undef SWIG
#endif


#include "cvaux.hpp"
#include "cvvidsurv.hpp"
#include "cvaux.h"


struct CvGenericHash {};
struct CvFileStorage {};

struct _CvContourScanner {};
struct CvHidHaarClassifierCascade {};
struct CvFeatureTree {};
struct CvLSH {};
// struct CvLSHOperations {}; // if cv.hpp is not included
struct CvPOSITObject {};


struct CvPyramid
{
    CvMat **pyramid;
    int extra_layers;
    
    ~CvPyramid() { if (pyramid) cvReleasePyramid(&pyramid, extra_layers); }
};

struct CvCapture {};
struct CvVideoWriter {};

namespace flann {
    class Index {};
}

# include "template_instantiations.hpp"


#endif
