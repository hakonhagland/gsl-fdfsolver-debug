typedef struct
  {
    const char *name;
  }
gsl_root_fdfsolver_type;

typedef struct
  {
    double root ;
  }
gsl_root_fdfsolver;
extern const gsl_root_fdfsolver_type  * gsl_root_fdfsolver_newton;
