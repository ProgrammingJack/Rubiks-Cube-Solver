#include "group.h"


class CornerPermutation : public Group
{
public:
	CornerPermutation() : Group(40320, 8) {}

private:
	void index_to_array(int index, vector<int> & arr);
	void apply_move(vector<int> & arr, int move);
	int array_to_index(vector<int> const& arr);
	void permute_array(vector<int> & arr, int idx1, int idx2, int idx3, int idx4);
};