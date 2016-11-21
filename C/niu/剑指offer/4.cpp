#include<iostream>
#include<vector> 
using namespace std;
 class Solution
{
public:vector < int >PrintMatrix (vector < vector < int >>matrix)
  {
    vector < int >vec_it;
    if (matrix.size () <= 0 || matrix[0].size () <= 0)
      return vec_it;
    
    else
      
      {
	int columns = matrix[0].size (), rows = matrix.size ();
	int start = 0;
	while (columns > start * 2 && rows > start * 2)
	  
	  {
	    PrintMatrixInCricle (vec_it, matrix, columns, rows, start);
	    ++start;
	  }
	return vec_it;
      }
  }
  void PrintMatrixInCricle (vector < int >&vec,
			     vector < vector < int >>matrix, int columns,
			     int rows, int start) 
  {
    
      //
    int endX = columns - start - 1;
    int endY = rows - start - 1;
    for (int i = start; i <= endX; ++i)
      vec.push_back (matrix[start][i]);	// --> 
    if (start < endY)
      for (int i = start + 1; i <= endY; ++i)
	vec.push_back (matrix[i][endX]);	// 
    if (start < endY && start < endX)
      for (int i = endX - 1; i >= start; --i)
	vec.push_back (matrix[endY][i]);	// -->  
    if (start < endY - 1 && start < endX)
      for (int i = endY - 1; i >= start + 1; --i)
	vec.push_back (matrix[i][start]);	// -->  
} };

int
main () 
{
  Solution Sol;
  vector < int >vec;
  vec = Sol.PrintMatrix (
			   {
			   {
			   1, 2, 3, 4},
			   {
			   5, 6, 7, 8},
			   {
			   9, 10, 11, 12},
			   {
			   13, 14, 15, 16}});
  for (auto it = begin (vec); it != end (vec); ++it)
    
    {
      cout << *it << endl;
    }
  return 0;
}


