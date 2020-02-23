#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges, *identity;

  edges = new_matrix(4, 2);
  identity = new_matrix(4, 4);
  ident(identity);
  printf("Testing add_edge:\n");
  add_edge(edges,1,2,3,4,5,6);
  print_matrix(edges);
  printf("Testing ident: \n");
  print_matrix(identity);
  printf("Testing matrix multplication:\n");
  matrix_mult(identity,edges);
  print_matrix(edges);
  printf("Testing matrix multiplication part 2: m1 =\n");
  identity = new_matrix(4,4);
  add_edge(identity, 1.00,2.00,3.00,4.00,5.00,6.00);
  add_edge(identity, 7.00,8.00,9.00,10.00,11.00,12.00);
  print_matrix(identity);
  printf("m1 * m2 =\n");
  matrix_mult(identity,edges);
  print_matrix(edges);

  free_matrix( edges );
}
