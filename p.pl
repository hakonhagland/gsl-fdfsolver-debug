#! /usr/bin/env perl

use strict;
use warnings;
use FFI::Platypus;

my $ffi = FFI::Platypus->new();
$ffi->lib( 'lib/libmylib.so' );
$ffi->type('opaque'       => 'gsl_root_fdfsolver_type_ptr');
my $function = $ffi->function(
    'gsl_root_fdfsolver_alloc',
    [ 'gsl_root_fdfsolver_type_ptr' ] => 'opaque'
);
my $solver_type = $ffi->find_symbol('gsl_root_fdfsolver_newton');
my $solver = $function->call( $solver_type );



