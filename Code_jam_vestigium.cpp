// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020993c
// 04-04-2020 Medium?

#include<bits/stdc++.h>
using namespace std;

int
main ()
{
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++)
    {
      int matrixSize;
      cin >> matrixSize;
      int matrix[matrixSize][matrixSize];
      int repeatedR = 0, repeatedC = 0, trace = 0;
      set < int >rowUnique, colUnique;

      for (int i_row = 0; i_row < matrixSize; i_row++)
	{
	  for (int i_col = 0; i_col < matrixSize; i_col++)
	    {
	      cin >> matrix[i_row][i_col];
	    }
	}

      // Compute trace
      for (int i_diag = 0; i_diag < matrixSize; i_diag++)
	trace += matrix[i_diag][i_diag];

      // Compute repeated in row and column
      for (int i_row = 0; i_row < matrixSize; i_row++)
	{
	  rowUnique.clear ();
	  colUnique.clear ();
	  for (int i_col = 0; i_col < matrixSize; i_col++)
	    {
	      rowUnique.insert (matrix[i_row][i_col]);
	      colUnique.insert (matrix[i_col][i_row]);
	    }
	  repeatedR += (matrixSize - rowUnique.size () > 0);
	  repeatedC += (matrixSize - colUnique.size () > 0);
	}


      cout << "Case #" << i << ": " << trace << " " << repeatedR << " " <<
	repeatedC << endl;
    }
}

