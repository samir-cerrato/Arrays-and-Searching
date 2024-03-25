/*Samir Cerrato
* COMP 211, Fall 2022, Wesleyan University
 * Homework #4, Problems 2-4
 *
 * Arrays and searching.
 */

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "hw4.h"

/* bin_search(A, n, x) =
 *   i,   where A[i] == x and A[j] != x for j<i, if there is such an i
 *        such that 0 <= i < n.
 *   -1,  if there is no such i.
 *
 * Pre-conditions:  A[0] <= ... <= A[n-1] and size of A is n.
 */
int bin_search(int A[], int n, int x) {
  int low=0;
  int high=n-1;
  int m;
  while(low < high){
    m=low+(high-low)/2;

    if(A[m]==x){
      if(A[m-1]==x){

        high=m;
      }
      else {

        return m;
      }
      }
    else if(A[m]>x)
      high=m;
    else{
      low=m+1;
    }
  }
    return -1;
}
/* unimodal_search(A, n) = j, where A[j] = max{A[0],...,A[n-1]}.
 *
 * Pre-conditions:
 * - A has size n.
 * - There is j such that
 *     A[0] < A[1] < ... < A[j-1] < A[j] > A[j+1] > ... A[n-1].
 *   It is possible that j=0 or j=n-1.
 */
int unimodal_search(int A[], int n){
  int low=0;
  int high=n-1;
  int m;
  while(low <= high){
    m=low+((high-low)/2);
    if(A[m] > A[m+1]){
      if(A[m] > A[m-1]){
        return m;
      }
      else{
        high= m-1;
      }
    }
    else if(A[m] < A[m+1]){
      low=m+1;
    }
  }
  return -1;
}

/* After calling merge(A, m, B, n, C):
 * - C contains all the elements of A and B;
 * - C[0] <= ... <= C[m + n -1]
 *
 * Pre-conditions:
 * - A has size m and A[0] <= ... <= A[m-1].
 * - B has size n and B[0] <= ... <= B[n-1].
 * - C has size m + n.
 */
void merge(int A[], int m, int B[], int n, int C[]) {
  int i=0;
  int j=0;
  int k=0;
  while(i < m && j < n){
    if (A[i] < B[j]){
      C[k]= A[i];
      i++;
      k++;
    }
  else{
    C[k]= B[j];
      j++;
      k++;
    }
  }
  while(i<m){
    C[k]= A[i];
    i++;
    k++;
  }
  while(j<n){
    C[k]= B[j];
    j++;
    k++;
  }
}
