from cxcore import *
from cv import *
from ml import *
from highgui import *

# Cv
CV_AUTOSTEP = 0x7fffffff
CV_MAX_ARR = 10
CV_NO_DEPTH_CHECK = 1
CV_NO_CN_CHECK = 2
CV_NO_SIZE_CHECK = 4
CV_CMP_EQ = 0
CV_CMP_GT = 1
CV_CMP_GE = 2
CV_CMP_LT = 3
CV_CMP_LE = 4
CV_CMP_NE = 5
CV_CHECK_RANGE = 1
CV_CHECK_QUIET = 2
CV_RAND_UNI = 0
CV_RAND_NORMAL = 1
CV_SORT_EVERY_ROW = 0
CV_SORT_EVERY_COLUMN = 1
CV_SORT_ASCENDING = 0
CV_SORT_DESCENDING = 16
CV_GEMM_A_T = 1
CV_GEMM_B_T = 2
CV_GEMM_C_T = 4
CV_SVD_MODIFY_A = 1
CV_SVD_U_T = 2
CV_SVD_V_T = 4
CV_LU = 0
CV_SVD = 1
CV_SVD_SYM = 2
CV_LSQ = 8
CV_COVAR_SCRAMBLED = 0
CV_COVAR_NORMAL = 1
CV_COVAR_USE_AVG = 2
CV_COVAR_SCALE = 4
CV_COVAR_ROWS = 8
CV_COVAR_COLS = 16
CV_PCA_DATA_AS_ROW = 0
CV_PCA_DATA_AS_COL = 1
CV_PCA_USE_AVG = 2
CV_C = 1
CV_L1 = 2
CV_L2 = 4
CV_NORM_MASK = 7
CV_RELATIVE = 8
CV_DIFF = 16
CV_MINMAX = 32
CV_DIFF_C = (16|1)
CV_DIFF_L1 = (16|2)
CV_DIFF_L2 = (16|4)
CV_RELATIVE_C = (8|1)
CV_RELATIVE_L1 = (8|2)
CV_RELATIVE_L2 = (8|4)
CV_REDUCE_SUM = 0
CV_REDUCE_AVG = 1
CV_REDUCE_MAX = 2
CV_REDUCE_MIN = 3
CV_DXT_FORWARD = 0
CV_DXT_INVERSE = 1
CV_DXT_SCALE = 2
CV_DXT_INV_SCALE = (1+2)
CV_DXT_INVERSE_SCALE = (1+2)
CV_DXT_ROWS = 4
CV_DXT_MUL_CONJ = 8
CV_FRONT = 1
CV_BACK = 0
CV_GRAPH_VERTEX = 1
CV_GRAPH_TREE_EDGE = 2
CV_GRAPH_BACK_EDGE = 4
CV_GRAPH_FORWARD_EDGE = 8
CV_GRAPH_CROSS_EDGE = 16
CV_GRAPH_ANY_EDGE = 30
CV_GRAPH_NEW_TREE = 32
CV_GRAPH_BACKTRACKING = 64
CV_GRAPH_OVER = -1
CV_GRAPH_ALL_ITEMS = -1
CV_GRAPH_ITEM_VISITED_FLAG = (1 << 30)
CV_GRAPH_SEARCH_TREE_NODE_FLAG = (1 << 29)
CV_GRAPH_FORWARD_EDGE_FLAG = (1 << 28)
CV_FILLED = -1
CV_AA = 16
CV_FONT_HERSHEY_SIMPLEX = 0
CV_FONT_HERSHEY_PLAIN = 1
CV_FONT_HERSHEY_DUPLEX = 2
CV_FONT_HERSHEY_COMPLEX = 3
CV_FONT_HERSHEY_TRIPLEX = 4
CV_FONT_HERSHEY_COMPLEX_SMALL = 5
CV_FONT_HERSHEY_SCRIPT_SIMPLEX = 6
CV_FONT_HERSHEY_SCRIPT_COMPLEX = 7
CV_FONT_ITALIC = 16
CV_FONT_VECTOR0 = 0
CV_ErrModeLeaf = 0
CV_ErrModeParent = 1
CV_ErrModeSilent = 2
CV_MAJOR_VERSION = 1
CV_MINOR_VERSION = 1
CV_SUBMINOR_VERSION = 0
CV_VERSION = "1.1.0"
CV_PI = 3.1415926535897932384626433832795
CV_LOG2 = 0.69314718055994530941723212145818
IPL_DEPTH_SIGN = 0x80000000
IPL_DEPTH_1U = 1
IPL_DEPTH_8U = 8
IPL_DEPTH_16U = 16
IPL_DEPTH_32F = 32
IPL_DEPTH_8S = (0x80000000|8)
IPL_DEPTH_16S = (0x80000000|16)
IPL_DEPTH_32S = (0x80000000|32)
IPL_DATA_ORDER_PIXEL = 0
IPL_DATA_ORDER_PLANE = 1
IPL_ORIGIN_TL = 0
IPL_ORIGIN_BL = 1
IPL_ALIGN_4BYTES = 4
IPL_ALIGN_8BYTES = 8
IPL_ALIGN_16BYTES = 16
IPL_ALIGN_32BYTES = 32
IPL_ALIGN_DWORD = 4
IPL_ALIGN_QWORD = 8
IPL_BORDER_CONSTANT = 0
IPL_BORDER_REPLICATE = 1
IPL_BORDER_REFLECT = 2
IPL_BORDER_WRAP = 3
IPL_IMAGE_HEADER = 1
IPL_IMAGE_DATA = 2
IPL_IMAGE_ROI = 4
IPL_BORDER_REFLECT_101 = 4
CV_TYPE_NAME_IMAGE = "opencv-image"
IPL_DEPTH_64F = 64
CV_CN_MAX = 64
CV_CN_SHIFT = 3
CV_DEPTH_MAX = (1 << 3)
CV_8U = 0
CV_8S = 1
CV_16U = 2
CV_16S = 3
CV_32S = 4
CV_32F = 5
CV_64F = 6
CV_USRTYPE1 = 7
CV_8UC1 = ((0) +(((1) -1) << 3))
CV_8UC2 = ((0) +(((2) -1) << 3))
CV_8UC3 = ((0) +(((3) -1) << 3))
CV_8UC4 = ((0) +(((4) -1) << 3))
CV_8SC1 = ((1) +(((1) -1) << 3))
CV_8SC2 = ((1) +(((2) -1) << 3))
CV_8SC3 = ((1) +(((3) -1) << 3))
CV_8SC4 = ((1) +(((4) -1) << 3))
CV_16UC1 = ((2) +(((1) -1) << 3))
CV_16UC2 = ((2) +(((2) -1) << 3))
CV_16UC3 = ((2) +(((3) -1) << 3))
CV_16UC4 = ((2) +(((4) -1) << 3))
CV_16SC1 = ((3) +(((1) -1) << 3))
CV_16SC2 = ((3) +(((2) -1) << 3))
CV_16SC3 = ((3) +(((3) -1) << 3))
CV_16SC4 = ((3) +(((4) -1) << 3))
CV_32SC1 = ((4) +(((1) -1) << 3))
CV_32SC2 = ((4) +(((2) -1) << 3))
CV_32SC3 = ((4) +(((3) -1) << 3))
CV_32SC4 = ((4) +(((4) -1) << 3))
CV_32FC1 = ((5) +(((1) -1) << 3))
CV_32FC2 = ((5) +(((2) -1) << 3))
CV_32FC3 = ((5) +(((3) -1) << 3))
CV_32FC4 = ((5) +(((4) -1) << 3))
CV_64FC1 = ((6) +(((1) -1) << 3))
CV_64FC2 = ((6) +(((2) -1) << 3))
CV_64FC3 = ((6) +(((3) -1) << 3))
CV_64FC4 = ((6) +(((4) -1) << 3))
CV_AUTO_STEP = 0x7fffffff
CV_MAT_CN_MASK = ((64-1) << 3)
CV_MAT_DEPTH_MASK = ((1 << 3) -1)
CV_MAT_TYPE_MASK = ((1 << 3) *64-1)
CV_MAT_CONT_FLAG_SHIFT = 14
CV_MAT_CONT_FLAG = (1 << 14)
CV_MAT_TEMP_FLAG_SHIFT = 15
CV_MAT_TEMP_FLAG = (1 << 15)
CV_MAGIC_MASK = 0xFFFF0000
CV_MAT_MAGIC_VAL = 0x42420000
CV_TYPE_NAME_MAT = "opencv-matrix"
CV_MATND_MAGIC_VAL = 0x42430000
CV_TYPE_NAME_MATND = "opencv-nd-matrix"
CV_MAX_DIM = 32
CV_MAX_DIM_HEAP = (1 << 16)
CV_SPARSE_MAT_MAGIC_VAL = 0x42440000
CV_TYPE_NAME_SPARSE_MAT = "opencv-sparse-matrix"
CV_HIST_MAGIC_VAL = 0x42450000
CV_HIST_UNIFORM_FLAG = (1 << 10)
CV_HIST_RANGES_FLAG = (1 << 11)
CV_HIST_ARRAY = 0
CV_HIST_SPARSE = 1
CV_HIST_TREE = 1
CV_HIST_UNIFORM = 1
CV_TERMCRIT_ITER = 1
CV_TERMCRIT_NUMBER = 1
CV_TERMCRIT_EPS = 2
CV_WHOLE_SEQ_END_INDEX = 0x3fffffff
CV_STORAGE_MAGIC_VAL = 0x42890000
CV_TYPE_NAME_SEQ = "opencv-sequence"
CV_TYPE_NAME_SEQ_TREE = "opencv-sequence-tree"
CV_SET_ELEM_IDX_MASK = ((1 << 26) -1)
CV_TYPE_NAME_GRAPH = "opencv-graph"
CV_SEQ_MAGIC_VAL = 0x42990000
CV_SET_MAGIC_VAL = 0x42980000
CV_SEQ_ELTYPE_BITS = 9
CV_SEQ_ELTYPE_MASK = ((1 << 9) -1)
CV_SEQ_ELTYPE_POINT = ((4) +(((2) -1) << 3))
CV_SEQ_ELTYPE_CODE = ((0) +(((1) -1) << 3))
CV_SEQ_ELTYPE_GENERIC = 0
CV_SEQ_ELTYPE_PTR = 7
CV_SEQ_ELTYPE_PPOINT = 7
CV_SEQ_ELTYPE_INDEX = ((4) +(((1) -1) << 3))
CV_SEQ_ELTYPE_GRAPH_EDGE = 0
CV_SEQ_ELTYPE_GRAPH_VERTEX = 0
CV_SEQ_ELTYPE_TRIAN_ATR = 0
CV_SEQ_ELTYPE_CONNECTED_COMP = 0
CV_SEQ_ELTYPE_POINT3D = ((5) +(((3) -1) << 3))
CV_SEQ_KIND_BITS = 3
CV_SEQ_KIND_MASK = (((1 << 3) -1) << 9)
CV_SEQ_KIND_GENERIC = (0 << 9)
CV_SEQ_KIND_CURVE = (1 << 9)
CV_SEQ_KIND_BIN_TREE = (2 << 9)
CV_SEQ_KIND_GRAPH = (3 << 9)
CV_SEQ_KIND_SUBDIV2D = (4 << 9)
CV_SEQ_FLAG_SHIFT = (3+9)
CV_SEQ_FLAG_CLOSED = (1 << (3+9))
CV_SEQ_FLAG_SIMPLE = (2 << (3+9))
CV_SEQ_FLAG_CONVEX = (4 << (3+9))
CV_SEQ_FLAG_HOLE = (8 << (3+9))
CV_GRAPH_FLAG_ORIENTED = (1 << (3+9))
CV_GRAPH = (3 << 9)
CV_ORIENTED_GRAPH = ((3 << 9)|(1 << (3+9)))
CV_SEQ_POINT_SET = ((0 << 9)|((4) +(((2) -1) << 3)))
CV_SEQ_POINT3D_SET = ((0 << 9)|((5) +(((3) -1) << 3)))
CV_SEQ_POLYLINE = ((1 << 9)|((4) +(((2) -1) << 3)))
CV_SEQ_POLYGON = ((1 << (3+9))|((1 << 9)|((4) +(((2) -1) << 3))))
CV_SEQ_CONTOUR = ((1 << (3+9))|((1 << 9)|((4) +(((2) -1) << 3))))
CV_SEQ_SIMPLE_POLYGON = ((2 << (3+9))|((1 << (3+9))|((1 << 9)|((4) +(((2) -1) << 3)))))
CV_SEQ_CHAIN = ((1 << 9)|((0) +(((1) -1) << 3)))
CV_SEQ_CHAIN_CONTOUR = ((1 << (3+9))|((1 << 9)|((0) +(((1) -1) << 3))))
CV_SEQ_POLYGON_TREE = ((2 << 9)|0)
CV_SEQ_CONNECTED_COMP = ((0 << 9)|0)
CV_SEQ_INDEX = ((0 << 9)|((4) +(((1) -1) << 3)))
CV_STORAGE_READ = 0
CV_STORAGE_WRITE = 1
CV_STORAGE_WRITE_TEXT = 1
CV_STORAGE_WRITE_BINARY = 1
CV_STORAGE_APPEND = 2
CV_NODE_NONE = 0
CV_NODE_INT = 1
CV_NODE_INTEGER = 1
CV_NODE_REAL = 2
CV_NODE_FLOAT = 2
CV_NODE_STR = 3
CV_NODE_STRING = 3
CV_NODE_REF = 4
CV_NODE_SEQ = 5
CV_NODE_MAP = 6
CV_NODE_TYPE_MASK = 7
CV_NODE_FLOW = 8
CV_NODE_USER = 16
CV_NODE_EMPTY = 32
CV_NODE_NAMED = 64
CV_NODE_SEQ_SIMPLE = 256
CV_StsOk = 0
CV_StsBackTrace = -1
CV_StsError = -2
CV_StsInternal = -3
CV_StsNoMem = -4
CV_StsBadArg = -5
CV_StsBadFunc = -6
CV_StsNoConv = -7
CV_StsAutoTrace = -8
CV_HeaderIsNull = -9
CV_BadImageSize = -10
CV_BadOffset = -11
CV_BadDataPtr = -12
CV_BadStep = -13
CV_BadModelOrChSeq = -14
CV_BadNumChannels = -15
CV_BadNumChannel1U = -16
CV_BadDepth = -17
CV_BadAlphaChannel = -18
CV_BadOrder = -19
CV_BadOrigin = -20
CV_BadAlign = -21
CV_BadCallBack = -22
CV_BadTileSize = -23
CV_BadCOI = -24
CV_BadROISize = -25
CV_MaskIsTiled = -26
CV_StsNullPtr = -27
CV_StsVecLengthErr = -28
CV_StsFilterStructContentErr = -29
CV_StsKernelStructContentErr = -30
CV_StsFilterOffsetErr = -31
CV_StsBadSize = -201
CV_StsDivByZero = -202
CV_StsInplaceNotSupported = -203
CV_StsObjectNotFound = -204
CV_StsUnmatchedFormats = -205
CV_StsBadFlag = -206
CV_StsBadPoint = -207
CV_StsBadMask = -208
CV_StsUnmatchedSizes = -209
CV_StsUnsupportedFormat = -210
CV_StsOutOfRange = -211
CV_StsParseError = -212
CV_StsNotImplemented = -213
CV_StsBadMemBlock = -214
CV_BLUR_NO_SCALE = 0
CV_BLUR = 1
CV_GAUSSIAN = 2
CV_MEDIAN = 3
CV_BILATERAL = 4
CV_INPAINT_NS = 0
CV_INPAINT_TELEA = 1
CV_SCHARR = -1
CV_MAX_SOBEL_KSIZE = 7
CV_BGR2BGRA = 0
CV_RGB2RGBA = 0
CV_BGRA2BGR = 1
CV_RGBA2RGB = 1
CV_BGR2RGBA = 2
CV_RGB2BGRA = 2
CV_RGBA2BGR = 3
CV_BGRA2RGB = 3
CV_BGR2RGB = 4
CV_RGB2BGR = 4
CV_BGRA2RGBA = 5
CV_RGBA2BGRA = 5
CV_BGR2GRAY = 6
CV_RGB2GRAY = 7
CV_GRAY2BGR = 8
CV_GRAY2RGB = 8
CV_GRAY2BGRA = 9
CV_GRAY2RGBA = 9
CV_BGRA2GRAY = 10
CV_RGBA2GRAY = 11
CV_BGR2BGR565 = 12
CV_RGB2BGR565 = 13
CV_BGR5652BGR = 14
CV_BGR5652RGB = 15
CV_BGRA2BGR565 = 16
CV_RGBA2BGR565 = 17
CV_BGR5652BGRA = 18
CV_BGR5652RGBA = 19
CV_GRAY2BGR565 = 20
CV_BGR5652GRAY = 21
CV_BGR2BGR555 = 22
CV_RGB2BGR555 = 23
CV_BGR5552BGR = 24
CV_BGR5552RGB = 25
CV_BGRA2BGR555 = 26
CV_RGBA2BGR555 = 27
CV_BGR5552BGRA = 28
CV_BGR5552RGBA = 29
CV_GRAY2BGR555 = 30
CV_BGR5552GRAY = 31
CV_BGR2XYZ = 32
CV_RGB2XYZ = 33
CV_XYZ2BGR = 34
CV_XYZ2RGB = 35
CV_BGR2YCrCb = 36
CV_RGB2YCrCb = 37
CV_YCrCb2BGR = 38
CV_YCrCb2RGB = 39
CV_BGR2HSV = 40
CV_RGB2HSV = 41
CV_BGR2Lab = 44
CV_RGB2Lab = 45
CV_BayerBG2BGR = 46
CV_BayerGB2BGR = 47
CV_BayerRG2BGR = 48
CV_BayerGR2BGR = 49
CV_BayerBG2RGB = 48
CV_BayerGB2RGB = 49
CV_BayerRG2RGB = 46
CV_BayerGR2RGB = 47
CV_BGR2Luv = 50
CV_RGB2Luv = 51
CV_BGR2HLS = 52
CV_RGB2HLS = 53
CV_HSV2BGR = 54
CV_HSV2RGB = 55
CV_Lab2BGR = 56
CV_Lab2RGB = 57
CV_Luv2BGR = 58
CV_Luv2RGB = 59
CV_HLS2BGR = 60
CV_HLS2RGB = 61
CV_COLORCVT_MAX = 100
CV_INTER_NN = 0
CV_INTER_LINEAR = 1
CV_INTER_CUBIC = 2
CV_INTER_AREA = 3
CV_WARP_FILL_OUTLIERS = 8
CV_WARP_INVERSE_MAP = 16
CV_SHAPE_RECT = 0
CV_SHAPE_CROSS = 1
CV_SHAPE_ELLIPSE = 2
CV_SHAPE_CUSTOM = 100
CV_MOP_OPEN = 2
CV_MOP_CLOSE = 3
CV_MOP_GRADIENT = 4
CV_MOP_TOPHAT = 5
CV_MOP_BLACKHAT = 6
CV_TM_SQDIFF = 0
CV_TM_SQDIFF_NORMED = 1
CV_TM_CCORR = 2
CV_TM_CCORR_NORMED = 3
CV_TM_CCOEFF = 4
CV_TM_CCOEFF_NORMED = 5
CV_LKFLOW_PYR_A_READY = 1
CV_LKFLOW_PYR_B_READY = 2
CV_LKFLOW_INITIAL_GUESSES = 4
CV_LKFLOW_GET_MIN_EIGENVALS = 8
CV_POLY_APPROX_DP = 0
CV_DOMINANT_IPAN = 1
CV_CONTOURS_MATCH_I1 = 1
CV_CONTOURS_MATCH_I2 = 2
CV_CONTOURS_MATCH_I3 = 3
CV_CONTOUR_TREES_MATCH_I1 = 1
CV_CLOCKWISE = 1
CV_COUNTER_CLOCKWISE = 2
CV_COMP_CORREL = 0
CV_COMP_CHISQR = 1
CV_COMP_INTERSECT = 2
CV_COMP_BHATTACHARYYA = 3
CV_VALUE = 1
CV_ARRAY = 2
CV_DIST_MASK_3 = 3
CV_DIST_MASK_5 = 5
CV_DIST_MASK_PRECISE = 0
CV_THRESH_BINARY = 0
CV_THRESH_BINARY_INV = 1
CV_THRESH_TRUNC = 2
CV_THRESH_TOZERO = 3
CV_THRESH_TOZERO_INV = 4
CV_THRESH_MASK = 7
CV_THRESH_OTSU = 8
CV_ADAPTIVE_THRESH_MEAN_C = 0
CV_ADAPTIVE_THRESH_GAUSSIAN_C = 1
CV_FLOODFILL_FIXED_RANGE = (1 << 16)
CV_FLOODFILL_MASK_ONLY = (1 << 17)
CV_CANNY_L2_GRADIENT = (1 << 31)
CV_HOUGH_STANDARD = 0
CV_HOUGH_PROBABILISTIC = 1
CV_HOUGH_MULTI_SCALE = 2
CV_HOUGH_GRADIENT = 3
CV_HAAR_DO_CANNY_PRUNING = 1
CV_HAAR_SCALE_IMAGE = 2
CV_HAAR_FIND_BIGGEST_OBJECT = 4
CV_HAAR_DO_ROUGH_SEARCH = 8
CV_LMEDS = 4
CV_RANSAC = 8
CV_CALIB_CB_ADAPTIVE_THRESH = 1
CV_CALIB_CB_NORMALIZE_IMAGE = 2
CV_CALIB_CB_FILTER_QUADS = 4
CV_CALIB_USE_INTRINSIC_GUESS = 1
CV_CALIB_FIX_ASPECT_RATIO = 2
CV_CALIB_FIX_PRINCIPAL_POINT = 4
CV_CALIB_ZERO_TANGENT_DIST = 8
CV_CALIB_FIX_FOCAL_LENGTH = 16
CV_CALIB_FIX_K1 = 32
CV_CALIB_FIX_K2 = 64
CV_CALIB_FIX_K3 = 128
CV_CALIB_FIX_INTRINSIC = 256
CV_CALIB_SAME_FOCAL_LENGTH = 512
CV_CALIB_ZERO_DISPARITY = 1024
CV_FM_7POINT = 1
CV_FM_8POINT = 2
CV_FM_LMEDS_ONLY = 4
CV_FM_RANSAC_ONLY = 8
CV_FM_LMEDS = 4
CV_FM_RANSAC = 8
CV_STEREO_BM_NORMALIZED_RESPONSE = 0
CV_STEREO_BM_BASIC = 0
CV_STEREO_BM_FISH_EYE = 1
CV_STEREO_BM_NARROW = 2
CV_RETR_EXTERNAL = 0
CV_RETR_LIST = 1
CV_RETR_CCOMP = 2
CV_RETR_TREE = 3
CV_CHAIN_CODE = 0
CV_CHAIN_APPROX_NONE = 1
CV_CHAIN_APPROX_SIMPLE = 2
CV_CHAIN_APPROX_TC89_L1 = 3
CV_CHAIN_APPROX_TC89_KCOS = 4
CV_LINK_RUNS = 5
CV_SUBDIV2D_VIRTUAL_POINT_FLAG = (1 << 30)
CV_DIST_USER = -1
CV_DIST_L1 = 1
CV_DIST_L2 = 2
CV_DIST_C = 3
CV_DIST_L12 = 4
CV_DIST_FAIR = 5
CV_DIST_WELSCH = 6
CV_DIST_HUBER = 7
CV_HAAR_MAGIC_VAL = 0x42500000
CV_TYPE_NAME_HAAR = "opencv-haar-classifier"
CV_HAAR_FEATURE_MAX = 3
CV_PTLOC_ERROR = CV_PTLOC_ERROR
CV_PTLOC_OUTSIDE_RECT = CV_PTLOC_OUTSIDE_RECT
CV_PTLOC_INSIDE = CV_PTLOC_INSIDE
CV_PTLOC_VERTEX = CV_PTLOC_VERTEX
CV_PTLOC_ON_EDGE = CV_PTLOC_ON_EDGE
CV_NEXT_AROUND_ORG = CV_NEXT_AROUND_ORG
CV_NEXT_AROUND_DST = CV_NEXT_AROUND_DST
CV_PREV_AROUND_ORG = CV_PREV_AROUND_ORG
CV_PREV_AROUND_DST = CV_PREV_AROUND_DST
CV_NEXT_AROUND_LEFT = CV_NEXT_AROUND_LEFT
CV_NEXT_AROUND_RIGHT = CV_NEXT_AROUND_RIGHT
CV_PREV_AROUND_LEFT = CV_PREV_AROUND_LEFT
CV_PREV_AROUND_RIGHT = CV_PREV_AROUND_RIGHT
CV_GAUSSIAN_5x5 = CV_GAUSSIAN_5x5


