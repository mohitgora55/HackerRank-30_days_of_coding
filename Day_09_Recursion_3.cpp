#include <bits/stdc++.h>

using namespace std;
int sum=1;
// Complete the factorial function below.
int factorial(int n) 
{
  sum=sum*n;
  if(n==1)
  {
    return sum;
  }
  else
   return factorial(n-1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
