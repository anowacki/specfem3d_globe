 
 !
 ! this is the parameter file for static compilation of the solver
 !
 ! mesh statistics:
 ! ---------------
 !
 !
 ! number of chunks =            6
 !
 ! these statistics do not include the central cube
 !
 ! number of processors =           96
 !
 ! maximum number of points per region =       509449
 !
 ! on NEC SX, make sure "loopcnt=" parameter
 ! in Makefile is greater than max vector length =      1528347
 !
 ! total elements per slice =         8336
 ! total points per slice =       560035
 !
 ! total for full 6-chunk mesh:
 ! ---------------------------
 !
 ! exact total number of spectral elements in entire mesh = 
 !    800256.000000000     
 ! approximate total number of points in entire mesh = 
 !    53763360.0000000     
 ! approximate total number of degrees of freedom in entire mesh = 
 !    152076960.000000     
 !
 ! resolution of the mesh at the surface:
 ! -------------------------------------
 !
 ! spectral elements along a great circle =          512
 ! GLL points along a great circle =         2048
 ! average distance between points in degrees =   0.1757812    
 ! average distance between points in km =    19.54598    
 ! average size of a spectral element in km =    78.18393    
 !
 ! number of time steps =        10100
 ! value of a time step DT =   0.150000000000000     
 !
 ! number of seismic sources =            1
 !
 
 ! approximate static memory needed by the solver:
 ! ----------------------------------------------
 !
 ! size of static arrays per slice =   0.150383662432432       GB
 !
 !   (should be below and typically equal to 80% of 1.5 GB = 1.2 GB on pangu
 !    at Caltech, and below and typically equal to 85% of 2 GB = 1.7 GB
 !    on Marenostrum in Barcelona)
 !   (if significantly more, the job will not run by lack of memory)
 !   (if significantly less, you waste a significant amount of memory)
 !
 ! size of static arrays for all slices =    14.4368315935135       GB
 !                                      =   1.409846835304052E-002  TB
 !
 
 integer, parameter :: NEX_XI_VAL =          128
 integer, parameter :: NEX_ETA_VAL =          128
 
 integer, parameter :: NSPEC_CRUST_MANTLE =         7616
 integer, parameter :: NSPEC_OUTER_CORE =          688
 integer, parameter :: NSPEC_INNER_CORE =           32
 
 integer, parameter :: NGLOB_CRUST_MANTLE =       509449
 integer, parameter :: NGLOB_OUTER_CORE =        47985
 integer, parameter :: NGLOB_INNER_CORE =         2601
 
 integer, parameter :: NSPECMAX_ANISO_IC =            1
 
 integer, parameter :: NSPECMAX_ISO_MANTLE =         7616
 integer, parameter :: NSPECMAX_TISO_MANTLE =         2304
 integer, parameter :: NSPECMAX_ANISO_MANTLE =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_ATTENUAT =         7616
 integer, parameter :: NSPEC_CRUST_MANTLE_ATTENUAT3D = 1
 integer, parameter :: NSPEC_INNER_CORE_ATTENUATION =           32
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STR_OR_ATT =         7616
 integer, parameter :: NSPEC_INNER_CORE_STR_OR_ATT =           32
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STR_AND_ATT =            1
 integer, parameter :: NSPEC_INNER_CORE_STR_AND_ATT =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STRAIN_ONLY =            1
 integer, parameter :: NSPEC_INNER_CORE_STRAIN_ONLY =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_ADJOINT =            1
 integer, parameter :: NSPEC_OUTER_CORE_ADJOINT =            1
 integer, parameter :: NSPEC_INNER_CORE_ADJOINT =            1
 integer, parameter :: NGLOB_CRUST_MANTLE_ADJOINT =            1
 integer, parameter :: NGLOB_OUTER_CORE_ADJOINT =            1
 integer, parameter :: NGLOB_INNER_CORE_ADJOINT =            1
 integer, parameter :: NSPEC_OUTER_CORE_ROT_ADJOINT =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STACEY =            1
 integer, parameter :: NSPEC_OUTER_CORE_STACEY =            1
 
 integer, parameter :: NGLOB_CRUST_MANTLE_OCEANS =            1
 
 logical, parameter :: TRANSVERSE_ISOTROPY_VAL = .true.
 
 logical, parameter :: ANISOTROPIC_3D_MANTLE_VAL = .false.
 
 logical, parameter :: ANISOTROPIC_INNER_CORE_VAL = .false.
 
 logical, parameter :: ATTENUATION_VAL = .true.
 
 logical, parameter :: ATTENUATION_3D_VAL = .false.
 
 logical, parameter :: ELLIPTICITY_VAL = .true.
 
 logical, parameter :: GRAVITY_VAL = .false.
 
 logical, parameter :: ROTATION_VAL = .false.
 integer, parameter :: NSPEC_OUTER_CORE_ROTATION =            1
 
 integer, parameter :: NGLOB1D_RADIAL_CM =          105
 integer, parameter :: NGLOB1D_RADIAL_OC =           65
 integer, parameter :: NGLOB1D_RADIAL_IC =            9
 integer, parameter :: NGLOB2DMAX_XMIN_XMAX_CM =         7934
 integer, parameter :: NGLOB2DMAX_XMIN_XMAX_OC =         2134
 integer, parameter :: NGLOB2DMAX_XMIN_XMAX_IC =          178
 integer, parameter :: NGLOB2DMAX_YMIN_YMAX_CM =         7934
 integer, parameter :: NGLOB2DMAX_YMIN_YMAX_OC =         2134
 integer, parameter :: NGLOB2DMAX_YMIN_YMAX_IC =          178
 integer, parameter :: NPROC_XI_VAL =            4
 integer, parameter :: NPROC_ETA_VAL =            4
 integer, parameter :: NCHUNKS_VAL =            6
 integer, parameter :: NPROCTOT_VAL =           96
 integer, parameter :: NGLOB2DMAX_XY_VAL_CM =         7934
 integer, parameter :: NGLOB2DMAX_XY_VAL_OC =         2134
 integer, parameter :: NGLOB2DMAX_XY_VAL_IC =          178
 integer, parameter :: NUMMSGS_FACES_VAL =           48
 integer, parameter :: NCORNERSCHUNKS_VAL =            8
 integer, parameter :: ATT1 =            1
 integer, parameter :: ATT2 =            1
 integer, parameter :: ATT3 =            1
 integer, parameter :: ATT4 =        70000
 integer, parameter :: ATT5 =        70000
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_CM =          408
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_CM =          408
 integer, parameter :: NSPEC2D_BOTTOM_CM =           64
 integer, parameter :: NSPEC2D_TOP_CM =         1024
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_IC =            8
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_IC =            8
 integer, parameter :: NSPEC2D_BOTTOM_IC =           16
 integer, parameter :: NSPEC2D_TOP_IC =           16
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_OC =          100
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_OC =          100
 integer, parameter :: NSPEC2D_BOTTOM_OC =           16
 integer, parameter :: NSPEC2D_TOP_OC =           64
 integer, parameter :: NSPEC2D_MOHO =            1
 integer, parameter :: NSPEC2D_400 =            1
 integer, parameter :: NSPEC2D_670 =            1
 integer, parameter :: NSPEC2D_CMB =            1
 integer, parameter :: NSPEC2D_ICB =            1