# Ml
CV_LOG2PI = (1.8378770664093454835606594728112)
CV_COL_SAMPLE = 0
CV_ROW_SAMPLE = 1
CV_VAR_NUMERICAL = 0
CV_VAR_ORDERED = 0
CV_VAR_CATEGORICAL = 1
CV_TYPE_NAME_ML_SVM = "opencv-ml-svm"
CV_TYPE_NAME_ML_KNN = "opencv-ml-knn"
CV_TYPE_NAME_ML_NBAYES = "opencv-ml-bayesian"
CV_TYPE_NAME_ML_EM = "opencv-ml-em"
CV_TYPE_NAME_ML_BOOSTING = "opencv-ml-boost-tree"
CV_TYPE_NAME_ML_TREE = "opencv-ml-tree"
CV_TYPE_NAME_ML_ANN_MLP = "opencv-ml-ann-mlp"
CV_TYPE_NAME_ML_CNN = "opencv-ml-cnn"
CV_TYPE_NAME_ML_RTREES = "opencv-ml-random-trees"
CvParamGrid.SVM_C = 0
CvParamGrid.SVM_GAMMA = 1
CvParamGrid.SVM_P = 2
CvParamGrid.SVM_NU = 3
CvParamGrid.SVM_COEF = 4
CvParamGrid.SVM_DEGREE = 5
CvSVM.C_SVC = 100
CvSVM.NU_SVC = 101
CvSVM.ONE_CLASS = 102
CvSVM.EPS_SVR = 103
CvSVM.NU_SVR = 104
CvSVM.LINEAR = 0
CvSVM.POLY = 1
CvSVM.RBF = 2
CvSVM.SIGMOID = 3
CvSVM.C = 0
CvSVM.GAMMA = 1
CvSVM.P = 2
CvSVM.NU = 3
CvSVM.COEF = 4
CvSVM.DEGREE = 5
CvEM.COV_MAT_SPHERICAL = 0
CvEM.COV_MAT_DIAGONAL = 1
CvEM.COV_MAT_GENERIC = 2
CvEM.START_E_STEP = 1
CvEM.START_M_STEP = 2
CvEM.START_AUTO_STEP = 0
CvBoost.DISCRETE = 0
CvBoost.REAL = 1
CvBoost.LOGIT = 2
CvBoost.GENTLE = 3
CvBoost.DEFAULT = 0
CvBoost.GINI = 1
CvBoost.MISCLASS = 3
CvBoost.SQERR = 4
CvANN_MLP_TrainParams.BACKPROP = 0
CvANN_MLP_TrainParams.RPROP = 1
CvANN_MLP.IDENTITY = 0
CvANN_MLP.SIGMOID_SYM = 1
CvANN_MLP.GAUSSIAN = 2
CvANN_MLP.UPDATE_WEIGHTS = 1
CvANN_MLP.NO_INPUT_SCALE = 2
CvANN_MLP.NO_OUTPUT_SCALE = 4
CV_TS_CONCENTRIC_SPHERES = 0

  
  
