#include <mpi.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int rank, size;
  MPI_Init(&argc, &argv); // this function initializes the MPI
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  // pre-defined communicator defined in the library
  // determines the overall number of n processes in a parallel program
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  // determines the unique identifier for each processor
  printf("hello world, im %d out of %d\n", rank, size);
  MPI_Finalize();
  return 0;
}
