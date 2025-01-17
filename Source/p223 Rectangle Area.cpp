#include "leetcode.h"

/**
Find the total area covered by two rectilinear rectangles in a 2D plane.

Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.

Rectangle Area
Assume that the total area is never beyond the maximum possible value of int.

*/

class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		int l = max(A, E);
		int r = min(C, G);
		int u = min(D, H);
		int d = max(B, F);
		int doubled = (r - l) * (u - d);
		if (l >= r || d >= u)
			doubled = 0;
		return (C - A) * (D - B) + (G - E) * (H - F) - doubled;
	}
};
