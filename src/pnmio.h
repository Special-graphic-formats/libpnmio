/*
 * File       : pnmio.h                                                        
 * Description: Header file for pnmio.c.
 * Author     : Nikolaos Kavvadias <nikolaos.kavvadias@gmail.com>                
 * Copyright  : (C) Nikolaos Kavvadias 2012, 2013, 2014
 * Website    : http://www.nkavvadias.com                            
 *                                                                          
 * This file is part of libpnmio, and is distributed under the terms of the  
 * Modified BSD License.
 *
 * A copy of the Modified BSD License is included with this distribution 
 * in the file LICENSE.
 * libpnmio is free software: you can redistribute it and/or modify it under the
 * terms of the Modified BSD License. 
 * libpnmio is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the Modified BSD License for more details.
 * 
 * You should have received a copy of the Modified BSD License along with 
 * libpnmio. If not, see <http://www.gnu.org/licenses/>. 
 */
 
#ifndef PNMIO_H
#define PNMIO_H

#include <stdio.h>

void read_pbm_header(FILE *, int *, int *, int);
void read_pgm_header(FILE *, int *, int *, int *, int);
void read_ppm_header(FILE *, int *, int *, int *, int);
void read_pbm_data(FILE *, int *, int);
void read_pgm_data(FILE *, int *, int);
void read_ppm_data(FILE *, int *, int);
void write_pbm_file(FILE *, int *, char *, int, int, int, int, int, int);
void write_pgm_file(FILE *f, int *, char *, int, int, int, int, int, int, int);
void write_ppm_file(FILE *, int *, char *, int, int, int, int, int, int);
  
#endif /* PNMIO_H */