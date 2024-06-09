#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;  // Start pointer
        int right = height.size() - 1;  // End pointer
        int max_area = 0;  // Initialize max_area

        while (left < right) {
            // Calculate the area with the current pointers
            int width = right - left;
            int current_height = min(height[left], height[right]);
            int current_area = width * current_height;

            // Update max_area if the current_area is greater
            max_area = max(max_area, current_area);

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_area;  // Return the maximum area found
    }
};
