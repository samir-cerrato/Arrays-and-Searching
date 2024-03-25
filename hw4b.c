/*Samir Cerrato
COMP211
Professor Manfredi
October 4, 2022
*/

void merge(int A[], int m, int B[], int n, int C[]){
  int i;
  int j;
  int k;
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
