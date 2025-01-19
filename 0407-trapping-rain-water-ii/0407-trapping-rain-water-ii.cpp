class Solution {
public:
    int trapRainWater(vector<vector<int>>& height_map) {
        // Define a tuple for priority queue to store the height and the coordinates
        using HeightAndCoordinates = tuple<int, int, int>;

        // Priority queue to store the boundary bars' height in ascending order
        priority_queue<HeightAndCoordinates, vector<HeightAndCoordinates>, greater<HeightAndCoordinates>> min_heap;

        // Get the dimensions of the height map
        int rows = height_map.size(), cols = height_map[0].size();

        // Visited matrix to keep track of the visited cells
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        // Mark the boundary cells as visited and add them to the min_heap
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                    min_heap.emplace(height_map[i][j], i, j);
                    visited[i][j] = true;
                }
            }
        }

        // Initialize the water trapped accumulator to 0
        int trapped_water = 0;

        // Directions array to facilitate the traversal of adjacent cells
        // Up, Right, Down, Left
        const int directions[5] = {-1, 0, 1, 0, -1};

        // Process cells until there are no more cells in the priority queue
        while (!min_heap.empty()) {
            auto [current_height, row, col] = min_heap.top();
            min_heap.pop();

            // Check all 4 possible directions
            for (int k = 0; k < 4; ++k) {
                int new_row = row + directions[k];
                int new_col = col + directions[k + 1];

                // Check if the new cell is within bounds and not visited
                if (new_row >= 0 && new_row < rows && new_col >= 0 && new_col < cols && !visited[new_row][new_col]) {
                    // Update trapped water if the adjacent cell's height is less than the current cell's height
                    trapped_water += max(0, current_height - height_map[new_row][new_col]);

                    // Mark the cell as visited
                    visited[new_row][new_col] = true;

                    // Push the maximum height of the adjacent cell or current cell into the min_heap
                    min_heap.emplace(max(height_map[new_row][new_col], current_height), new_row, new_col);
                }
            }
        }

        // Return the total trapped water
        return trapped_water;
    }
};