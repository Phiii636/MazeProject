#include "Maze.h"

namespace my
{
	//复制构造
	Maze::Maze(const Maze& maze)
	{
		map = maze.map;
	}

	//数组构造
	Maze::Maze(const vector<vector<int>>& input)
	{
		map = input;
	}

	//行数
	size_t Maze::size_row() const
	{
		return map.size();
	}

	//列数
	size_t Maze::size_col() const
	{
		return map[0].size();
	}

	//返回迷宫的元素
	const int& Maze::operator()(const size_t& x, const size_t& y) const
	{
		return map[x][y];
	}

	//打印迷宫
	ostream& operator<<(ostream& os, const Maze& maze)
	{
		for (const auto& row : maze.map)
		{
			for (const auto& sto : row)
			{
				switch(sto)
				{
				case STO_WALL:
					os << PRI_WALL;
					break;
				case STO_PATH:
					os << PRI_PATH;
					break;
				case STO_BEGIN:
					os << PRI_BEGIN;
					break;
				case STO_END:
					os << PRI_END;
					break;
				default:
					break;
				}
			}
			os << endl;
		}

		return os;
	}
}