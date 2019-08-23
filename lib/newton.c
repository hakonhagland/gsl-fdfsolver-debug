#include "gsl_roots.h"

static const gsl_root_fdfsolver_type newton_type =
    {"newton"};
const gsl_root_fdfsolver_type  * gsl_root_fdfsolver_newton = &newton_type;
