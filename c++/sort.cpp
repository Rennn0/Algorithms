// void insertionSort(std::vector<int> &v) {
//   if (v.size() <= 1)
//     return;

//   for (int i = 1; i < v.size(); i++) {
//     const int pivot = v[i];
//     int j = i - 1;
//     while (j >= 0 && v[j] > pivot) {
//       v[j + 1] = v[j];
//       j--;
//     }
//     v[j + 1] = pivot;
//   }
// }

// void merge(std::vector<int> &leftVec, std::vector<int> &rightVec,
//            std::vector<int> &vec) {
//   const int length = vec.size();

//   const int left = length / 2;
//   const int right = length - left;

//   int i = 0, l = 0, r = 0;

//   while (l < left && r < right) {
//     if (leftVec[l] < rightVec[r]) {
//       vec[i++] = leftVec[l++];
//     } else {
//       vec[i++] = rightVec[r++];
//     }
//   }

//   while (l < left) {
//     vec[i++] = leftVec[l++];
//   }

//   while (r < right) {
//     vec[i++] = rightVec[r++];
//   }
// }

// void mergeSort(std::vector<int> &vec) {
//   const int length = vec.size();

//   if (length <= 1)
//     return;

//   const int left = length / 2;
//   const int right = length - left;

//   std::vector<int> leftVec = std::vector<int>(left);
//   std::vector<int> rightVec = std::vector<int>(right);

//   int j = 0;
//   for (int i = 0; i < length; i++) {
//     if (i < left) {
//       leftVec[i] = vec[i];
//     } else {
//       rightVec[j++] = vec[i];
//     }
//   }

//   mergeSort(leftVec);
//   mergeSort(rightVec);

//   merge(leftVec, rightVec, vec);
// }

// void mergeSortNew(std::vector<int> &vec, const int begin, const int end) {
//   auto merge = [&](const int left, const int mid, const int right) {
//     const int lSize = mid - left + 1;
//     const int rSize = right - mid;

//     int leftVec[lSize + 1];
//     int rightVec[rSize + 1];

//     for (int i = 0; i < lSize; i++) {
//       leftVec[i] = vec[left + i];
//     }
//     leftVec[lSize] = INT_MAX;

//     for (int i = 0; i < rSize; i++) {
//       rightVec[i] = vec[mid + 1 + i];
//     }
//     rightVec[rSize] = INT_MAX;

//     int i = 0, j = 0;
//     for (int k = left; k <= end; k++) {
//       if (leftVec[i] < rightVec[j]) {
//         vec[k] = leftVec[i++];
//       } else {
//         vec[k] = rightVec[j++];
//       }
//     }
//   };

//   if (begin < end) {
//     const int mid = (begin + end) / 2;
//     mergeSortNew(vec, begin, mid);
//     mergeSortNew(vec, mid + 1, end);
//     merge(begin, mid, end);
//   }
// }
