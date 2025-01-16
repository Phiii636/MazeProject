#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace my
{
	constexpr char PRI_PATH = '-';
	constexpr char PRI_WALL = '#';
	constexpr char PRI_BEGIN = 'B';
	constexpr char PRI_END = 'E';
	constexpr char PRI_CURR_PLACE = 'P';

	enum storeForm
	{
		STO_PATH = 0,
		STO_WALL = 1,
		STO_BEGIN = 2,
		STO_END = 3
	};

	class Maze
	{
	private:
		vector<vector<int>> map;

	public:
		Maze() :map(vector<vector<int>>()) {}
		Maze(const Maze& maze);
		Maze(const vector<vector<int>>& input);

		size_t size_row() const;
		size_t size_col() const;
		const int& operator()(const size_t& x,const size_t& y) const;

		friend ostream& operator<<(ostream& os, const Maze& maze);
	};
}