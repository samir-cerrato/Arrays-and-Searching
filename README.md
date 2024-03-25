# Arrays-and-Searching

# Write a function merge that satisfies the following specification:

• Function header. void merge(int A[], int m, int B[], int n, int C[])

• Pre-condition. A[0] ≤···≤A[m −1] and A has size m; B[0] ≤···≤B[n −1] and B has
size n; and C has size m + n. In other words, the pre-conditions state that A and B are
sorted in non-decreasing order.

• Function body. This should satisfy the following: when merge(A, m, B, n, C) returns, C
comprises all elements of A and B, and furthermore C[0] ≤ ··· ≤ C[m + n −1], i.e., C is
also sorted in non-decreasing order.

Your function must have cost O(m + n). The basic idea here is to “zipper” together the elements
of A and B. You will need two variables, one of which marches through the indices of A and
the other of which marches through the indices of B. The indices tell you which elements of A
and B could be the next one to be added to C; which one is actually added will depend on how
they compare to each other. You will need to do the marching simultaneously with an appropriate
loop.

# Write a function bin search that satisfies the following specification:

• Function header. int bin search(int A[], int n, int x)

• Pre-condition. A has size n, and for 0 ≤i < n −1, A[i] ≤A[i + 1]

• Function body. This should satisfy the following:
bin_search(A, n, x) =

{
i, where A[i] = x and for all j < i, A[j] 6= x
−1, there is no i such that 0 ≤i < n and A[i] = x.

In other words, the function you will implement is similar to the binary search algorithm described
in class and the readings, except that it must return the smallest index i such that A[i] = x.

# Write a function unimodal search that satisfies the following specification:

• Function header. int unimodal search(int A[], int x)

• Pre-condition. A has size n, and there is some i such that
A[0] < A[1] < ···< A[i −1] < A[i] > A[i + 1] > ···> A[n −1].

• Function body. This should satisfy the following:
unimodal_search(A, n) = i, where A[i] = max (A[0], . . . , A[n −1]).

In other words, A consists of values that are strictly increasing up to some index i, and then
strictly decreasing after that. unimodal_search(A, n) will return i. Note that it could be that i = 0
or i = n −1. There are at least a couple of ways of doing this. One is a fairly direct adaptation of
binary search and has cost O(log2 n). A cleverer implementation has cost O(log3 n).

