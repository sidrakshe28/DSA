class Solution {
public:
    std::vector<std::vector<int>> imageSmoother(std::vector<std::vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        std::vector<std::vector<int>> result(rows, std::vector<int>(cols, 0));

        // Define the neighbors' coordinates relative to the current pixel
        int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int total_sum = 0;
                int count = 0;

                // Calculate the sum of the pixel values in the 3x3 neighborhood
                for (int k = 0; k < 9; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                        total_sum += img[ni][nj];
                        count += 1;
                    }
                }

                // Compute the average and store it in the result matrix
                result[i][j] = total_sum / count;
            }
        }

        return result;
    }
};
