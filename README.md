# gsl-fdfsolver-debug

1. Compile library: `$ cd lib; make; cd ..`
2. Run perl script: `p.pl`

Output should be like:

```
The input parameter 'T' should be equal to the global symbol the  'gsl_root_fdfsolver_newton'... checking:
  T = 0x7fe1eb744030
  gsl_root_fdfsolver_newton = 0x7fe1eb743e10
  --> no match!
```
  
