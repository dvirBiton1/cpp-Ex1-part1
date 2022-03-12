#include <string>
#include <iostream>
#include <vector>

using namespace std;
namespace ariel
{
    string mat(int col, int row, char s1, char s2);
};
class Matrix {
 public:
  Matrix(): data({}) {}

  Matrix(const int &rows, const int &cols) {
    Reset(rows, cols);
  }

  void Reset(const int &rows, const int &cols) {
    data.resize(rows);
    for (int i = 0; i < rows; ++i) {
      data.at(i).resize(cols);
    }
  }

  int GetNumRows() const {
    return data.size();
  }

  int GetNumColumns() const {
    if (GetNumRows() > 0) {
      return data[0].size();
    }

    return 0;
  }

 private:
  std::vector<std::vector<int>> data;
};
