/*
bool checkRows(std::vector<std::vector<int>> &matrix, int index, int n) {
  std::sort(matrix[index].begin(), matrix[index].end());

  for (int i = 0; i < n; i++) {
    if (matrix[index][i] != (i + 1))
      return false;
  }
  return true;
}

bool checkColums(std::vector<std::vector<int>> &matrix, int index, int n) {
  std::unordered_set<int> digits;

  for (int i = 0; i < n; i++) {
    digits.insert(matrix[i][index]);
  }

  return digits.size() == n;
}

bool checkValid(std::vector<std::vector<int>> &matrix) {
  const int n = matrix.size();
  for (int i = 0; i < n; i++)
    if (!checkColums(matrix, i, n))
      return false;

  for (int i = 0; i < n; i++)
    if (!checkRows(matrix, i, n))
      return false;

  return true;
}

std::vector<std::vector<int>> matrix1 = {{1, 1, 1}, {1, 2, 3}, {1, 2, 3}};
std::vector<std::vector<int>> matrix2 = {{1, 2, 3}, {3, 1, 2}, {2, 3, 1}};

bool m1 = checkValid(matrix1);
bool m2 = checkValid(matrix2);

std::cout << m1 << std::endl;
std::cout << m2 << std::endl;
*/