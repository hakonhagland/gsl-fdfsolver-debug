#include <stdio.h>
#include "gsl_roots.h"

gsl_root_fdfsolver *
gsl_root_fdfsolver_alloc (const gsl_root_fdfsolver_type * T)
{
    printf("The input parameter 'T' should be equal to the global symbol "
        "'gsl_root_fdfsolver_newton'... checking:\n");
    printf("  T = %p\n", T);
    printf("  gsl_root_fdfsolver_newton = %p\n", gsl_root_fdfsolver_newton);
    if ( T != gsl_root_fdfsolver_newton ) {
        printf("  --> no match!\n");
    }
    else {
        printf("  --> ok!\n");
    }
    return NULL;
}
