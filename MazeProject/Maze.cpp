#include "Maze.h"

namespace my
{
	//复制构造
	Maze::Maze(const Maze& maze)
	{
		map = maze.map;
	}

	//使用数字存储迷宫的转换构造
	//Maze::Maze(const vector<vector<int>>& numInput, const int& numWALL, const int& numPATH)
	//{
	//	map = vector<vector<character>>
	//		(numInput.size(), vector<character>(numInput[0].size()));
	//
	//	for(size_t i = 0;i<numInput.size();++i)
	//		for (size_t j = 0; j < numInput[0].size(); ++j)
	//		{
	//			if (numInput[i][j] == numWALL)
	//				map[i][j] = WALL;
	//			else if (numInput[i][j] == numPATH)
	//				map[i][j] = PATH;
	//			else
	//			{
	//				cout << "迷宫初始化错误！" << endl;
	//				return;
	//			}
	//		}
	//}

	//字符数组输入
	Maze::Maze(const vector<vector<character>>& chInput)
	{
		map = chInput;
	}

	//替换字符
	void Maze::ReplaceCh(const character& before, const character& after)
	{
		for (auto& row : map)
			for (auto& ch : row)
				if (ch == before)
					ch = after;
	}

	//行数
	inline size_t Maze::size_row() const
	{
		return map.size();
	}

	//列数
	inline size_t Maze::size_col() const
	{
		return map[0].size();
	}

	//打印迷宫
	ostream& operator<<(ostream& os, const Maze& maze)
	{
		for (auto row : maze.map)
		{
			for (auto ch : row)
				os << ch;
			os << endl;
		}

		return os;
	}
}