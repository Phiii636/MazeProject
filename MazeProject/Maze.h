#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace my
{
	enum character
	{
		WALL = '¡ö',
		PATH = '¡õ',
		BEGIN = '¡ð',
		END = '¡ñ',
		CURR_PLACE = '¡Á'
	};

	class Maze
	{
	private:
		vector<vector<character>> map;

	public:
		Maze() :map(vector<vector<character>>()) {}
		Maze(const Maze& maze);
		Maze(const vector<vector<character>>& chInput);
		void ReplaceCh(const character& before, const character& after);

		inline size_t size_row() const;
		inline size_t size_col() const;
		const character& operator()(const size_t& x,const size_t& y) const;

		friend ostream& operator<<(ostream& os, const Maze& maze);
	};
}