# Highgui
CV_WINDOW_AUTOSIZE = 1
CV_EVENT_MOUSEMOVE = 0
CV_EVENT_LBUTTONDOWN = 1
CV_EVENT_RBUTTONDOWN = 2
CV_EVENT_MBUTTONDOWN = 3
CV_EVENT_LBUTTONUP = 4
CV_EVENT_RBUTTONUP = 5
CV_EVENT_MBUTTONUP = 6
CV_EVENT_LBUTTONDBLCLK = 7
CV_EVENT_RBUTTONDBLCLK = 8
CV_EVENT_MBUTTONDBLCLK = 9
CV_EVENT_FLAG_LBUTTON = 1
CV_EVENT_FLAG_RBUTTON = 2
CV_EVENT_FLAG_MBUTTON = 4
CV_EVENT_FLAG_CTRLKEY = 8
CV_EVENT_FLAG_SHIFTKEY = 16
CV_EVENT_FLAG_ALTKEY = 32
CV_LOAD_IMAGE_UNCHANGED = -1
CV_LOAD_IMAGE_GRAYSCALE = 0
CV_LOAD_IMAGE_COLOR = 1
CV_LOAD_IMAGE_ANYDEPTH = 2
CV_LOAD_IMAGE_ANYCOLOR = 4
CV_CVTIMG_FLIP = 1
CV_CVTIMG_SWAP_RB = 2
CV_CAP_ANY = 0
CV_CAP_MIL = 100
CV_CAP_VFW = 200
CV_CAP_V4L = 200
CV_CAP_V4L2 = 200
CV_CAP_FIREWARE = 300
CV_CAP_FIREWIRE = 300
CV_CAP_IEEE1394 = 300
CV_CAP_DC1394 = 300
CV_CAP_CMU1394 = 300
CV_CAP_STEREO = 400
CV_CAP_TYZX = 400
CV_TYZX_LEFT = 400
CV_TYZX_RIGHT = 401
CV_TYZX_COLOR = 402
CV_TYZX_Z = 403
CV_CAP_QT = 500
CV_CAP_UNICAP = 600
CV_CAP_DSHOW = 700
CV_CAP_PROP_POS_MSEC = 0
CV_CAP_PROP_POS_FRAMES = 1
CV_CAP_PROP_POS_AVI_RATIO = 2
CV_CAP_PROP_FRAME_WIDTH = 3
CV_CAP_PROP_FRAME_HEIGHT = 4
CV_CAP_PROP_FPS = 5
CV_CAP_PROP_FOURCC = 6
CV_CAP_PROP_FRAME_COUNT = 7
CV_CAP_PROP_FORMAT = 8
CV_CAP_PROP_MODE = 9
CV_CAP_PROP_BRIGHTNESS = 10
CV_CAP_PROP_CONTRAST = 11
CV_CAP_PROP_SATURATION = 12
CV_CAP_PROP_HUE = 13
CV_CAP_PROP_GAIN = 14
CV_CAP_PROP_CONVERT_RGB = 15
CV_FOURCC_PROMPT = -1
CV_FOURCC_DEFAULT = -1
HG_AUTOSIZE = 1
